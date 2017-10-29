//
//  ZPortal.h
//  test
//
//  Created by Kevin on 2016/1/12.
//  Copyright © 2016年 ZyXEL. All rights reserved.
//

#ifndef ZPortal_h
#define ZPortal_h

#define  LOG_ZPORTAL_TAG    "ZPortal"
#ifdef ZPORTAL_DEBUG

#ifdef JNI_DEBUG
#include <android/log.h>
#define ZPORTAL_DBG_printf(...) __android_log_print(ANDROID_LOG_INFO,LOG_ZPORTAL_TAG,__VA_ARGS__)
#else
#define ZPORTAL_DBG_printf(x, args...) printf(x, ##args)
#endif

#else
#define ZPORTAL_DBG_printf(x, args...)
#endif

#define ZPORTAL_MAX_CHAR_SIZE 100
#define ZPORTAL_LENGTH_ID 256
#define ZPORTAL_LENGTH_PASSWORD 256
#define ZPORTAL_LENGTH_ACCOUNTTOKEN 256
#define ZPORTAL_LENGTH_DEVICE_UUID 256
#define ZPORTAL_LENGTH_SIGNATURE 512

#define ZPORTAL_LENGTH_HOSTURL 512
#define ZPORTAL_LENGTH_CERTIFICATESERIAL 128
#define ZPORTAL_LENGTH_APPKEY 256
#define ZPORTAL_LENGTH_CLOUDID 128
#define ZPORTAL_LENGTH_AUTHENTICATIONTOKEN 256
#define ZPORTAL_LENGTH_DATE 128

#define ZPORTAL_LENGTH_ERROR_CODE 10

#define ZPORTAL_LENGTH_POST_DATA 4096

#if PRODUCTION
#define API_HOST_URL "https://api-mycloud.zyxel.com"
#define HOST_CERT_SERIAL "1006"
#else
#define API_HOST_URL "https://api-mycloud-beta.zyxel.com"
#define HOST_CERT_SERIAL "1004"
#endif	/* PRODUCTION */

typedef void ZPortal;

typedef enum {
	ZPORTAL_CMD_SIGNIN = 0,
	ZPORTAL_CMD_SIGNUP,
	ZPORTAL_CMD_SIGNOUT,
	ZPORTAL_CMD_FORGOT_PASSWORD,
	ZPORTAL_CMD_RESEND_COFIRMATION_EMAIL,
	ZPORTAL_CMD_MODIFY_EMAIL,
	ZPORTAL_CMD_TOKEN_VALIDATION,
	ZPORTAL_CMD_REQUEST_NEW_XMPP_PASSWORD,
	ZPORTAL_CMD_GET_USER_EMAIL,
	ZPORTAL_CMD_GET_USER_DEVICE_LIST,
	ZPORTAL_CMD_REAUTHENTICATION,
	ZPORTAL_CMD_GET_INVITATION_KEY_LIST,
	ZPORTAL_CMD_GEN_INVITATION_KEY,
	ZPORTAL_CMD_DELETE_USER_BINDING,
	ZPORTAL_CMD_CREATE_USER_PERMISSION
} ZPortalCommand;

typedef enum {
	/**
	 *  OK
	 */
	ZPORTAL_CODE_OK = 0, //HTTP:200
	/**
	 *  The host URL is invalid.
	 */
	ZPORTAL_CODE_UNKNOWN,
	ZPORTAL_CODE_INVALID_HOST,
	/**
	 *  Lost connection.
	 */
	ZPORTAL_CODE_DISCONNECTION,
	ZPORTAL_CODE_INVALID_JSON_FORMMAT,
	ZPORTAL_CODE_INVALID_PARAMETERS, //000
	ZPORTAL_CODE_INVALID_PWASSWORD_LENGTH, //002
	ZPORTAL_CODE_INVALID_EMAIL, //004
	ZPORTAL_CODE_INVALID_DEVICE, //004
	ZPORTAL_CODE_INVALID_SHARE_POINT_AND_PERMISSION, //005
	ZPORTAL_CODE_INVALID_SHARE_NAME, //019
	ZPORTAL_CODE_INVALID_EMAIL_OR_PASSWORD, //001
	ZPORTAL_CODE_INVALID_SIGNATURE, //101
	ZPORTAL_CODE_INVALID_CLOUNDID_OR_TOKEN, //201
	ZPORTAL_CODE_INVALID_SHAREPOINT_AND_PERMISSION, //005
	ZPORTAL_CODE_INVALID_SHARENAME, //019
	ZPORTAL_CODE_INVALID_INVITATION_KEY, //021
	ZPORTAL_CODE_INVALID_CLOUDID, //012
	ZPORTAL_CODE_INVALID_CERTIFICATE_SERIAL, //013
	ZPORTAL_CODE_EMAIL_NOT_CONFIRM, //002
	ZPORTAL_CODE_EMAIL_HAS_BEEN_TAKEN, //001 002
	ZPORTAL_CODE_EMAIL_NOT_FOUND, //001
	ZPORTAL_CODE_EMAIL_AS_SAME_AS_OLD, //003
	ZPORTAL_CODE_USER_HAS_BEEN_CONFIRMED, //006
	/**
	 *  The buffer not enough to receive the data.
	 */
	ZPORTAL_CODE_INVALID_BUFFER_SIZE_NOT_ENOUGH,
	ZPORTAL_CODE_OUT_OF_MEMORY
} ZPortalCode;

typedef enum {
	/**
	 *  Set the Host URL.
	 */
	ZPORTAL_OP_HOST,
//    ZPORTAL_OP_AUTHENTICATION,
	/**
	 *  Set the communication protocal.
	 */
	ZPORTAL_OP_PROTOCAL, //optional, default is XMPP
	/**
	 *  Set the certification path.
	 */
	ZPORTAL_OP_CERTIFICATION, //set certification path
	/**
	 *  Set the device UUID.
	 */
	ZPORTAL_OP_DEVICE_UUID,
	/**
	 *  Set the device OS.
	 */
	ZPORTAL_OP_DEVICE_OS,
    /**
     *  Set the cloud ID.
     */
    ZPORTAL_OP_CLOUD_ID,
    /**
     *  Set the account token.
     */
    ZPORTAL_OP_ACCOUNT_TOKEN,
    /**
     *  Set the authentication token.
     */
    ZPORTAL_OP_AUTHENTICATION_TOKEN
} ZPortalOption;

typedef enum {
	/**
	 *  Sign in by email.
	 */
	ZPORTAL_SIGNIN_EMAIL,    //email,password
	/**
	 *  Sign in by facebook account.
	 */
	ZPORTAL_SIGNIN_FACEBOOK, //fb id, fb access tooken
	/**
	 *  Sign in by google account.
	 */
	ZPORTAL_SIGNIN_GOOGLE,   //google id, google access tooken
    /**
     *  Sign in by access token.
     */
    ZPORTAL_SIGNIN_ACCESS_TOKEN
} ZPortalAuthentication;

typedef struct ZDevice {
	char deviceID[ZPORTAL_MAX_CHAR_SIZE];
	char macAddress[ZPORTAL_MAX_CHAR_SIZE];
	char hostName[ZPORTAL_MAX_CHAR_SIZE];
	char wanIP[ZPORTAL_MAX_CHAR_SIZE];
	char firmwareVersion[ZPORTAL_MAX_CHAR_SIZE];
	char modelName[ZPORTAL_MAX_CHAR_SIZE];
	char lastUpdateTime[ZPORTAL_MAX_CHAR_SIZE];
	char xmppAccount[ZPORTAL_MAX_CHAR_SIZE];
	int isOwner;
	int onlineStatus;
	int wolStatus;
	char macAddressOfRouterLanPort[ZPORTAL_MAX_CHAR_SIZE];
} ZDevice;

typedef struct ZInvitationKey {
	char invitationKey[ZPORTAL_MAX_CHAR_SIZE];
	char deviceID[ZPORTAL_MAX_CHAR_SIZE];
	char sharePoint[ZPORTAL_MAX_CHAR_SIZE];
	char permission[ZPORTAL_MAX_CHAR_SIZE];
	char acceptedUser[ZPORTAL_MAX_CHAR_SIZE];
	char acceptedTime[ZPORTAL_MAX_CHAR_SIZE];
} ZInvitationKey;

typedef struct {
	char id[ZPORTAL_LENGTH_ID]; //user mail
	char cloudID[ZPORTAL_LENGTH_CLOUDID];
	char password[ZPORTAL_LENGTH_PASSWORD];
	char xmppID[ZPORTAL_LENGTH_ID];
	char xmppPassword[ZPORTAL_LENGTH_PASSWORD];
	char accountToken[ZPORTAL_LENGTH_ACCOUNTTOKEN]; // for fb, google sigin
	int os; //0:default, 1:iOS, 2:Android
	char deviceUUID[ZPORTAL_LENGTH_DEVICE_UUID];
	char signature[ZPORTAL_LENGTH_SIGNATURE];
	char authenticationToken[ZPORTAL_LENGTH_AUTHENTICATIONTOKEN];
    int confirmed;
    int timeout;
    char registeredDate[ZPORTAL_LENGTH_DATE];
} UserInfo;

typedef struct {
	char hostURL[ZPORTAL_LENGTH_HOSTURL];
	char xmppHostURL[ZPORTAL_LENGTH_HOSTURL];
	char stunHostURL[ZPORTAL_LENGTH_HOSTURL];
	char certificateSerial[ZPORTAL_LENGTH_CERTIFICATESERIAL];
	char app_key[ZPORTAL_LENGTH_APPKEY]; //device token
	ZDevice *device;
} HostInfo;

typedef struct {
	char *memory;
	int size;
} memChunk;

typedef struct {
	void *curl;
	long http_code;
	memChunk buf;
	char *post_data;
} CurlInfo;

typedef struct {
	UserInfo userInfo;
	HostInfo hostInfo;
	CurlInfo curlInfo;
} _ZPORTAL;

/**
 This function must be the first function to call, and it returns a ZPortal handle that you must use as input to other functions. This call \b MUST have a corresponding call to zportal_cleanup when the operation is complete.
 */
ZPortal *zportal_initialize(void);
/**
 *  zportal_setopt is used to tell zportal how to behave. By setting the appropriate options, the application can change zportal's behavior. All options are set with an option followed by one or more parameters. That parameter can be a long, a function pointer or an object pointer, depending on what the specific option expects. Read this manual carefully as bad input values may cause zportal to behave badly! You can only set one option in each function call. A typical application uses many zportal calls in the setup phase.
 *
 *  @param handle zportal handle
 *  @param option ZPortalOption
 *  @param ... The type and numbers of parameter depend on \link ZPortalOption \endlink.
 *
 *  @return \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_setopt(ZPortal *handle, ZPortalOption option, ...);
/**
 *  This function must be the last function. It is the opposite of the zportal_initalize function and must be called with the same handle as input that a zportal_initalize call returned.\n
 
 *  This might close all connections this handle has used and possibly has kept open until now. And all the temporary variable would be released after you call this function, if you intend to use the variable, you should copy it by yourself.
 *
 *  @param handle The handle is the return code from a zportal_initalize
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_cleanup(ZPortal *handle);

/**
 *  Sign in to the portal.
 *
 *  @param[in] handle  The portal handle.
 *  @param[in] auth The ZPortalAuthentication type for login.
 *  @param[in] ... The parameters, ex: singIn with ZPORTAL_SIGNIN_EMAIL (paramter1:Email, parameter2:password), ZPORTAL_SIGNIN_ACCESS_TOKEN (parameter: access token)
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_signIn(ZPortal *handle, ZPortalAuthentication auth, ...);
/**
 *  Sign up your account from the portal.
 *
 *  @param[in] handle   The portal handle.
 *  @param[in] auth     The ZPortalAuthentication type for sign up.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_signUp(ZPortal *handle, ZPortalAuthentication auth,...);
/**
 *  Using for client to verify the user registration status from portal and oauth provider(google/facebook).
 *
 *  @param[in]  handle      The portal handle.
 *  @param[in]  auth        The ZPortalAuthentication type.
 *  @param[in]  authID      The user id in Facebook / Google.
 *  @param[in]  accessToken The access token.
 *  @param[out] account     The accout on portal.
 *  @param[in]  maxLength    The character length for storing account.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_oAuthCheckin(ZPortal *handle, ZPortalAuthentication auth, char *authID, char *accessToken, char *account, int maxLength);
/**
 *  Using the id and access token to reigister account on protal.
 *
 *  @param[in] handle      The portal handle.
 *  @param[in] auth        The ZPortalAuthentication type.
 *  @param[in] authID      The user id in Facebook / Google.
 *  @param[in] accessToken The access token.
 *  @param[in] password    The password.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_oAuthRegister(ZPortal *handle, ZPortalAuthentication  auth, char *authID, char *accessToken, char *password);
/**
 *  Get the Registration status of accout.
 *
 *  @param[in]  handle    The portal handle.
 *  @param[out] timeout   The timeout.
 *  @param[out] date      The registered date.
 *  @param[in]  maxLength    The character length for storing date.
 *  @param[out] confirmed The accout is confirmed or not.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getRegistrationStatus(ZPortal *handle, int *timeout, char *date, int maxLength, int *confirmed);

/**
 *  Sign out from the portal.
 *
 *  @param[in] handle  The portal handle.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_signOut(ZPortal *handle);
/**
 *  Get the device's cloud ID on portal.
 *
 *  @param[in]  handle  The portal handle.
 *  @param[out] cloudID The device's cloud ID
 *  @param[in]  maxLength  The charater length for storing cloud ID.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getCloudID(ZPortal *handle, char*cloudID, int maxLength);
/**
 *  Get the account token.
 *
 *  @param[in]  handle  The portal handle.
 *  @param[out] token The account token.
 *  @param[in]  maxLength  The charater length for storing cloud ID.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getAccountToken(ZPortal *handle, char*token, int maxLength);
/**
 *  Get the xmpp server url on portal.
 *
 *  @param[in]  handle  The portal handle.
 *  @param[out] serverURL The xmpp server url.
 *  @param[in]  maxLength  The charater length for storing cloud ID.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getXMPPServerURL(ZPortal *handle, char*serverURL,
		int maxLength);
/**
 *  Get the stun server url on portal.
 *
 *  @param[in]  handle  The portal handle.
 *  @param[out] serverURL The stun server url.
 *  @param[in]  maxLength  The charater length for storing cloud ID.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getStunServerURL(ZPortal *handle, char*serverURL,
		int maxLength);
/**
 *  When user forget the password, they could use this command to send the passowrd to register e-mail.
 *
 *  @param handle The portal handle.
 *  @param email  The register e-mail.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_forgotPassowrd(ZPortal *handle, char *email);
/**
 *  Send the request for re-send confirmation to register e-mail.
 *
 *  @param[in] handle The portal handle.
 *  @param[in] email  The e-mail
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_reSendConfirmation(ZPortal *handle, char *email);
/**
 *  Sed the request for modify e-mail to portal.
 *
 *  @param[in] handle   The portal handle.
 *  @param[in] newEmail The new e-mail.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_modifyEmail(ZPortal *handle, char *newEmail);
/**
 *  Get the user's email.
 *
 *  @param[in]  handle The portal handle.
 *  @param[out] email  The email.
 *  @param[in]  maxLength The character length for storing email.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getEmail(ZPortal *handle, char *email, int maxLength);

//xmpp
/**
 *  Get the user's XMPP account.
 *
 *  @param[in] handle   The portal handle.
 *  @param[out] xmppAcount The XMPP account.
 *  @param[in] maxLength The character length for storing xmppAcount.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getXMPPAcount(ZPortal *handle, char *xmppAcount,
		int maxLength);
/**
 *  Get the user's XMPP password.
 *
 *  @param[in] handle   The portal handle.
 *  @param[out] xmppPassword The XMPP password.
 *  @param[in] maxLength The character length for storing xmppPassowrd.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getXMPPPassword(ZPortal *handle, char *xmppPassword,
		int maxLength);
/**
 *  Get the new user's XMPP password.
 *
 *  @param[in] handle   The portal handle.
 *  @param[out] newxmppPassowrd The new XMPP password.
 *  @param[in] maxLength The character length for storing newxmppPassowrd.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_reqNewXMPPPassowrd(ZPortal *handle, char *newxmppPassowrd,
		int maxLength);
/**
 *  Get the authentication token which would be used for communication with XMPP server.
 *
 *  @param[in] handle The portal handle.
 *  @param[out] token The authentication token.
 *  @param[in] maxLength The character length for storing token.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getAuthenticationToken(ZPortal *handle, char *token,
		int maxLength);
/**
 *  Check the authentication token is valid or not.
 *
 *  @param[in]  handle The portal handle.
 *  @param[in]  token The authentication token.
 *  @param[out] valid 1:YES, 0:NO.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_AuthenticationTokenValidation(ZPortal *handle, char *token,
		int *valid);
/**
 *  Renew the authentication token.
 *
 *  @param[in]  handle The portal handle.
 *  @param[out]  token The new authentication token.
 *  @param[out] maxLength 1:YES, 0:NO.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_reAuthentication(ZPortal *handle, char *token,
                                                  int maxLength);

//share & invitation
/**
 *  Get the devices that has registed on portal.
 *
 *  @param[in]  handle The portal handle.
 *  @param[out] list The ZDevice index which point to
 *  @param[in,out]  maxLength The ZDevice length for storing device list.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getDeviceList(ZPortal *handle, ZDevice *list,
		int *maxLength);
/**
 *  Generate invitation key by device.
 *
 *  @param[in]  handle   The portal handle.
 *  @param[in]  deviceID The device ID.
 *  @param[in]  sharePoint The share path.
 *  @param[in]  permission The permission, 1 => R, 2 => RW.
 *  @param[in]  expireCount The count of expired users.
 *  @param[out] invitationKey The invitation key.
 *  @param[in]  maxLength   The character length for storing invitationKey.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_generateInvitationKey(ZPortal *handle, char *deviceID,
		char *sharePoint, int permission, int expireCount, char *invitationKey,
		int maxLength);
/**
 *  Get the invitation key by last update date.
 *
 *  @param[in] handle    The portal handle.
 *  @param[in] timestamp The last update date.
 *  @param[out] list      The invitation key list.
 *  @param[in] maxLength    The ZInvitationKey length for storing invitation key list.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_getInvitationKeyListWithLastUpdateDate(ZPortal *handle,
		char *timestamp, ZInvitationKey *list, int *maxLength);
/**
 *  Get the temporary XMPP account and password.
 *
 *  @param[in] handle               The portal handle.
 *  @param[in] macAddress           The MAC address.
 *  @param[in] serialNumber         The serial number.
 *  @param[in] version              The iOS/Android version + App version.
 *  @param[out] xmppAccount         The XMPP account.
 *  @param[out] xmppAcountMaxLength The XMPP account.
 *  @param[out] xmppPwd             The buffer max length of XMPP password.
 *  @param[out] xmppPwdMaxLength    The buffer max length of XMPP password.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_deviceRegistration(ZPortal *handle, char *macAddress, char *serialNumber, char *version, char *xmppAccount, int xmppAcountMaxLength, char *xmppPwd, int xmppPwdMaxLength);
/**
 *  Refreshing the access token
 *
 *  @param[in] handle               The portal handle.
 *  @param[in] oldToken             The old token.
 *  @param[in] clientID             The client id.
 *  @param[in] clientSecret         The client secret.
 *  @param[in] redirectURI          The redirect uri.
 *  @param[out] newToken            The new token.
 *  @param[out] tokenMaxLen         The length of buffer to copy token.
 *
 *  @return ZPortalCode \link ZPORTAL_CODE_OK \endlink means that the option was set properly, non-zero means an error occurred. See the \link ZPortalCode \endlink man page for the full list with descriptions.
 */
ZPortalCode zportal_refreshAccessToken(ZPortal *handle, char *oldToken, char *clientID, char *clientSecret, char *redirectURI, char *newToken, int tokenMaxLen);
#endif /* ZPortal_h */
