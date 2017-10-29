//
//  wifi_system.h
//  
//
//  Created by Kevin on 16/02/2017.
//
//

#ifndef wifi_system_h
#define wifi_system_h

#include <stdio.h>
#include "ZControlHelper.h"

typedef void ZWiFiSystem;

typedef enum{
    /**
     *  OK
     */
    ZWIFISYSTEM_CODE_OK = 0, //HTTP:200
    /**
     *  The error code not defined.
     */
    ZWIFISYSTEM_CODE_UNKNOWN,
    /**
     *  The host URL is invalid.
     */
    ZWIFISYSTEM_CODE_INVALID_HOST,
    /**
     *  Lost connection.
     */
    ZWIFISYSTEM_CODE_DISCONNECTION,
    /**
     *  Request timeout.
     */
    ZWIFISYSTEM_CODE_TIMEOUT,
    /**
     *  Authentication fail.
     */
    ZWIFISYSTEM_CODE_AUTHENTICATION_FAIL, //497
    /**
     *  Both authentication and signatue is empty.
     */
    ZWIFISYSTEM_CODE_AUTHENTICATION_AND_SIGNATURE_EMPTY,
    /**
     *  xmpp auto response if your contract is offline
     */
    ZWIFISYSTEM_CODE_UNSUPPORTED_API_VERSION, //499
    ZWIFISYSTEM_CODE_INVALID_CLOUND_ID, //498
    ZWIFISYSTEM_CODE_ENCRYPT_HASH_FAIL, //496
    ZWIFISYSTEM_CODE_OPERATION_TIMEOUT, //495
    ZWIFISYSTEM_CODE_ZAPI_EXECUTE_FAIL, //494
    ZWIFISYSTEM_CODE_PAIR_STATUS_FORMAT_FAIL, //493
    ZWIFISYSTEM_CODE_SECRET_KEY_ERROR, //492
    ZWIFISYSTEM_CODE_OTHER_FAIL, //490
    ZWIFISYSTEM_CODE_DEVICE_OFFLINE,  //500:
    ZWIFISYSTEM_CODE_INVALID_PARAMETER
} ZWiFiSystemCode;

typedef void (*callback_wifisystem)(ZWiFiSystemCode code, int session, void *userdata, char *response);
/**
 *  This function must be the first function to call, and it returns a ZWiFiSystem handle that you must use as input to other functions. This call MUST have a corresponding call to zwifisystem_cleanup when the operation is complete.
 *  @param handle The ZControlHelper handle.
 *
 *  @return The ZWiFiSystem handle.
 */
ZWiFiSystem *zwifisystem_initalize(ZControlHelper *handle);
/**
 *  Setting the authentication info, the both parameters could be token from ZPortal API.
 *
 *  @param handle The ZWiFiSystem handle.
 *  @param token The authentication token.
 *  @param cloudID The cloud ID.
 *
 *  @return ZWiFiSystemCode \link ZWIFISYSTEM_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZWiFiSystemCode \endlink man page for the full list with descriptions.
 */
ZWiFiSystemCode zwifisystem_set_authentication_info(ZWiFiSystem *handle, char *token, char *cloudID);
/**
 *  Setting the signature info, the parameter could be token from Zyxel BlutTooth API.
 *
 *  @param handle The ZWiFiSystem handle.
 *  @param pkey The rsa public key.
 *  @param pkeylen The length of rsa public key.
 *
 *  @return ZWiFiSystemCode \link ZWIFISYSTEM_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZWiFiSystemCode \endlink man page for the full list with descriptions.
 */
ZWiFiSystemCode zwifisystem_set_rsa_publicKey(ZWiFiSystem *handle, char *pkey, int pkeylen);
/**
 *  Setting the signature info, the parameter could be token from Zyxel  ZAPI.
 *
 *  @param handle The ZWiFiSystem handle.
 *  @param secretKey The secret key.
 *
 *  @return ZWiFiSystemCode \link ZWIFISYSTEM_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZWiFiSystemCode \endlink man page for the full list with descriptions.
 */
ZWiFiSystemCode zwifisystem_set_secretKey(ZWiFiSystem *handle, char *secretKey);

/**
 *  This function must be the last function. It is the opposite of the zwifisystem_cleanup function and must be called with the same handle as input that a zwifisystem_initalize call returned.\n
 *  And all the temporary variable would be released after you call this function.
 *
 *  @param handle The ZWiFiSystem handle.
 *
 *  @return ZWiFiSystemCode \link ZWIFISYSTEM_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZWiFiSystemCode \endlink man page for the full list with descriptions.
 */
ZWiFiSystemCode zwifisystem_cleanup(ZWiFiSystem *handle);

/**
 *  To send One Wi-Fi system query.
 *
 *  @param handle   The ZWiFiSystem handle.
 *  @param deviceID The remote device id.
 *  @param callback When the remote device have response, the callback function would be invoked.
 *  @param session  The session identify this communication, the callback would return the same session id.
 *  @param timeout  The timeout for remote, if remote receive this message and can't rely during the timeout, remote should retrun error.
 *  @param userdata An opaque data pointer that will be passed to the callback.
 *  @param query The query string.
 *
 *  @return ZControlPoint \link ZCONTROLPOINT_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZControlPointCode \endlink man page for the full list with descriptions.
 */
ZWiFiSystemCode zwifisystem_request(ZWiFiSystem *handle, char *deviceID, callback_wifisystem callback, int session, int timeout, void *userdata, char *query);
void zwifisystem_set_controlhelper(ZWiFiSystem *handle, ZControlHelper *helper);
ZWiFiSystemCode zwifisystem_set_jni_global_ref(ZWiFiSystem *handle, void *ref);
void *zwifisystem_get_jni_global_ref(ZWiFiSystem *handle);
#endif /* wifi_system_h */
