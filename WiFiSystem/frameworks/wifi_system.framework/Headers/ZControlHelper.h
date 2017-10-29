//
//  ZControlHelper.h
//  test
//
//  Created by Kevin on 2016/1/18.
//  Copyright © 2016年 ZyXEL. All rights reserved.
//

#ifndef ZControlHelper_h
#define ZControlHelper_h

#include <stdio.h>
#define ZCONTROL_DEBUG
#ifdef ZCONTROL_DEBUG
#define ZCONTROL_DBG_printf(format, args...)  printf("[%s:%d] " format, __FILE__, __LINE__, ##args)
#else
#define ZCONTROL_DBG_printf(args...)
#endif

#if PRODUCTION
#define XMPP_HOST_URL "ec2-54-165-139-227.compute-1.amazonaws.com"
#else
#define XMPP_HOST_URL "54.236.247.138"
#endif
#define XMPP_HOST_PORT 443

#define ZCONTROLHELPER_MAX_CHAR_SIZE 200
typedef void ZControlHelper;

typedef enum {
    ZCONTROLHELPER_CONN_CONNECT,
    ZCONTROLHELPER_CONN_DISCONNECT,
    ZCONTROLHELPER_CONN_FAIL
} ZControlHelper_conn_event_t;

/**
 *  All possible error codes from all sorts of ZControlHelper functions. Future versions
 may return other values, stay prepared.\n
 
 Always add new return codes last. Never *EVER* remove any. The return
 codes must remain the same!\n
 */
typedef enum{
    /**
     *  OK
     */
    ZCONTROLHELPER_CODE_OK = 0, //HTTP:200
    /**
     *  The error code not defined.
     */
    ZCONTROLHELPER_CODE_UNKNOWN,
    /**
     *  The host URL is invalid.
     */
    ZCONTROLHELPER_CODE_INVALID_HOST,
    /**
     *  Lost connection.
     */
    ZCONTROLHELPER_CODE_DISCONNECTION,
    /**
     *  Request timeout.
     */
    ZCONTROLHELPER_CODE_TIMEOUT, //599
    /**
     *  Authentication fail.
     */
    ZCONTROLHELPER_CODE_AUTHENTICATION_FAIL, //499 598 697
    ZCONTROLHELPER_CODE_DEVICE_OFFLINE //500:xmpp auto response if your contract is offline
} ZControlHelperCode;

/**
 *  \see zcontrolhelper
 *  \example zcontrolhelper
 */
typedef enum{
    /**
     *  The host URL.
     */
    ZCONTROLHELPER_OP_HOST, //required, XMPP server
    //    ZCONTROLHELPER_OP_AUTHENTICATION, //required, account and password
    /**
     *  The authentication token got from zprotal.
     */
    ZCONTROLHELPER_OP_AUTHENTICATION_TOKEN, //required, get from portal
    /**
     *  The user's cloudID got from zprotal.
     */
    ZCONTROLHELPER_OP_AUTHENTICATION_CLOUDID, //required, get from portal
    //    ZCONTROLHELPER_OP_PROTOCAL, //optional, default is XMPP
    //    ZCONTROLHELPER_OP_REMOTEID, //required, remote device jid
    /**
     *  Set the callback for event.
     */
    ZCONTROLHELPER_OP_EVENT_HANDLER
} ZControlHelperOption;


/**
 This function must be the first function to call, and it returns a ZontrolHelper handle that you must use as input to other functions. This call MUST have a corresponding call to zcontrolhelper_cleanup when the operation is complete.
 */
ZControlHelper *zcontrolhelper_initalize();
/**
 *  This function would connect to remote server, before build the connection you can setup your host url and host type by zcontrolhelper_setopt. If you chose XMPP server to communicate, you \b MUST setup the authentication token and cloudID.
 *  \see zcontrolhelper_setopt, ZCONTROLHELP_OP_AUTHENTICATION_TOKEN, ZCONTROLHELP_OP_AUTHENTICATION_CLOUDID
 *
 *  @param handle The ZControlHelper handle.
 *  @param account  account
 *  @param password password
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_connect_client(ZControlHelper *handle, char *account, char *password);
/**
 *  Start the event loop.
 *
 *  @param handle The controlPoint handle
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_run(ZControlHelper *handle);
/**
 *  Run the event loop once.
 *
 *  @param handle The controlPoint handle
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_run_once(ZControlHelper *handle);
/**
 *  Stop the event loop.
 *
 *  @param handle The controlPoint handle
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_stop(ZControlHelper *handle);
/**
 *  zcontrolhelper_setopt is used to tell zcontrolhelper how to behave. By setting the appropriate options, the application can change zcontrolhelper's behavior. All options are set with an option followed by one or more parameters. That parameter can be a long, a function pointer or an object pointer, depending on what the specific option expects. Read this manual carefully as bad input values may cause zcontrolhelper to behave badly! You can only set one option in each function call. A typical application uses many zportal calls in the setup phase.
 *
 *  @param handle The ZControlHelper handle.
 *  @param option The option you want to change in this handle.
 *  @param ... The type and numbers of parameter depend on \link ZControlHelperOption \endlink.
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_setopt(ZControlHelper *handle, ZControlHelperOption option, ...);
typedef void (*zcontrolhelper_conn_handler)(ZControlHelper *handle, ZControlHelper_conn_event_t event, void *userdata);
/**
 *  To set the connection hander(callback) function
 *  @param handle The ZControlHelper handle.
 *  @param callback The callback function.
 *  @param userdata The user data.
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_set_conn_handler(ZControlHelper *handle, zcontrolhelper_conn_handler callback, void *const userdata);
/**
 *  To get the connnection status currently.
 *  @param handle The ZControlHelper handle.
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelper_conn_event_t zcontrolhelper_get_conn_status(ZControlHelper *handle);
/**
 *  The function should be called after zcontrolhelper_signIn. \n
 *  This function is asynchronous so you should setup a callback function that would be invoke when the remote point have response.
 *
 *  @param handle The ZControlHelper handle.
 *  @param deviceID     The remote device id.
 *  @param session      The session identify this communication, the callback would return the same session id.
 *  @param timeout      The timeout for remote, if remote receive this message and can't rely during the timeout, remote should retrun error.
 *  @param msg          The message would be sended.
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_perform(ZControlHelper *handle, char *deviceID, int session, int timeout, void *msg);
/**
 *  Cancel the callback by session (registed by zcontrolhelper_perform()), the callback would be invoked.
 *
 *  @param handle The ZControlHelper handle.
 *  @param session      The session identify this communication, the callback would return the same session id.
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_cancel_callback(ZControlHelper *handle, int session);
/**
 *  This function must be the last function. It is the opposite of the zcontrolhelper_cleanup function and must be called with the same handle as input that a zcontrolhelper_initalize call returned.\n
 
 *  This might close all connections this handle has used and possibly has kept open until now. And all the temporary variable would be released after you call this function, if you intend to use the variable, you should copy it by yourself.
 *
 *  @param handle The handle is the return code from a zcontrolhelper_initalize
 *
 *  @return ZControlHelperCode \link ZCONTROLHELP_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlHelperCode \endlink man page for the full list with descriptions.
 */
ZControlHelperCode zcontrolhelper_cleanup(ZControlHelper *handle);
typedef void (*zcontrolhelper_response_callback)(int code, int session, void *userdata, ...);
ZControlHelperCode zcontrolhelper_get_connection(ZControlHelper *handle, void **conn);
ZControlHelperCode zcontrolhelper_set_jni_global_ref(ZControlHelper *handle, void *ref);
void *zcontrolhelper_get_jni_global_ref(ZControlHelper *handle);
#endif /* ZControlHelper_h */
