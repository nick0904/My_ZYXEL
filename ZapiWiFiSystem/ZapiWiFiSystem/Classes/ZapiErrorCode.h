//  ZapiErrorCode.h
//  Zapi
//  
//  Created by Zyxel Zapi code generate tool on 2017/07/25.
//  Copyright © 2017 Zyxel. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark - ZapiErrorCode

/**
 Error codes defined in zapi.
 */
typedef NS_ENUM(NSUInteger, ZapiErrorCode) {
	/**
	 OK! should be 0
	 */
	ZapiErrorCode_OK = 0,

	/**
	 Self must not be null.
	 */
	ZapiErrorCode_MUST_HAVE_SELF = 2000,

	/**
	 Self -> private must not be null.
	 */
	ZapiErrorCode_MUST_HAVE_SELF_PRIVATE = 2001,

	/**
	 The functionality has not yet been implemented.
	 */
	ZapiErrorCode_NOT_YET_IMPLEMENT = 2002,

	/**
	 Failed to malloc address.
	 */
	ZapiErrorCode_FAILED_MALLOC = 2003,

	/**
	 Creating structure cannot pass both jsonString and jsonSourceObj with non NULL object.
	 */
	ZapiErrorCode_CREATE_CANNOT_ACCEPT_BOTH_JSON = 2004,

	/**
	 JSON string is invalid.
	 */
	ZapiErrorCode_INVALID_JSON = 2005,

	/**
	 unexpected error while performing backend logic, most likely that backend has segmentation fault or aborted due to unexpected reason and failed to return any error code.
	 */
	ZapiErrorCode_WHILE_PERFORM_BACKEND_LOGIC = 2006,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat, root: nat #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_NAT_1 = 2007,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat, root: nat #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_NAT_2 = 2008,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat, root: nat #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_NAT_3 = 2009,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat, root: nat #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_NAT_4 = 2010,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat, root: nat #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_NAT_5 = 2011,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wan-profile, root: wan #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WAN_PROFILE_WAN_1 = 2012,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wan-profile, root: wan #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WAN_PROFILE_WAN_2 = 2013,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wan-profile, root: wan #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WAN_PROFILE_WAN_3 = 2014,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wan-profile, root: wan #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WAN_PROFILE_WAN_4 = 2015,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wan-profile, root: wan #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WAN_PROFILE_WAN_5 = 2016,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: transfer-certificate #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_TRANSFER_CERTIFICATE_1 = 2017,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: transfer-certificate #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_TRANSFER_CERTIFICATE_2 = 2018,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: transfer-certificate #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_TRANSFER_CERTIFICATE_3 = 2019,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: transfer-certificate #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_TRANSFER_CERTIFICATE_4 = 2020,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: transfer-certificate #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_TRANSFER_CERTIFICATE_5 = 2021,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: get-private-key-path #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_GET_PRIVATE_KEY_PATH_1 = 2022,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: get-private-key-path #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_GET_PRIVATE_KEY_PATH_2 = 2023,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: get-private-key-path #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_GET_PRIVATE_KEY_PATH_3 = 2024,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: get-private-key-path #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_GET_PRIVATE_KEY_PATH_4 = 2025,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate, root: get-private-key-path #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE_GET_PRIVATE_KEY_PATH_5 = 2026,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-opmode, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_OPMODE_TOP_1 = 2027,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-opmode, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_OPMODE_TOP_2 = 2028,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-opmode, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_OPMODE_TOP_3 = 2029,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-opmode, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_OPMODE_TOP_4 = 2030,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-opmode, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_OPMODE_TOP_5 = 2031,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-netconf-acm, root: nacm #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_NETCONF_ACM_NACM_1 = 2032,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-netconf-acm, root: nacm #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_NETCONF_ACM_NACM_2 = 2033,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-netconf-acm, root: nacm #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_NETCONF_ACM_NACM_3 = 2034,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-netconf-acm, root: nacm #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_NETCONF_ACM_NACM_4 = 2035,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-netconf-acm, root: nacm #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_NETCONF_ACM_NACM_5 = 2036,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-radio, root: get-channel-list #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_RADIO_GET_CHANNEL_LIST_1 = 2037,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-radio, root: get-channel-list #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_RADIO_GET_CHANNEL_LIST_2 = 2038,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-radio, root: get-channel-list #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_RADIO_GET_CHANNEL_LIST_3 = 2039,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-radio, root: get-channel-list #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_RADIO_GET_CHANNEL_LIST_4 = 2040,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-radio, root: get-channel-list #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_RADIO_GET_CHANNEL_LIST_5 = 2041,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: network-devices #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_NETWORK_DEVICES_1 = 2042,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: network-devices #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_NETWORK_DEVICES_2 = 2043,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: network-devices #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_NETWORK_DEVICES_3 = 2044,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: network-devices #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_NETWORK_DEVICES_4 = 2045,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: network-devices #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_NETWORK_DEVICES_5 = 2046,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: remove-device-customized-data #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_REMOVE_DEVICE_CUSTOMIZED_DATA_1 = 2047,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: remove-device-customized-data #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_REMOVE_DEVICE_CUSTOMIZED_DATA_2 = 2048,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: remove-device-customized-data #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_REMOVE_DEVICE_CUSTOMIZED_DATA_3 = 2049,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: remove-device-customized-data #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_REMOVE_DEVICE_CUSTOMIZED_DATA_4 = 2050,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: remove-device-customized-data #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_REMOVE_DEVICE_CUSTOMIZED_DATA_5 = 2051,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-type #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_TYPE_1 = 2052,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-type #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_TYPE_2 = 2053,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-type #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_TYPE_3 = 2054,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-type #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_TYPE_4 = 2055,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-type #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_TYPE_5 = 2056,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-name #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_NAME_1 = 2057,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-name #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_NAME_2 = 2058,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-name #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_NAME_3 = 2059,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-name #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_NAME_4 = 2060,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-host-name #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_HOST_NAME_5 = 2061,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-information #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_INFORMATION_1 = 2062,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-information #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_INFORMATION_2 = 2063,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-information #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_INFORMATION_3 = 2064,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-information #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_INFORMATION_4 = 2065,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-information #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_INFORMATION_5 = 2066,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-status #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_STATUS_1 = 2067,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-status #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_STATUS_2 = 2068,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-status #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_STATUS_3 = 2069,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-status #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_STATUS_4 = 2070,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: device-status #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_DEVICE_STATUS_5 = 2071,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-device-name #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_DEVICE_NAME_1 = 2072,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-device-name #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_DEVICE_NAME_2 = 2073,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-device-name #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_DEVICE_NAME_3 = 2074,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-device-name #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_DEVICE_NAME_4 = 2075,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-network-device, root: set-device-name #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE_SET_DEVICE_NAME_5 = 2076,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-easy123 #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_EASY123_1 = 2077,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-easy123 #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_EASY123_2 = 2078,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-easy123 #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_EASY123_3 = 2079,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-easy123 #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_EASY123_4 = 2080,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-easy123 #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_EASY123_5 = 2081,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: set-wifi #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_SET_WIFI_1 = 2082,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: set-wifi #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_SET_WIFI_2 = 2083,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: set-wifi #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_SET_WIFI_3 = 2084,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: set-wifi #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_SET_WIFI_4 = 2085,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: set-wifi #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_SET_WIFI_5 = 2086,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-default-password #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_DEFAULT_PASSWORD_1 = 2087,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-default-password #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_DEFAULT_PASSWORD_2 = 2088,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-default-password #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_DEFAULT_PASSWORD_3 = 2089,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-default-password #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_DEFAULT_PASSWORD_4 = 2090,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-default-password #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_DEFAULT_PASSWORD_5 = 2091,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-internet-status #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_INTERNET_STATUS_1 = 2092,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-internet-status #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_INTERNET_STATUS_2 = 2093,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-internet-status #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_INTERNET_STATUS_3 = 2094,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-internet-status #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_INTERNET_STATUS_4 = 2095,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: access-internet-status #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_ACCESS_INTERNET_STATUS_5 = 2096,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wan-port-connected #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WAN_PORT_CONNECTED_1 = 2097,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wan-port-connected #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WAN_PORT_CONNECTED_2 = 2098,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wan-port-connected #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WAN_PORT_CONNECTED_3 = 2099,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wan-port-connected #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WAN_PORT_CONNECTED_4 = 2100,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wan-port-connected #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WAN_PORT_CONNECTED_5 = 2101,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: get-wifi-configuration #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_GET_WIFI_CONFIGURATION_1 = 2102,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: get-wifi-configuration #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_GET_WIFI_CONFIGURATION_2 = 2103,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: get-wifi-configuration #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_GET_WIFI_CONFIGURATION_3 = 2104,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: get-wifi-configuration #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_GET_WIFI_CONFIGURATION_4 = 2105,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: get-wifi-configuration #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_GET_WIFI_CONFIGURATION_5 = 2106,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wifi-button-on #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WIFI_BUTTON_ON_1 = 2107,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wifi-button-on #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WIFI_BUTTON_ON_2 = 2108,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wifi-button-on #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WIFI_BUTTON_ON_3 = 2109,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wifi-button-on #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WIFI_BUTTON_ON_4 = 2110,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: is-wifi-button-on #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_IS_WIFI_BUTTON_ON_5 = 2111,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: detect-wan-proto #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_DETECT_WAN_PROTO_1 = 2112,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: detect-wan-proto #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_DETECT_WAN_PROTO_2 = 2113,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: detect-wan-proto #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_DETECT_WAN_PROTO_3 = 2114,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: detect-wan-proto #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_DETECT_WAN_PROTO_4 = 2115,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: detect-wan-proto #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_DETECT_WAN_PROTO_5 = 2116,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: ever-easy123 #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_EVER_EASY123_1 = 2117,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: ever-easy123 #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_EVER_EASY123_2 = 2118,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: ever-easy123 #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_EVER_EASY123_3 = 2119,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: ever-easy123 #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_EVER_EASY123_4 = 2120,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-easy123, root: ever-easy123 #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123_EVER_EASY123_5 = 2121,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-server-control, root: server-control #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SERVER_CONTROL_SERVER_CONTROL_1 = 2122,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-server-control, root: server-control #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SERVER_CONTROL_SERVER_CONTROL_2 = 2123,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-server-control, root: server-control #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SERVER_CONTROL_SERVER_CONTROL_3 = 2124,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-server-control, root: server-control #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SERVER_CONTROL_SERVER_CONTROL_4 = 2125,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-server-control, root: server-control #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SERVER_CONTROL_SERVER_CONTROL_5 = 2126,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: get-history #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_GET_HISTORY_1 = 2127,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: get-history #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_GET_HISTORY_2 = 2128,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: get-history #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_GET_HISTORY_3 = 2129,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: get-history #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_GET_HISTORY_4 = 2130,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: get-history #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_GET_HISTORY_5 = 2131,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: speed-test #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_SPEED_TEST_1 = 2132,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: speed-test #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_SPEED_TEST_2 = 2133,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: speed-test #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_SPEED_TEST_3 = 2134,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: speed-test #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_SPEED_TEST_4 = 2135,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: speed-test #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_SPEED_TEST_5 = 2136,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: test-result #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_TEST_RESULT_1 = 2137,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: test-result #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_TEST_RESULT_2 = 2138,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: test-result #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_TEST_RESULT_3 = 2139,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: test-result #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_TEST_RESULT_4 = 2140,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: test-result #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_TEST_RESULT_5 = 2141,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: clean-history #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_CLEAN_HISTORY_1 = 2142,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: clean-history #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_CLEAN_HISTORY_2 = 2143,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: clean-history #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_CLEAN_HISTORY_3 = 2144,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: clean-history #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_CLEAN_HISTORY_4 = 2145,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-speed-test, root: clean-history #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST_CLEAN_HISTORY_5 = 2146,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_TOP_1 = 2147,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_TOP_2 = 2148,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_TOP_3 = 2149,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_TOP_4 = 2150,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_TOP_5 = 2151,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: add-static-ip #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_ADD_STATIC_IP_1 = 2152,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: add-static-ip #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_ADD_STATIC_IP_2 = 2153,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: add-static-ip #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_ADD_STATIC_IP_3 = 2154,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: add-static-ip #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_ADD_STATIC_IP_4 = 2155,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, root: add-static-ip #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER_ADD_STATIC_IP_5 = 2156,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: ble-state #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_BLE_STATE_1 = 2157,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: ble-state #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_BLE_STATE_2 = 2158,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: ble-state #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_BLE_STATE_3 = 2159,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: ble-state #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_BLE_STATE_4 = 2160,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: ble-state #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_BLE_STATE_5 = 2161,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: action-for-ble #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_ACTION_FOR_BLE_1 = 2162,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: action-for-ble #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_ACTION_FOR_BLE_2 = 2163,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: action-for-ble #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_ACTION_FOR_BLE_3 = 2164,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: action-for-ble #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_ACTION_FOR_BLE_4 = 2165,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy, root: action-for-ble #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY_ACTION_FOR_BLE_5 = 2166,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-tic-tac-toe, root: tic-tac-toe #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_TIC_TAC_TOE_TIC_TAC_TOE_1 = 2167,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-tic-tac-toe, root: tic-tac-toe #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_TIC_TAC_TOE_TIC_TAC_TOE_2 = 2168,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-tic-tac-toe, root: tic-tac-toe #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_TIC_TAC_TOE_TIC_TAC_TOE_3 = 2169,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-tic-tac-toe, root: tic-tac-toe #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_TIC_TAC_TOE_TIC_TAC_TOE_4 = 2170,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-tic-tac-toe, root: tic-tac-toe #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_TIC_TAC_TOE_TIC_TAC_TOE_5 = 2171,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-apply, root: apply-wifi-interface-setting #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_APPLY_APPLY_WIFI_INTERFACE_SETTING_1 = 2172,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-apply, root: apply-wifi-interface-setting #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_APPLY_APPLY_WIFI_INTERFACE_SETTING_2 = 2173,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-apply, root: apply-wifi-interface-setting #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_APPLY_APPLY_WIFI_INTERFACE_SETTING_3 = 2174,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-apply, root: apply-wifi-interface-setting #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_APPLY_APPLY_WIFI_INTERFACE_SETTING_4 = 2175,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-apply, root: apply-wifi-interface-setting #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_APPLY_APPLY_WIFI_INTERFACE_SETTING_5 = 2176,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-cancel #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CANCEL_1 = 2177,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-cancel #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CANCEL_2 = 2178,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-cancel #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CANCEL_3 = 2179,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-cancel #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CANCEL_4 = 2180,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-cancel #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CANCEL_5 = 2181,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-check #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CHECK_1 = 2182,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-check #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CHECK_2 = 2183,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-check #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CHECK_3 = 2184,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-check #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CHECK_4 = 2185,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-check #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_CHECK_5 = 2186,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-after-upload #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_AFTER_UPLOAD_1 = 2187,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-after-upload #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_AFTER_UPLOAD_2 = 2188,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-after-upload #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_AFTER_UPLOAD_3 = 2189,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-after-upload #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_AFTER_UPLOAD_4 = 2190,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-after-upload #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_AFTER_UPLOAD_5 = 2191,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_1 = 2192,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_2 = 2193,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_3 = 2194,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_4 = 2195,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_5 = 2196,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upload #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPLOAD_1 = 2197,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upload #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPLOAD_2 = 2198,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upload #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPLOAD_3 = 2199,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upload #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPLOAD_4 = 2200,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upload #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPLOAD_5 = 2201,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-upgrade #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_UPGRADE_1 = 2202,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-upgrade #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_UPGRADE_2 = 2203,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-upgrade #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_UPGRADE_3 = 2204,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-upgrade #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_UPGRADE_4 = 2205,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-upgrade #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_UPGRADE_5 = 2206,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download-status #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_STATUS_1 = 2207,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download-status #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_STATUS_2 = 2208,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download-status #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_STATUS_3 = 2209,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download-status #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_STATUS_4 = 2210,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: on-line-download-status #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_ON_LINE_DOWNLOAD_STATUS_5 = 2211,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-status #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_STATUS_1 = 2212,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-status #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_STATUS_2 = 2213,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-status #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_STATUS_3 = 2214,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-status #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_STATUS_4 = 2215,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade, root: upgrade-status #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE_UPGRADE_STATUS_5 = 2216,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces-state #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_STATE_1 = 2217,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces-state #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_STATE_2 = 2218,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces-state #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_STATE_3 = 2219,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces-state #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_STATE_4 = 2220,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces-state #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_STATE_5 = 2221,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_1 = 2222,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_2 = 2223,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_3 = 2224,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_4 = 2225,

	/**
	 Error specificly occured during the execution of namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces, root: interfaces #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES_INTERFACES_5 = 2226,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-cloud, root: pair-unpair #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CLOUD_PAIR_UNPAIR_1 = 2227,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-cloud, root: pair-unpair #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CLOUD_PAIR_UNPAIR_2 = 2228,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-cloud, root: pair-unpair #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CLOUD_PAIR_UNPAIR_3 = 2229,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-cloud, root: pair-unpair #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CLOUD_PAIR_UNPAIR_4 = 2230,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-cloud, root: pair-unpair #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CLOUD_PAIR_UNPAIR_5 = 2231,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: firewall #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_FIREWALL_1 = 2232,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: firewall #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_FIREWALL_2 = 2233,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: firewall #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_FIREWALL_3 = 2234,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: firewall #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_FIREWALL_4 = 2235,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: firewall #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_FIREWALL_5 = 2236,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: unblock #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_UNBLOCK_1 = 2237,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: unblock #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_UNBLOCK_2 = 2238,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: unblock #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_UNBLOCK_3 = 2239,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: unblock #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_UNBLOCK_4 = 2240,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: unblock #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_UNBLOCK_5 = 2241,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: block #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_BLOCK_1 = 2242,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: block #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_BLOCK_2 = 2243,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: block #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_BLOCK_3 = 2244,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: block #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_BLOCK_4 = 2245,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, root: block #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL_BLOCK_5 = 2246,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: generate-pin-code #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_GENERATE_PIN_CODE_1 = 2247,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: generate-pin-code #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_GENERATE_PIN_CODE_2 = 2248,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: generate-pin-code #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_GENERATE_PIN_CODE_3 = 2249,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: generate-pin-code #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_GENERATE_PIN_CODE_4 = 2250,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: generate-pin-code #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_GENERATE_PIN_CODE_5 = 2251,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: site-survey #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_SITE_SURVEY_1 = 2252,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: site-survey #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_SITE_SURVEY_2 = 2253,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: site-survey #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_SITE_SURVEY_3 = 2254,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: site-survey #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_SITE_SURVEY_4 = 2255,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: site-survey #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_SITE_SURVEY_5 = 2256,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-start-button #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_START_BUTTON_1 = 2257,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-start-button #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_START_BUTTON_2 = 2258,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-start-button #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_START_BUTTON_3 = 2259,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-start-button #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_START_BUTTON_4 = 2260,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-start-button #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_START_BUTTON_5 = 2261,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-push-button #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_PUSH_BUTTON_1 = 2262,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-push-button #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_PUSH_BUTTON_2 = 2263,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-push-button #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_PUSH_BUTTON_3 = 2264,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-push-button #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_PUSH_BUTTON_4 = 2265,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: press-push-button #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_PRESS_PUSH_BUTTON_5 = 2266,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: clear-setting #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_CLEAR_SETTING_1 = 2267,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: clear-setting #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_CLEAR_SETTING_2 = 2268,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: clear-setting #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_CLEAR_SETTING_3 = 2269,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: clear-setting #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_CLEAR_SETTING_4 = 2270,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: clear-setting #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_CLEAR_SETTING_5 = 2271,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: wps-button-pin-status #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_WPS_BUTTON_PIN_STATUS_1 = 2272,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: wps-button-pin-status #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_WPS_BUTTON_PIN_STATUS_2 = 2273,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: wps-button-pin-status #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_WPS_BUTTON_PIN_STATUS_3 = 2274,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: wps-button-pin-status #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_WPS_BUTTON_PIN_STATUS_4 = 2275,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid, root: wps-button-pin-status #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID_WPS_BUTTON_PIN_STATUS_5 = 2276,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: request-container #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_REQUEST_CONTAINER_1 = 2277,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: request-container #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_REQUEST_CONTAINER_2 = 2278,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: request-container #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_REQUEST_CONTAINER_3 = 2279,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: request-container #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_REQUEST_CONTAINER_4 = 2280,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: request-container #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_REQUEST_CONTAINER_5 = 2281,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: response-container #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_RESPONSE_CONTAINER_1 = 2282,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: response-container #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_RESPONSE_CONTAINER_2 = 2283,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: response-container #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_RESPONSE_CONTAINER_3 = 2284,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: response-container #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_RESPONSE_CONTAINER_4 = 2285,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-zapi-request-response, root: response-container #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_ZAPI_REQUEST_RESPONSE_RESPONSE_CONTAINER_5 = 2286,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-capability, root: capability #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CAPABILITY_CAPABILITY_1 = 2287,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-capability, root: capability #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CAPABILITY_CAPABILITY_2 = 2288,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-capability, root: capability #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CAPABILITY_CAPABILITY_3 = 2289,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-capability, root: capability #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CAPABILITY_CAPABILITY_4 = 2290,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-capability, root: capability #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CAPABILITY_CAPABILITY_5 = 2291,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-6rd, root: ipv6rd-interface-setting #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_6RD_IPV6RD_INTERFACE_SETTING_1 = 2292,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-6rd, root: ipv6rd-interface-setting #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_6RD_IPV6RD_INTERFACE_SETTING_2 = 2293,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-6rd, root: ipv6rd-interface-setting #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_6RD_IPV6RD_INTERFACE_SETTING_3 = 2294,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-6rd, root: ipv6rd-interface-setting #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_6RD_IPV6RD_INTERFACE_SETTING_4 = 2295,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-6rd, root: ipv6rd-interface-setting #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_6RD_IPV6RD_INTERFACE_SETTING_5 = 2296,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_TOP_1 = 2297,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_TOP_2 = 2298,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_TOP_3 = 2299,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_TOP_4 = 2300,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_TOP_5 = 2301,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: dump-file #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_DUMP_FILE_1 = 2302,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: dump-file #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_DUMP_FILE_2 = 2303,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: dump-file #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_DUMP_FILE_3 = 2304,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: dump-file #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_DUMP_FILE_4 = 2305,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: dump-file #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_DUMP_FILE_5 = 2306,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: clear #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_CLEAR_1 = 2307,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: clear #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_CLEAR_2 = 2308,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: clear #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_CLEAR_3 = 2309,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: clear #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_CLEAR_4 = 2310,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: clear #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_CLEAR_5 = 2311,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: get-log #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_GET_LOG_1 = 2312,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: get-log #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_GET_LOG_2 = 2313,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: get-log #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_GET_LOG_3 = 2314,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: get-log #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_GET_LOG_4 = 2315,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log, root: get-log #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG_GET_LOG_5 = 2316,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: bonus #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BONUS_1 = 2317,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: bonus #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BONUS_2 = 2318,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: bonus #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BONUS_3 = 2319,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: bonus #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BONUS_4 = 2320,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: bonus #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BONUS_5 = 2321,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_TOP_1 = 2322,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_TOP_2 = 2323,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_TOP_3 = 2324,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_TOP_4 = 2325,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_TOP_5 = 2326,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: unblock #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_UNBLOCK_1 = 2327,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: unblock #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_UNBLOCK_2 = 2328,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: unblock #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_UNBLOCK_3 = 2329,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: unblock #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_UNBLOCK_4 = 2330,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: unblock #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_UNBLOCK_5 = 2331,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: add-device #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_ADD_DEVICE_1 = 2332,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: add-device #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_ADD_DEVICE_2 = 2333,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: add-device #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_ADD_DEVICE_3 = 2334,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: add-device #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_ADD_DEVICE_4 = 2335,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: add-device #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_ADD_DEVICE_5 = 2336,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: remove-device #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_REMOVE_DEVICE_1 = 2337,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: remove-device #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_REMOVE_DEVICE_2 = 2338,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: remove-device #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_REMOVE_DEVICE_3 = 2339,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: remove-device #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_REMOVE_DEVICE_4 = 2340,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: remove-device #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_REMOVE_DEVICE_5 = 2341,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: delete-profile #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_DELETE_PROFILE_1 = 2342,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: delete-profile #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_DELETE_PROFILE_2 = 2343,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: delete-profile #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_DELETE_PROFILE_3 = 2344,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: delete-profile #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_DELETE_PROFILE_4 = 2345,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: delete-profile #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_DELETE_PROFILE_5 = 2346,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: block #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BLOCK_1 = 2347,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: block #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BLOCK_2 = 2348,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: block #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BLOCK_3 = 2349,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: block #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BLOCK_4 = 2350,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control, root: block #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL_BLOCK_5 = 2351,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-lan-profile, root: lan #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LAN_PROFILE_LAN_1 = 2352,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-lan-profile, root: lan #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LAN_PROFILE_LAN_2 = 2353,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-lan-profile, root: lan #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LAN_PROFILE_LAN_3 = 2354,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-lan-profile, root: lan #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LAN_PROFILE_LAN_4 = 2355,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-lan-profile, root: lan #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LAN_PROFILE_LAN_5 = 2356,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: set-current-datetime #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SET_CURRENT_DATETIME_1 = 2357,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: set-current-datetime #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SET_CURRENT_DATETIME_2 = 2358,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: set-current-datetime #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SET_CURRENT_DATETIME_3 = 2359,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: set-current-datetime #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SET_CURRENT_DATETIME_4 = 2360,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: set-current-datetime #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SET_CURRENT_DATETIME_5 = 2361,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-shutdown #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_SHUTDOWN_1 = 2362,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-shutdown #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_SHUTDOWN_2 = 2363,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-shutdown #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_SHUTDOWN_3 = 2364,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-shutdown #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_SHUTDOWN_4 = 2365,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-shutdown #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_SHUTDOWN_5 = 2366,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-restore #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_RESTORE_1 = 2367,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-restore #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_RESTORE_2 = 2368,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-restore #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_RESTORE_3 = 2369,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-restore #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_RESTORE_4 = 2370,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-restore #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_RESTORE_5 = 2371,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-factory-password #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_FACTORY_PASSWORD_1 = 2372,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-factory-password #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_FACTORY_PASSWORD_2 = 2373,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-factory-password #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_FACTORY_PASSWORD_3 = 2374,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-factory-password #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_FACTORY_PASSWORD_4 = 2375,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-factory-password #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_FACTORY_PASSWORD_5 = 2376,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-upload #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_UPLOAD_1 = 2377,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-upload #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_UPLOAD_2 = 2378,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-upload #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_UPLOAD_3 = 2379,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-upload #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_UPLOAD_4 = 2380,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-upload #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_UPLOAD_5 = 2381,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-backup #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_BACKUP_1 = 2382,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-backup #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_BACKUP_2 = 2383,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-backup #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_BACKUP_3 = 2384,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-backup #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_BACKUP_4 = 2385,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-config-backup #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_CONFIG_BACKUP_5 = 2386,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_1 = 2387,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_2 = 2388,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_3 = 2389,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_4 = 2390,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_5 = 2391,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-state #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_STATE_1 = 2392,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-state #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_STATE_2 = 2393,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-state #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_STATE_3 = 2394,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-state #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_STATE_4 = 2395,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-state #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_STATE_5 = 2396,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-wake-on-lan #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_WAKE_ON_LAN_1 = 2397,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-wake-on-lan #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_WAKE_ON_LAN_2 = 2398,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-wake-on-lan #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_WAKE_ON_LAN_3 = 2399,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-wake-on-lan #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_WAKE_ON_LAN_4 = 2400,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-wake-on-lan #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_WAKE_ON_LAN_5 = 2401,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: api-version #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_API_VERSION_1 = 2402,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: api-version #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_API_VERSION_2 = 2403,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: api-version #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_API_VERSION_3 = 2404,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: api-version #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_API_VERSION_4 = 2405,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: api-version #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_API_VERSION_5 = 2406,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-restart #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESTART_1 = 2407,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-restart #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESTART_2 = 2408,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-restart #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESTART_3 = 2409,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-restart #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESTART_4 = 2410,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-restart #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESTART_5 = 2411,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: current-band-width #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CURRENT_BAND_WIDTH_1 = 2412,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: current-band-width #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CURRENT_BAND_WIDTH_2 = 2413,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: current-band-width #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CURRENT_BAND_WIDTH_3 = 2414,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: current-band-width #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CURRENT_BAND_WIDTH_4 = 2415,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: current-band-width #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CURRENT_BAND_WIDTH_5 = 2416,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-reset-to-default #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESET_TO_DEFAULT_1 = 2417,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-reset-to-default #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESET_TO_DEFAULT_2 = 2418,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-reset-to-default #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESET_TO_DEFAULT_3 = 2419,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-reset-to-default #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESET_TO_DEFAULT_4 = 2420,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system, root: system-reset-to-default #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SYSTEM_RESET_TO_DEFAULT_5 = 2421,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-upnp, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP_TOP_1 = 2422,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-upnp, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP_TOP_2 = 2423,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-upnp, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP_TOP_3 = 2424,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-upnp, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP_TOP_4 = 2425,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-upnp, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP_TOP_5 = 2426,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: system-devices-state #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SYSTEM_DEVICES_STATE_1 = 2427,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: system-devices-state #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SYSTEM_DEVICES_STATE_2 = 2428,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: system-devices-state #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SYSTEM_DEVICES_STATE_3 = 2429,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: system-devices-state #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SYSTEM_DEVICES_STATE_4 = 2430,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: system-devices-state #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SYSTEM_DEVICES_STATE_5 = 2431,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: switch-led #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SWITCH_LED_1 = 2432,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: switch-led #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SWITCH_LED_2 = 2433,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: switch-led #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SWITCH_LED_3 = 2434,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: switch-led #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SWITCH_LED_4 = 2435,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: switch-led #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_SWITCH_LED_5 = 2436,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: authorize-device #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_AUTHORIZE_DEVICE_1 = 2437,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: authorize-device #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_AUTHORIZE_DEVICE_2 = 2438,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: authorize-device #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_AUTHORIZE_DEVICE_3 = 2439,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: authorize-device #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_AUTHORIZE_DEVICE_4 = 2440,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: authorize-device #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_AUTHORIZE_DEVICE_5 = 2441,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: finish-setup #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_FINISH_SETUP_1 = 2442,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: finish-setup #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_FINISH_SETUP_2 = 2443,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: finish-setup #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_FINISH_SETUP_3 = 2444,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: finish-setup #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_FINISH_SETUP_4 = 2445,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: finish-setup #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_FINISH_SETUP_5 = 2446,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: unauthorize-device #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_UNAUTHORIZE_DEVICE_1 = 2447,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: unauthorize-device #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_UNAUTHORIZE_DEVICE_2 = 2448,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: unauthorize-device #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_UNAUTHORIZE_DEVICE_3 = 2449,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: unauthorize-device #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_UNAUTHORIZE_DEVICE_4 = 2450,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: unauthorize-device #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_UNAUTHORIZE_DEVICE_5 = 2451,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: reset-wifi-system #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESET_WIFI_SYSTEM_1 = 2452,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: reset-wifi-system #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESET_WIFI_SYSTEM_2 = 2453,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: reset-wifi-system #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESET_WIFI_SYSTEM_3 = 2454,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: reset-wifi-system #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESET_WIFI_SYSTEM_4 = 2455,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: reset-wifi-system #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESET_WIFI_SYSTEM_5 = 2456,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: naming #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_NAMING_1 = 2457,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: naming #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_NAMING_2 = 2458,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: naming #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_NAMING_3 = 2459,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: naming #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_NAMING_4 = 2460,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: naming #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_NAMING_5 = 2461,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: retrive-device-information #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RETRIVE_DEVICE_INFORMATION_1 = 2462,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: retrive-device-information #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RETRIVE_DEVICE_INFORMATION_2 = 2463,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: retrive-device-information #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RETRIVE_DEVICE_INFORMATION_3 = 2464,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: retrive-device-information #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RETRIVE_DEVICE_INFORMATION_4 = 2465,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: retrive-device-information #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RETRIVE_DEVICE_INFORMATION_5 = 2466,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: restart #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESTART_1 = 2467,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: restart #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESTART_2 = 2468,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: restart #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESTART_3 = 2469,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: restart #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESTART_4 = 2470,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system, root: restart #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_RESTART_5 = 2471,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-echo-server, root: get-mac #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ECHO_SERVER_GET_MAC_1 = 2472,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-echo-server, root: get-mac #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ECHO_SERVER_GET_MAC_2 = 2473,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-echo-server, root: get-mac #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ECHO_SERVER_GET_MAC_3 = 2474,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-echo-server, root: get-mac #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ECHO_SERVER_GET_MAC_4 = 2475,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-echo-server, root: get-mac #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ECHO_SERVER_GET_MAC_5 = 2476,

	/**
	 Input string is not a valid enum string of: enum_namespace, please check out #_enum_namespace for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_NAMESPACE = 2477,

	/**
	 Input string is not a valid enum string of: enum_root, please check out #_enum_root for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ROOT = 2478,

	/**
	 Input string is not a valid enum string of: enum_zapi_filter_type, please check out #_enum_zapi_filter_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ZAPI_FILTER_TYPE = 2479,

	/**
	 Input string is not a valid enum string of: enum_status_nat_interface_setting_element, please check out #_enum_status_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_NAT_INTERFACE_SETTING_ELEMENT = 2480,

	/**
	 Input string is not a valid enum string of: enum_status, please check out #_enum_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS = 2481,

	/**
	 Input string is not a valid enum string of: enum_auto_6rd, please check out #_enum_auto_6rd for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_AUTO_6RD = 2482,

	/**
	 Input string is not a valid enum string of: enum_tunneling_type, please check out #_enum_tunneling_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TUNNELING_TYPE = 2483,

	/**
	 Input string is not a valid enum string of: enum_dns_server, please check out #_enum_dns_server for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_DNS_SERVER = 2484,

	/**
	 Input string is not a valid enum string of: enum_support_encapsulation_element, please check out #_enum_support_encapsulation_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SUPPORT_ENCAPSULATION_ELEMENT = 2485,

	/**
	 Input string is not a valid enum string of: enum_wan_mac_setting, please check out #_enum_wan_mac_setting for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WAN_MAC_SETTING = 2486,

	/**
	 Input string is not a valid enum string of: enum_multicast_setup, please check out #_enum_multicast_setup for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_MULTICAST_SETUP = 2487,

	/**
	 Input string is not a valid enum string of: enum_option, please check out #_enum_option for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_OPTION = 2488,

	/**
	 Input string is not a valid enum string of: enum_ip_address_setting, please check out #_enum_ip_address_setting for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IP_ADDRESS_SETTING = 2489,

	/**
	 Input string is not a valid enum string of: enum_wan_ip_setting, please check out #_enum_wan_ip_setting for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WAN_IP_SETTING = 2490,

	/**
	 Input string is not a valid enum string of: enum_ip_address_setting_ip_address, please check out #_enum_ip_address_setting_ip_address for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IP_ADDRESS_SETTING_IP_ADDRESS = 2491,

	/**
	 Input string is not a valid enum string of: enum_encryption, please check out #_enum_encryption for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ENCRYPTION = 2492,

	/**
	 Input string is not a valid enum string of: enum_ipv4_ipv6, please check out #_enum_ipv4_ipv6 for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IPV4_IPV6 = 2493,

	/**
	 Input string is not a valid enum string of: enum_opmode, please check out #_enum_opmode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_OPMODE = 2494,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_group_element, please check out #_enum_current_union_item_group_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_GROUP_ELEMENT = 2495,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_access_operations, please check out #_enum_current_union_item_access_operations for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_ACCESS_OPERATIONS = 2496,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_notification_name, please check out #_enum_current_union_item_notification_name for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_NOTIFICATION_NAME = 2497,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_rpc_name, please check out #_enum_current_union_item_rpc_name for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_RPC_NAME = 2498,

	/**
	 Input string is not a valid enum string of: enum_current_case_rule_type, please check out #_enum_current_case_rule_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_RULE_TYPE = 2499,

	/**
	 Input string is not a valid enum string of: enum_action_type, please check out #_enum_action_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ACTION_TYPE = 2500,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_module_name, please check out #_enum_current_union_item_module_name for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_MODULE_NAME = 2501,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_radio_band, please check out #_enum_wifi_types_radio_band for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_RADIO_BAND = 2502,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_channel_bandwidth, please check out #_enum_wifi_types_channel_bandwidth for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_CHANNEL_BANDWIDTH = 2503,

	/**
	 Input string is not a valid enum string of: enum_device_type, please check out #_enum_device_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_DEVICE_TYPE = 2504,

	/**
	 Input string is not a valid enum string of: enum_radio, please check out #_enum_radio for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_RADIO = 2505,

	/**
	 Input string is not a valid enum string of: enum_connection_type, please check out #_enum_connection_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CONNECTION_TYPE = 2506,

	/**
	 Input string is not a valid enum string of: enum_current_case_device_function, please check out #_enum_current_case_device_function for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_DEVICE_FUNCTION = 2507,

	/**
	 Input string is not a valid enum string of: enum_current_case_connecting_type, please check out #_enum_current_case_connecting_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_CONNECTING_TYPE = 2508,

	/**
	 Input string is not a valid enum string of: enum_current_case_psk, please check out #_enum_current_case_psk for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_PSK = 2509,

	/**
	 Input string is not a valid enum string of: enum_network_type, please check out #_enum_network_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_NETWORK_TYPE = 2510,

	/**
	 Input string is not a valid enum string of: enum_proto, please check out #_enum_proto for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_PROTO = 2511,

	/**
	 Input string is not a valid enum string of: enum_action_mode, please check out #_enum_action_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ACTION_MODE = 2512,

	/**
	 Input string is not a valid enum string of: enum_service_type, please check out #_enum_service_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SERVICE_TYPE = 2513,

	/**
	 Input string is not a valid enum string of: enum_status_output_get_history, please check out #_enum_status_output_get_history for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_OUTPUT_GET_HISTORY = 2514,

	/**
	 Input string is not a valid enum string of: enum_target, please check out #_enum_target for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TARGET = 2515,

	/**
	 Input string is not a valid enum string of: enum_response, please check out #_enum_response for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_RESPONSE = 2516,

	/**
	 Input string is not a valid enum string of: enum_status_output_test_result, please check out #_enum_status_output_test_result for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_OUTPUT_TEST_RESULT = 2517,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_lease_time_remaining, please check out #_enum_current_union_item_lease_time_remaining for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_LEASE_TIME_REMAINING = 2518,

	/**
	 Input string is not a valid enum string of: enum_vendor_class_id_mode, please check out #_enum_vendor_class_id_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_VENDOR_CLASS_ID_MODE = 2519,

	/**
	 Input string is not a valid enum string of: enum_ble_status, please check out #_enum_ble_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_BLE_STATUS = 2520,

	/**
	 Input string is not a valid enum string of: enum_game_status, please check out #_enum_game_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_GAME_STATUS = 2521,

	/**
	 Input string is not a valid enum string of: enum_square_status, please check out #_enum_square_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SQUARE_STATUS = 2522,

	/**
	 Input string is not a valid enum string of: enum_result, please check out #_enum_result for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_RESULT = 2523,

	/**
	 Input string is not a valid enum string of: enum_status_output, please check out #_enum_status_output for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_OUTPUT = 2524,

	/**
	 Input string is not a valid enum string of: enum_if_ethernet_duplex, please check out #_enum_if_ethernet_duplex for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_ETHERNET_DUPLEX = 2525,

	/**
	 Input string is not a valid enum string of: enum_if_ppp_encryption_protocol, please check out #_enum_if_ppp_encryption_protocol for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_PPP_ENCRYPTION_PROTOCOL = 2526,

	/**
	 Input string is not a valid enum string of: enum_if_ppp_authentication_protocol, please check out #_enum_if_ppp_authentication_protocol for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_PPP_AUTHENTICATION_PROTOCOL = 2527,

	/**
	 Input string is not a valid enum string of: enum_oper_status, please check out #_enum_oper_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_OPER_STATUS = 2528,

	/**
	 Input string is not a valid enum string of: enum_if_ppp_connection_status, please check out #_enum_if_ppp_connection_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_PPP_CONNECTION_STATUS = 2529,

	/**
	 Input string is not a valid enum string of: enum_neighbor_origin, please check out #_enum_neighbor_origin for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_NEIGHBOR_ORIGIN = 2530,

	/**
	 Input string is not a valid enum string of: enum_ip_address_origin, please check out #_enum_ip_address_origin for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IP_ADDRESS_ORIGIN = 2531,

	/**
	 Input string is not a valid enum string of: enum_current_case, please check out #_enum_current_case for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE = 2532,

	/**
	 Input string is not a valid enum string of: enum_ip_state, please check out #_enum_ip_state for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IP_STATE = 2533,

	/**
	 Input string is not a valid enum string of: enum_ip_status, please check out #_enum_ip_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IP_STATUS = 2534,

	/**
	 Input string is not a valid enum string of: enum_if_ssid_wps_configured, please check out #_enum_if_ssid_wps_configured for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_SSID_WPS_CONFIGURED = 2535,

	/**
	 Input string is not a valid enum string of: enum_if_ppp_compression_protocol, please check out #_enum_if_ppp_compression_protocol for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_PPP_COMPRESSION_PROTOCOL = 2536,

	/**
	 Input string is not a valid enum string of: enum_admin_status, please check out #_enum_admin_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ADMIN_STATUS = 2537,

	/**
	 Input string is not a valid enum string of: enum_if_ethernet_speed, please check out #_enum_if_ethernet_speed for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_ETHERNET_SPEED = 2538,

	/**
	 Input string is not a valid enum string of: enum_current_case_if_ethernet_transmission_params, please check out #_enum_current_case_if_ethernet_transmission_params for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_IF_ETHERNET_TRANSMISSION_PARAMS = 2539,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_transmit_power, please check out #_enum_wifi_types_transmit_power for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_TRANSMIT_POWER = 2540,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_mode, please check out #_enum_wifi_types_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_MODE = 2541,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_security_mode, please check out #_enum_wifi_types_security_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_SECURITY_MODE = 2542,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_ssid_mode, please check out #_enum_wifi_types_ssid_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_SSID_MODE = 2543,

	/**
	 Input string is not a valid enum string of: enum_link_up_down_trap_enable, please check out #_enum_link_up_down_trap_enable for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_LINK_UP_DOWN_TRAP_ENABLE = 2544,

	/**
	 Input string is not a valid enum string of: enum_current_case_if_ssid_psk, please check out #_enum_current_case_if_ssid_psk for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_IF_SSID_PSK = 2545,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_channel_5g, please check out #_enum_wifi_types_channel_5g for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_CHANNEL_5G = 2546,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_if_radio_channel, please check out #_enum_current_union_item_if_radio_channel for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_IF_RADIO_CHANNEL = 2547,

	/**
	 Input string is not a valid enum string of: enum_action, please check out #_enum_action for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ACTION = 2548,

	/**
	 Input string is not a valid enum string of: enum_target_firewall, please check out #_enum_target_firewall for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TARGET_FIREWALL = 2549,

	/**
	 Input string is not a valid enum string of: enum_icmp_respond_to_ping_interface, please check out #_enum_icmp_respond_to_ping_interface for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ICMP_RESPOND_TO_PING_INTERFACE = 2550,

	/**
	 Input string is not a valid enum string of: enum_protocol, please check out #_enum_protocol for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_PROTOCOL = 2551,

	/**
	 Input string is not a valid enum string of: enum_wifi_types_wps_status, please check out #_enum_wifi_types_wps_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WIFI_TYPES_WPS_STATUS = 2552,

	/**
	 Input string is not a valid enum string of: enum_operation_type, please check out #_enum_operation_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_OPERATION_TYPE = 2553,

	/**
	 Input string is not a valid enum string of: enum_config_source, please check out #_enum_config_source for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CONFIG_SOURCE = 2554,

	/**
	 Input string is not a valid enum string of: enum_error_option, please check out #_enum_error_option for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ERROR_OPTION = 2555,

	/**
	 Input string is not a valid enum string of: enum_filter_type, please check out #_enum_filter_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_FILTER_TYPE = 2556,

	/**
	 Input string is not a valid enum string of: enum_error_type, please check out #_enum_error_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ERROR_TYPE = 2557,

	/**
	 Input string is not a valid enum string of: enum_error_severity, please check out #_enum_error_severity for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ERROR_SEVERITY = 2558,

	/**
	 Input string is not a valid enum string of: enum_reply_result, please check out #_enum_reply_result for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_REPLY_RESULT = 2559,

	/**
	 Input string is not a valid enum string of: enum_wfii_interface_type, please check out #_enum_wfii_interface_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WFII_INTERFACE_TYPE = 2560,

	/**
	 Input string is not a valid enum string of: enum_status_ipv6rd_interface_setting_element, please check out #_enum_status_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_IPV6RD_INTERFACE_SETTING_ELEMENT = 2561,

	/**
	 Input string is not a valid enum string of: enum_log_severity, please check out #_enum_log_severity for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_LOG_SEVERITY = 2562,

	/**
	 Input string is not a valid enum string of: enum_type, please check out #_enum_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TYPE = 2563,

	/**
	 Input string is not a valid enum string of: enum_schedule, please check out #_enum_schedule for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SCHEDULE = 2564,

	/**
	 Input string is not a valid enum string of: enum_mode, please check out #_enum_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_MODE = 2565,

	/**
	 Input string is not a valid enum string of: enum_dns_server_second_dns_server, please check out #_enum_dns_server_second_dns_server for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_DNS_SERVER_SECOND_DNS_SERVER = 2566,

	/**
	 Input string is not a valid enum string of: enum_ip_address_setting_ip_address_case_Access_Point, please check out #_enum_ip_address_setting_ip_address_case_Access_Point for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IP_ADDRESS_SETTING_IP_ADDRESS_CASE_ACCESS_POINT = 2567,

	/**
	 Input string is not a valid enum string of: enum_assignment, please check out #_enum_assignment for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ASSIGNMENT = 2568,

	/**
	 Input string is not a valid enum string of: enum_autoconfiguration_type, please check out #_enum_autoconfiguration_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_AUTOCONFIGURATION_TYPE = 2569,

	/**
	 Input string is not a valid enum string of: enum_current_case_opmode, please check out #_enum_current_case_opmode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_OPMODE = 2570,

	/**
	 Input string is not a valid enum string of: enum_current_case_timezone, please check out #_enum_current_case_timezone for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_TIMEZONE = 2571,

	/**
	 Input string is not a valid enum string of: enum_mode_clock, please check out #_enum_mode_clock for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_MODE_CLOCK = 2572,

	/**
	 Input string is not a valid enum string of: enum_association_type, please check out #_enum_association_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ASSOCIATION_TYPE = 2573,

	/**
	 Input string is not a valid enum string of: enum_current_union_item, please check out #_enum_current_union_item for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM = 2574,

	/**
	 Input string is not a valid enum string of: enum_current_case_transport, please check out #_enum_current_case_transport for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_TRANSPORT = 2575,

	/**
	 Input string is not a valid enum string of: enum_protocol_remote_access_element, please check out #_enum_protocol_remote_access_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_PROTOCOL_REMOTE_ACCESS_ELEMENT = 2576,

	/**
	 Input string is not a valid enum string of: enum_interface, please check out #_enum_interface for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_INTERFACE = 2577,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_client_address, please check out #_enum_current_union_item_client_address for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_CLIENT_ADDRESS = 2578,

	/**
	 Input string is not a valid enum string of: enum_current_union_item_address, please check out #_enum_current_union_item_address for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_UNION_ITEM_ADDRESS = 2579,

	/**
	 Input string is not a valid enum string of: enum_current_case_transport_server_element, please check out #_enum_current_case_transport_server_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_CURRENT_CASE_TRANSPORT_SERVER_ELEMENT = 2580,

	/**
	 Input string is not a valid enum string of: enum_status_led, please check out #_enum_status_led for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_LED = 2581,

	/**
	 Input string is not a valid enum string of: enum_switch, please check out #_enum_switch for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SWITCH = 2582,

	/**
	 Input string is not a valid enum string of: enum_operation_mode, please check out #_enum_operation_mode for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_OPERATION_MODE = 2583,

	/**
	 Input string is not a valid enum string of: enum_on_off_line, please check out #_enum_on_off_line for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ON_OFF_LINE = 2584,

	/**
	 Input string is not a valid enum string of: enum_authorization, please check out #_enum_authorization for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_AUTHORIZATION = 2585,

	/**
	 Input string is not a valid enum string of: enum_led_switch, please check out #_enum_led_switch for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_LED_SWITCH = 2586,

	/**
	 Input json string has invalid type of property : status, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2587,

	/**
	 Input json string has invalid value of property : status, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2588,

	/**
	 Input json string has invalid type of property : index, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2589,

	/**
	 Input json string has invalid value of property : index, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2590,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2591,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2592,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2593,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2594,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2595,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_nat_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_NAT_INTERFACE_SETTING_ELEMENT = 2596,

	/**
	 Input json string has invalid type of property : status, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2597,

	/**
	 Input json string has invalid value of property : status, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2598,

	/**
	 Input json string has invalid type of property : index, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2599,

	/**
	 Input json string has invalid value of property : index, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2600,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2601,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2602,

	/**
	 Input json string has invalid type of property : external_port_end_range, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXTERNAL_PORT_END_RANGE_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2603,

	/**
	 Input json string has invalid value of property : external_port_end_range, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXTERNAL_PORT_END_RANGE_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2604,

	/**
	 Input json string has invalid type of property : internal_port, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERNAL_PORT_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2605,

	/**
	 Input json string has invalid value of property : internal_port, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERNAL_PORT_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2606,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2607,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2608,

	/**
	 Input json string has invalid type of property : remote_host, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_REMOTE_HOST_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2609,

	/**
	 Input json string has invalid value of property : remote_host, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_REMOTE_HOST_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2610,

	/**
	 Input json string has invalid type of property : internal_client, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERNAL_CLIENT_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2611,

	/**
	 Input json string has invalid value of property : internal_client, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERNAL_CLIENT_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2612,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2613,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2614,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2615,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2616,

	/**
	 Input json string has invalid type of property : all_interfaces, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALL_INTERFACES_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2617,

	/**
	 Input json string has invalid value of property : all_interfaces, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALL_INTERFACES_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2618,

	/**
	 Input json string has invalid type of property : lease_duration, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LEASE_DURATION_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2619,

	/**
	 Input json string has invalid value of property : lease_duration, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LEASE_DURATION_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2620,

	/**
	 Input json string has invalid type of property : external_port, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXTERNAL_PORT_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2621,

	/**
	 Input json string has invalid value of property : external_port, please check out #struct_nat_port_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXTERNAL_PORT_IN_STRUCT_NAT_PORT_MAPPING_ELEMENT = 2622,

	/**
	 Input json string has invalid type of property : ipv6_prefix, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_PREFIX_IN_STRUCT_SIXIN4_PROFILE = 2623,

	/**
	 Input json string has invalid value of property : ipv6_prefix, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_PREFIX_IN_STRUCT_SIXIN4_PROFILE = 2624,

	/**
	 Input json string has invalid type of property : peer_address, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PEER_ADDRESS_IN_STRUCT_SIXIN4_PROFILE = 2625,

	/**
	 Input json string has invalid value of property : peer_address, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PEER_ADDRESS_IN_STRUCT_SIXIN4_PROFILE = 2626,

	/**
	 Input json string has invalid type of property : ipv6_peer_address, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_PEER_ADDRESS_IN_STRUCT_SIXIN4_PROFILE = 2627,

	/**
	 Input json string has invalid value of property : ipv6_peer_address, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_PEER_ADDRESS_IN_STRUCT_SIXIN4_PROFILE = 2628,

	/**
	 Input json string has invalid type of property : ipv6_address, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_ADDRESS_IN_STRUCT_SIXIN4_PROFILE = 2629,

	/**
	 Input json string has invalid value of property : ipv6_address, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_ADDRESS_IN_STRUCT_SIXIN4_PROFILE = 2630,

	/**
	 Input json string has invalid type of property : border_relay_ipv4_address, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BORDER_RELAY_IPV4_ADDRESS_IN_STRUCT_SIXRD_PROFILE = 2631,

	/**
	 Input json string has invalid value of property : border_relay_ipv4_address, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BORDER_RELAY_IPV4_ADDRESS_IN_STRUCT_SIXRD_PROFILE = 2632,

	/**
	 Input json string has invalid type of property : ipv6_prefix, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_PREFIX_IN_STRUCT_SIXRD_PROFILE = 2633,

	/**
	 Input json string has invalid value of property : ipv6_prefix, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_PREFIX_IN_STRUCT_SIXRD_PROFILE = 2634,

	/**
	 Input json string has invalid type of property : auto_6rd, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTO_6RD_IN_STRUCT_SIXRD_PROFILE = 2635,

	/**
	 Input json string has invalid value of property : auto_6rd, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTO_6RD_IN_STRUCT_SIXRD_PROFILE = 2636,

	/**
	 ipv6_prefix_length did not meet the restriction: 32..64, please check out #_struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_STRUCT_SIXRD_PROFILE_IPV6_PREFIX_LENGTH_RANGE_INCORRECT = 2637,

	/**
	 Input json string has invalid type of property : ipv6_prefix_length, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_PREFIX_LENGTH_IN_STRUCT_SIXRD_PROFILE = 2638,

	/**
	 Input json string has invalid value of property : ipv6_prefix_length, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_PREFIX_LENGTH_IN_STRUCT_SIXRD_PROFILE = 2639,

	/**
	 Input json string has invalid type of property : ipv4_prefix_length, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV4_PREFIX_LENGTH_IN_STRUCT_SIXRD_PROFILE = 2640,

	/**
	 Input json string has invalid value of property : ipv4_prefix_length, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV4_PREFIX_LENGTH_IN_STRUCT_SIXRD_PROFILE = 2641,

	/**
	 Input json string has invalid type of property : relay_address, please check out #struct_ipv6_tunneling for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RELAY_ADDRESS_IN_STRUCT_IPV6_TUNNELING = 2642,

	/**
	 Input json string has invalid value of property : relay_address, please check out #struct_ipv6_tunneling for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RELAY_ADDRESS_IN_STRUCT_IPV6_TUNNELING = 2643,

	/**
	 Input json string has invalid type in : struct_sixin4_profile, please check out #struct_sixin4_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_SIXIN4_PROFILE = 2644,

	/**
	 Input json string has invalid type in : struct_sixrd_profile, please check out #struct_sixrd_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_SIXRD_PROFILE = 2645,

	/**
	 Input json string has invalid type of property : tunneling_type, please check out #struct_ipv6_tunneling for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TUNNELING_TYPE_IN_STRUCT_IPV6_TUNNELING = 2646,

	/**
	 Input json string has invalid value of property : tunneling_type, please check out #struct_ipv6_tunneling for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TUNNELING_TYPE_IN_STRUCT_IPV6_TUNNELING = 2647,

	/**
	 Input json string has invalid type of property : dns_server, please check out #struct_first_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVER_IN_STRUCT_FIRST_DNS_SERVER = 2648,

	/**
	 Input json string has invalid value of property : dns_server, please check out #struct_first_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVER_IN_STRUCT_FIRST_DNS_SERVER = 2649,

	/**
	 Input json string has invalid type of property : dns_server_ip, please check out #struct_first_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVER_IP_IN_STRUCT_FIRST_DNS_SERVER = 2650,

	/**
	 Input json string has invalid value of property : dns_server_ip, please check out #struct_first_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVER_IP_IN_STRUCT_FIRST_DNS_SERVER = 2651,

	/**
	 Input json string has invalid type in : struct_first_dns_server, please check out #struct_first_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_FIRST_DNS_SERVER = 2652,

	/**
	 Input json string has invalid type of property : dns_server, please check out #struct_first_dns_server_ipv4_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVER_IN_STRUCT_FIRST_DNS_SERVER_IPV4_DNS_SERVER = 2653,

	/**
	 Input json string has invalid value of property : dns_server, please check out #struct_first_dns_server_ipv4_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVER_IN_STRUCT_FIRST_DNS_SERVER_IPV4_DNS_SERVER = 2654,

	/**
	 Input json string has invalid type of property : dns_server_ip, please check out #struct_first_dns_server_ipv4_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVER_IP_IN_STRUCT_FIRST_DNS_SERVER_IPV4_DNS_SERVER = 2655,

	/**
	 Input json string has invalid value of property : dns_server_ip, please check out #struct_first_dns_server_ipv4_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVER_IP_IN_STRUCT_FIRST_DNS_SERVER_IPV4_DNS_SERVER = 2656,

	/**
	 Input json string has invalid type in : struct_first_dns_server_ipv4_dns_server, please check out #struct_first_dns_server_ipv4_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_FIRST_DNS_SERVER_IPV4_DNS_SERVER = 2657,

	/**
	 Input json string has invalid type of property : subnet, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUBNET_IN_STRUCT_PPTP_CONFIG = 2658,

	/**
	 Input json string has invalid value of property : subnet, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUBNET_IN_STRUCT_PPTP_CONFIG = 2659,

	/**
	 Input json string has invalid type of property : ip, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IN_STRUCT_PPTP_CONFIG = 2660,

	/**
	 Input json string has invalid value of property : ip, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IN_STRUCT_PPTP_CONFIG = 2661,

	/**
	 Input json string has invalid type of property : pptp_server_ip, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PPTP_SERVER_IP_IN_STRUCT_PPTP_CONFIG = 2662,

	/**
	 Input json string has invalid value of property : pptp_server_ip, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PPTP_SERVER_IP_IN_STRUCT_PPTP_CONFIG = 2663,

	/**
	 Input json string has invalid type of property : config_ip, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CONFIG_IP_IN_STRUCT_PPTP_CONFIG = 2664,

	/**
	 Input json string has invalid value of property : config_ip, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CONFIG_IP_IN_STRUCT_PPTP_CONFIG = 2665,

	/**
	 Input json string has invalid type of property : gateway, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GATEWAY_IN_STRUCT_PPTP_CONFIG = 2666,

	/**
	 Input json string has invalid value of property : gateway, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GATEWAY_IN_STRUCT_PPTP_CONFIG = 2667,

	/**
	 Input json string has invalid type of property : set_wan_mac, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SET_WAN_MAC_IN_STRUCT_WAN_MAC = 2668,

	/**
	 Input json string has invalid value of property : set_wan_mac, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SET_WAN_MAC_IN_STRUCT_WAN_MAC = 2669,

	/**
	 Input json string has invalid type of property : wan_mac_setting, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WAN_MAC_SETTING_IN_STRUCT_WAN_MAC = 2670,

	/**
	 Input json string has invalid value of property : wan_mac_setting, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WAN_MAC_SETTING_IN_STRUCT_WAN_MAC = 2671,

	/**
	 Input json string has invalid type of property : clone_computer_mac, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLONE_COMPUTER_MAC_IN_STRUCT_WAN_MAC = 2672,

	/**
	 Input json string has invalid value of property : clone_computer_mac, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLONE_COMPUTER_MAC_IN_STRUCT_WAN_MAC = 2673,

	/**
	 Input json string has invalid type of property : ipv6_address, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_ADDRESS_IN_STRUCT_STATIC_IPV6_ADDRESS = 2674,

	/**
	 Input json string has invalid value of property : ipv6_address, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_ADDRESS_IN_STRUCT_STATIC_IPV6_ADDRESS = 2675,

	/**
	 Input json string has invalid type of property : prefix_length, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFIX_LENGTH_IN_STRUCT_STATIC_IPV6_ADDRESS = 2676,

	/**
	 Input json string has invalid value of property : prefix_length, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFIX_LENGTH_IN_STRUCT_STATIC_IPV6_ADDRESS = 2677,

	/**
	 Input json string has invalid type of property : ipv6_default_gateway, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_DEFAULT_GATEWAY_IN_STRUCT_STATIC_IPV6_ADDRESS = 2678,

	/**
	 Input json string has invalid value of property : ipv6_default_gateway, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_DEFAULT_GATEWAY_IN_STRUCT_STATIC_IPV6_ADDRESS = 2679,

	/**
	 Input json string has invalid type of property : option, please check out #struct_dhcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPTION_IN_STRUCT_DHCP = 2680,

	/**
	 Input json string has invalid value of property : option, please check out #struct_dhcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPTION_IN_STRUCT_DHCP = 2681,

	/**
	 Input json string has invalid type in : struct_static_ipv6_address, please check out #struct_static_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_STATIC_IPV6_ADDRESS = 2682,

	/**
	 Input json string has invalid type in : struct_dhcp, please check out #struct_dhcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_DHCP = 2683,

	/**
	 Input json string has invalid type of property : ip_address_setting, please check out #struct_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ADDRESS_SETTING_IN_STRUCT_IPV6_ADDRESS = 2684,

	/**
	 Input json string has invalid value of property : ip_address_setting, please check out #struct_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ADDRESS_SETTING_IN_STRUCT_IPV6_ADDRESS = 2685,

	/**
	 Input json string has invalid type of property : wan_ip_setting, please check out #struct_wan_ip_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WAN_IP_SETTING_IN_STRUCT_WAN_IP_ASSIGNMENT = 2686,

	/**
	 Input json string has invalid value of property : wan_ip_setting, please check out #struct_wan_ip_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WAN_IP_SETTING_IN_STRUCT_WAN_IP_ASSIGNMENT = 2687,

	/**
	 Input json string has invalid type of property : fixed_ip_address, please check out #struct_wan_ip_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIXED_IP_ADDRESS_IN_STRUCT_WAN_IP_ASSIGNMENT = 2688,

	/**
	 Input json string has invalid value of property : fixed_ip_address, please check out #struct_wan_ip_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIXED_IP_ADDRESS_IN_STRUCT_WAN_IP_ASSIGNMENT = 2689,

	/**
	 Input json string has invalid type of property : ip, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IN_STRUCT_STATIC_IP = 2690,

	/**
	 Input json string has invalid value of property : ip, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IN_STRUCT_STATIC_IP = 2691,

	/**
	 Input json string has invalid type of property : gateway, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GATEWAY_IN_STRUCT_STATIC_IP = 2692,

	/**
	 Input json string has invalid value of property : gateway, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GATEWAY_IN_STRUCT_STATIC_IP = 2693,

	/**
	 Input json string has invalid type of property : subnet, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUBNET_IN_STRUCT_STATIC_IP = 2694,

	/**
	 Input json string has invalid value of property : subnet, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUBNET_IN_STRUCT_STATIC_IP = 2695,

	/**
	 Input json string has invalid type of property : ip_address_setting, please check out #struct_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ADDRESS_SETTING_IN_STRUCT_IP_ADDRESS = 2696,

	/**
	 Input json string has invalid value of property : ip_address_setting, please check out #struct_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ADDRESS_SETTING_IN_STRUCT_IP_ADDRESS = 2697,

	/**
	 mtu did not meet the restriction: 68..max, please check out #_struct_ip_address for more information.
	 */
	ZapiErrorCode_STRUCT_IP_ADDRESS_MTU_RANGE_INCORRECT = 2698,

	/**
	 Input json string has invalid type of property : mtu, please check out #struct_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MTU_IN_STRUCT_IP_ADDRESS = 2699,

	/**
	 Input json string has invalid value of property : mtu, please check out #struct_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MTU_IN_STRUCT_IP_ADDRESS = 2700,

	/**
	 Input json string has invalid type in : struct_static_ip, please check out #struct_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_STATIC_IP = 2701,

	/**
	 Input json string has invalid type of property : username, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USERNAME_IN_STRUCT_PPTP_SETTING = 2702,

	/**
	 Input json string has invalid value of property : username, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USERNAME_IN_STRUCT_PPTP_SETTING = 2703,

	/**
	 Input json string has invalid type of property : auto_connect, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTO_CONNECT_IN_STRUCT_PPTP_SETTING = 2704,

	/**
	 Input json string has invalid value of property : auto_connect, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTO_CONNECT_IN_STRUCT_PPTP_SETTING = 2705,

	/**
	 Input json string has invalid type of property : encryption, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENCRYPTION_IN_STRUCT_PPTP_SETTING = 2706,

	/**
	 Input json string has invalid value of property : encryption, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENCRYPTION_IN_STRUCT_PPTP_SETTING = 2707,

	/**
	 mtu did not meet the restriction: 1360..1492, please check out #_struct_pptp_setting for more information.
	 */
	ZapiErrorCode_STRUCT_PPTP_SETTING_MTU_RANGE_INCORRECT = 2708,

	/**
	 Input json string has invalid type of property : mtu, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MTU_IN_STRUCT_PPTP_SETTING = 2709,

	/**
	 Input json string has invalid value of property : mtu, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MTU_IN_STRUCT_PPTP_SETTING = 2710,

	/**
	 Input json string has invalid type of property : idle_timeout, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IDLE_TIMEOUT_IN_STRUCT_PPTP_SETTING = 2711,

	/**
	 Input json string has invalid value of property : idle_timeout, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IDLE_TIMEOUT_IN_STRUCT_PPTP_SETTING = 2712,

	/**
	 Input json string has invalid type of property : password, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_PPTP_SETTING = 2713,

	/**
	 Input json string has invalid value of property : password, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_PPTP_SETTING = 2714,

	/**
	 Input json string has invalid type of property : username, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USERNAME_IN_STRUCT_PPP_SETTING = 2715,

	/**
	 Input json string has invalid value of property : username, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USERNAME_IN_STRUCT_PPP_SETTING = 2716,

	/**
	 Input json string has invalid type of property : auto_connect_enable, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTO_CONNECT_ENABLE_IN_STRUCT_PPP_SETTING = 2717,

	/**
	 Input json string has invalid value of property : auto_connect_enable, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTO_CONNECT_ENABLE_IN_STRUCT_PPP_SETTING = 2718,

	/**
	 Input json string has invalid type of property : idle_disconnect_time, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IDLE_DISCONNECT_TIME_IN_STRUCT_PPP_SETTING = 2719,

	/**
	 Input json string has invalid value of property : idle_disconnect_time, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IDLE_DISCONNECT_TIME_IN_STRUCT_PPP_SETTING = 2720,

	/**
	 Input json string has invalid type of property : mtu, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MTU_IN_STRUCT_PPP_SETTING = 2721,

	/**
	 Input json string has invalid value of property : mtu, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MTU_IN_STRUCT_PPP_SETTING = 2722,

	/**
	 Input json string has invalid type of property : pppoe_service_name, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PPPOE_SERVICE_NAME_IN_STRUCT_PPP_SETTING = 2723,

	/**
	 Input json string has invalid value of property : pppoe_service_name, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PPPOE_SERVICE_NAME_IN_STRUCT_PPP_SETTING = 2724,

	/**
	 Input json string has invalid type of property : password, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_PPP_SETTING = 2725,

	/**
	 Input json string has invalid value of property : password, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_PPP_SETTING = 2726,

	/**
	 Input json string has invalid type in : struct_ipv6_tunneling, please check out #struct_ipv6_tunneling for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IPV6_TUNNELING = 2727,

	/**
	 Input json string has invalid type in : struct_ipv6_dns_server, please check out #struct_ipv6_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IPV6_DNS_SERVER = 2728,

	/**
	 Input json string has invalid type of property : name, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2729,

	/**
	 Input json string has invalid value of property : name, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2730,

	/**
	 Input json string has invalid type in : struct_ipv4_dns_server, please check out #struct_ipv4_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IPV4_DNS_SERVER = 2731,

	/**
	 Input json string has invalid type of property : base_interface, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BASE_INTERFACE_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2732,

	/**
	 Input json string has invalid value of property : base_interface, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BASE_INTERFACE_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2733,

	/**
	 Input json string has invalid type in : struct_pptp_config, please check out #struct_pptp_config for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PPTP_CONFIG = 2734,

	/**
	 Input json string has invalid type in : struct_wan_mac, please check out #struct_wan_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_WAN_MAC = 2735,

	/**
	 Input json string has invalid type of property : multicast_setup, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MULTICAST_SETUP_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2736,

	/**
	 Input json string has invalid value of property : multicast_setup, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MULTICAST_SETUP_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2737,

	/**
	 Input json string has invalid type in : struct_ipv6_address, please check out #struct_ipv6_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IPV6_ADDRESS = 2738,

	/**
	 Input json string has invalid type in : struct_wan_ip_assignment, please check out #struct_wan_ip_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_WAN_IP_ASSIGNMENT = 2739,

	/**
	 Input json string has invalid type of property : wan_encapsulation, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WAN_ENCAPSULATION_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2740,

	/**
	 Input json string has invalid value of property : wan_encapsulation, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WAN_ENCAPSULATION_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2741,

	/**
	 Input json string has invalid type in : struct_ip_address, please check out #struct_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_ADDRESS = 2742,

	/**
	 Input json string has invalid type in : struct_pptp_setting, please check out #struct_pptp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PPTP_SETTING = 2743,

	/**
	 Input json string has invalid type of property : ipv4_ipv6, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV4_IPV6_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2744,

	/**
	 Input json string has invalid value of property : ipv4_ipv6, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV4_IPV6_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2745,

	/**
	 Input json string has invalid type in : struct_ppp_setting, please check out #struct_ppp_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PPP_SETTING = 2746,

	/**
	 Input json string has invalid type of property : auto_ip_change_enable, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTO_IP_CHANGE_ENABLE_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2747,

	/**
	 Input json string has invalid value of property : auto_ip_change_enable, please check out #struct_wan_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTO_IP_CHANGE_ENABLE_IN_STRUCT_WAN_SETTINGS_ELEMENT = 2748,

	/**
	 Input json string has invalid type of property : certificate, please check out #struct_output_transfer_certificate for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CERTIFICATE_IN_STRUCT_OUTPUT_TRANSFER_CERTIFICATE = 2749,

	/**
	 Input json string has invalid value of property : certificate, please check out #struct_output_transfer_certificate for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CERTIFICATE_IN_STRUCT_OUTPUT_TRANSFER_CERTIFICATE = 2750,

	/**
	 Input json string has invalid type in : struct_output_transfer_certificate, please check out #struct_output_transfer_certificate for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_TRANSFER_CERTIFICATE = 2751,

	/**
	 Input json string has invalid type of property : private_key_path, please check out #struct_output_get_private_key_path for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PRIVATE_KEY_PATH_IN_STRUCT_OUTPUT_GET_PRIVATE_KEY_PATH = 2752,

	/**
	 Input json string has invalid value of property : private_key_path, please check out #struct_output_get_private_key_path for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PRIVATE_KEY_PATH_IN_STRUCT_OUTPUT_GET_PRIVATE_KEY_PATH = 2753,

	/**
	 Input json string has invalid type in : struct_output_get_private_key_path, please check out #struct_output_get_private_key_path for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_PRIVATE_KEY_PATH = 2754,

	/**
	 Input json string has invalid type of property : opmode, please check out #struct_top for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPMODE_IN_STRUCT_TOP = 2755,

	/**
	 Input json string has invalid value of property : opmode, please check out #struct_top for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPMODE_IN_STRUCT_TOP = 2756,

	/**
	 Input json string has invalid type of property : union_of_matchall_string_type, please check out #struct_group_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_GROUP_ELEMENT = 2757,

	/**
	 Input json string has invalid value of property : union_of_matchall_string_type, please check out #struct_group_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_GROUP_ELEMENT = 2758,

	/**
	 Input json string has invalid type of property : union_of_group_name_type, please check out #struct_group_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_GROUP_NAME_TYPE_IN_STRUCT_GROUP_ELEMENT = 2759,

	/**
	 Input json string has invalid value of property : union_of_group_name_type, please check out #struct_group_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_GROUP_NAME_TYPE_IN_STRUCT_GROUP_ELEMENT = 2760,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_group_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_GROUP_ELEMENT = 2761,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_group_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_GROUP_ELEMENT = 2762,

	/**
	 Input json string has invalid type of property : union_of_matchall_string_type, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_ACCESS_OPERATIONS = 2763,

	/**
	 Input json string has invalid value of property : union_of_matchall_string_type, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_ACCESS_OPERATIONS = 2764,

	/**
	 Input json string has invalid type of property : union_of_access_operations_type, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_ACCESS_OPERATIONS_TYPE_IN_STRUCT_ACCESS_OPERATIONS = 2765,

	/**
	 Input json string has invalid value of property : union_of_access_operations_type, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_ACCESS_OPERATIONS_TYPE_IN_STRUCT_ACCESS_OPERATIONS = 2766,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_ACCESS_OPERATIONS = 2767,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_ACCESS_OPERATIONS = 2768,

	/**
	 Input json string has invalid type of property : union_of_matchall_string_type, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_NOTIFICATION_NAME = 2769,

	/**
	 Input json string has invalid value of property : union_of_matchall_string_type, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_NOTIFICATION_NAME = 2770,

	/**
	 Input json string has invalid type of property : union_of_string, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_STRING_IN_STRUCT_NOTIFICATION_NAME = 2771,

	/**
	 Input json string has invalid value of property : union_of_string, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_STRING_IN_STRUCT_NOTIFICATION_NAME = 2772,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_NOTIFICATION_NAME = 2773,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_NOTIFICATION_NAME = 2774,

	/**
	 Input json string has invalid type in : struct_notification_name, please check out #struct_notification_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_NOTIFICATION_NAME = 2775,

	/**
	 Input json string has invalid type of property : union_of_matchall_string_type, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_RPC_NAME = 2776,

	/**
	 Input json string has invalid value of property : union_of_matchall_string_type, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_RPC_NAME = 2777,

	/**
	 Input json string has invalid type of property : union_of_string, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_STRING_IN_STRUCT_RPC_NAME = 2778,

	/**
	 Input json string has invalid value of property : union_of_string, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_STRING_IN_STRUCT_RPC_NAME = 2779,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_RPC_NAME = 2780,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_RPC_NAME = 2781,

	/**
	 Input json string has invalid type in : struct_rpc_name, please check out #struct_rpc_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_RPC_NAME = 2782,

	/**
	 Input json string has invalid type of property : path, please check out #struct_case_data_node for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PATH_IN_STRUCT_CASE_DATA_NODE = 2783,

	/**
	 Input json string has invalid value of property : path, please check out #struct_case_data_node for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PATH_IN_STRUCT_CASE_DATA_NODE = 2784,

	/**
	 Input json string has invalid type in : struct_case_notification, please check out #struct_case_notification for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_NOTIFICATION = 2785,

	/**
	 Input json string has invalid type in : struct_case_protocol_operation, please check out #struct_case_protocol_operation for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_PROTOCOL_OPERATION = 2786,

	/**
	 Input json string has invalid type in : struct_case_data_node, please check out #struct_case_data_node for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_DATA_NODE = 2787,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_rule_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_RULE_TYPE = 2788,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_rule_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_RULE_TYPE = 2789,

	/**
	 Input json string has invalid type of property : union_of_matchall_string_type, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_MODULE_NAME = 2790,

	/**
	 Input json string has invalid value of property : union_of_matchall_string_type, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_MATCHALL_STRING_TYPE_IN_STRUCT_MODULE_NAME = 2791,

	/**
	 Input json string has invalid type of property : union_of_string, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_STRING_IN_STRUCT_MODULE_NAME = 2792,

	/**
	 Input json string has invalid value of property : union_of_string, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_STRING_IN_STRUCT_MODULE_NAME = 2793,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_MODULE_NAME = 2794,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_MODULE_NAME = 2795,

	/**
	 Input json string has invalid type of property : comment, please check out #struct_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_COMMENT_IN_STRUCT_RULE_ELEMENT = 2796,

	/**
	 Input json string has invalid value of property : comment, please check out #struct_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_COMMENT_IN_STRUCT_RULE_ELEMENT = 2797,

	/**
	 name did not meet the restriction: 1..max, please check out #_struct_rule_element for more information.
	 */
	ZapiErrorCode_STRUCT_RULE_ELEMENT_NAME_LENGTH_INCORRECT = 2798,

	/**
	 Input json string has invalid type of property : name, please check out #struct_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_RULE_ELEMENT = 2799,

	/**
	 Input json string has invalid value of property : name, please check out #struct_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_RULE_ELEMENT = 2800,

	/**
	 Input json string has invalid type in : struct_access_operations, please check out #struct_access_operations for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ACCESS_OPERATIONS = 2801,

	/**
	 Input json string has invalid type in : struct_rule_type, please check out #struct_rule_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_RULE_TYPE = 2802,

	/**
	 Input json string has invalid type of property : action, please check out #struct_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTION_IN_STRUCT_RULE_ELEMENT = 2803,

	/**
	 Input json string has invalid value of property : action, please check out #struct_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTION_IN_STRUCT_RULE_ELEMENT = 2804,

	/**
	 Input json string has invalid type in : struct_module_name, please check out #struct_module_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_MODULE_NAME = 2805,

	/**
	 name did not meet the restriction: 1..max, please check out #_struct_rule_list_element for more information.
	 */
	ZapiErrorCode_STRUCT_RULE_LIST_ELEMENT_NAME_LENGTH_INCORRECT = 2806,

	/**
	 Input json string has invalid type of property : name, please check out #struct_rule_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_RULE_LIST_ELEMENT = 2807,

	/**
	 Input json string has invalid value of property : name, please check out #struct_rule_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_RULE_LIST_ELEMENT = 2808,

	/**
	 Input json string has invalid type of property : name, please check out #struct_group_element_group for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_GROUP_ELEMENT_GROUP = 2809,

	/**
	 Input json string has invalid value of property : name, please check out #struct_group_element_group for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_GROUP_ELEMENT_GROUP = 2810,

	/**
	 Input json string has invalid type of property : read_default, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_READ_DEFAULT_IN_STRUCT_NACM = 2811,

	/**
	 Input json string has invalid value of property : read_default, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_READ_DEFAULT_IN_STRUCT_NACM = 2812,

	/**
	 Input json string has invalid type of property : denied_operations, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DENIED_OPERATIONS_IN_STRUCT_NACM = 2813,

	/**
	 Input json string has invalid value of property : denied_operations, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DENIED_OPERATIONS_IN_STRUCT_NACM = 2814,

	/**
	 Input json string has invalid type of property : enable_external_groups, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_EXTERNAL_GROUPS_IN_STRUCT_NACM = 2815,

	/**
	 Input json string has invalid value of property : enable_external_groups, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_EXTERNAL_GROUPS_IN_STRUCT_NACM = 2816,

	/**
	 Input json string has invalid type of property : denied_data_writes, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DENIED_DATA_WRITES_IN_STRUCT_NACM = 2817,

	/**
	 Input json string has invalid value of property : denied_data_writes, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DENIED_DATA_WRITES_IN_STRUCT_NACM = 2818,

	/**
	 Input json string has invalid type of property : write_default, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WRITE_DEFAULT_IN_STRUCT_NACM = 2819,

	/**
	 Input json string has invalid value of property : write_default, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WRITE_DEFAULT_IN_STRUCT_NACM = 2820,

	/**
	 Input json string has invalid type of property : denied_notifications, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DENIED_NOTIFICATIONS_IN_STRUCT_NACM = 2821,

	/**
	 Input json string has invalid value of property : denied_notifications, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DENIED_NOTIFICATIONS_IN_STRUCT_NACM = 2822,

	/**
	 Input json string has invalid type in : struct_groups, please check out #struct_groups for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_GROUPS = 2823,

	/**
	 Input json string has invalid type of property : exec_default, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXEC_DEFAULT_IN_STRUCT_NACM = 2824,

	/**
	 Input json string has invalid value of property : exec_default, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXEC_DEFAULT_IN_STRUCT_NACM = 2825,

	/**
	 Input json string has invalid type of property : enable_nacm, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_NACM_IN_STRUCT_NACM = 2826,

	/**
	 Input json string has invalid value of property : enable_nacm, please check out #struct_nacm for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_NACM_IN_STRUCT_NACM = 2827,

	/**
	 Input json string has invalid type of property : band, please check out #struct_input_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BAND_IN_STRUCT_INPUT_GET_CHANNEL_LIST = 2828,

	/**
	 Input json string has invalid value of property : band, please check out #struct_input_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BAND_IN_STRUCT_INPUT_GET_CHANNEL_LIST = 2829,

	/**
	 Input json string has invalid type of property : bandwidth, please check out #struct_input_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BANDWIDTH_IN_STRUCT_INPUT_GET_CHANNEL_LIST = 2830,

	/**
	 Input json string has invalid value of property : bandwidth, please check out #struct_input_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BANDWIDTH_IN_STRUCT_INPUT_GET_CHANNEL_LIST = 2831,

	/**
	 Input json string has invalid type of property : channel_list, please check out #struct_output_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHANNEL_LIST_IN_STRUCT_OUTPUT_GET_CHANNEL_LIST = 2832,

	/**
	 Input json string has invalid value of property : channel_list, please check out #struct_output_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHANNEL_LIST_IN_STRUCT_OUTPUT_GET_CHANNEL_LIST = 2833,

	/**
	 Input json string has invalid type in : struct_input_get_channel_list, please check out #struct_input_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_GET_CHANNEL_LIST = 2834,

	/**
	 Input json string has invalid type in : struct_output_get_channel_list, please check out #struct_output_get_channel_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_CHANNEL_LIST = 2835,

	/**
	 Input json string has invalid type of property : radio_index, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RADIO_INDEX_IN_STRUCT_WIFI_STATUS = 2836,

	/**
	 Input json string has invalid value of property : radio_index, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RADIO_INDEX_IN_STRUCT_WIFI_STATUS = 2837,

	/**
	 Input json string has invalid type of property : radio, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RADIO_IN_STRUCT_WIFI_STATUS = 2838,

	/**
	 Input json string has invalid value of property : radio, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RADIO_IN_STRUCT_WIFI_STATUS = 2839,

	/**
	 Input json string has invalid type of property : rssi, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RSSI_IN_STRUCT_WIFI_STATUS = 2840,

	/**
	 Input json string has invalid value of property : rssi, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RSSI_IN_STRUCT_WIFI_STATUS = 2841,

	/**
	 Input json string has invalid type of property : ap_bssid, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AP_BSSID_IN_STRUCT_WIFI_STATUS = 2842,

	/**
	 Input json string has invalid value of property : ap_bssid, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AP_BSSID_IN_STRUCT_WIFI_STATUS = 2843,

	/**
	 Input json string has invalid type of property : device_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEVICE_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2844,

	/**
	 Input json string has invalid value of property : device_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEVICE_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2845,

	/**
	 Input json string has invalid type of property : guest, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GUEST_IN_STRUCT_DEVICE_ELEMENT = 2846,

	/**
	 Input json string has invalid value of property : guest, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GUEST_IN_STRUCT_DEVICE_ELEMENT = 2847,

	/**
	 Input json string has invalid type of property : alive_status, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIVE_STATUS_IN_STRUCT_DEVICE_ELEMENT = 2848,

	/**
	 Input json string has invalid value of property : alive_status, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIVE_STATUS_IN_STRUCT_DEVICE_ELEMENT = 2849,

	/**
	 Input json string has invalid type of property : os_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OS_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2850,

	/**
	 Input json string has invalid value of property : os_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OS_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2851,

	/**
	 Input json string has invalid type of property : device_name, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEVICE_NAME_IN_STRUCT_DEVICE_ELEMENT = 2852,

	/**
	 Input json string has invalid value of property : device_name, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEVICE_NAME_IN_STRUCT_DEVICE_ELEMENT = 2853,

	/**
	 Input json string has invalid type of property : tag, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TAG_IN_STRUCT_DEVICE_ELEMENT = 2854,

	/**
	 Input json string has invalid value of property : tag, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TAG_IN_STRUCT_DEVICE_ELEMENT = 2855,

	/**
	 Input json string has invalid type in : struct_wifi_status, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_WIFI_STATUS = 2856,

	/**
	 Input json string has invalid type of property : connection_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CONNECTION_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2857,

	/**
	 Input json string has invalid value of property : connection_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CONNECTION_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2858,

	/**
	 Input json string has invalid type of property : host_name, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HOST_NAME_IN_STRUCT_DEVICE_ELEMENT = 2859,

	/**
	 Input json string has invalid value of property : host_name, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HOST_NAME_IN_STRUCT_DEVICE_ELEMENT = 2860,

	/**
	 Input json string has invalid type of property : ipv6_address, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV6_ADDRESS_IN_STRUCT_DEVICE_ELEMENT = 2861,

	/**
	 Input json string has invalid value of property : ipv6_address, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV6_ADDRESS_IN_STRUCT_DEVICE_ELEMENT = 2862,

	/**
	 Input json string has invalid type of property : ipv4_address, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV4_ADDRESS_IN_STRUCT_DEVICE_ELEMENT = 2863,

	/**
	 Input json string has invalid value of property : ipv4_address, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV4_ADDRESS_IN_STRUCT_DEVICE_ELEMENT = 2864,

	/**
	 Input json string has invalid type of property : join_time, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_JOIN_TIME_IN_STRUCT_DEVICE_ELEMENT = 2865,

	/**
	 Input json string has invalid value of property : join_time, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_JOIN_TIME_IN_STRUCT_DEVICE_ELEMENT = 2866,

	/**
	 Input json string has invalid type of property : id, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ID_IN_STRUCT_DEVICE_ELEMENT = 2867,

	/**
	 Input json string has invalid value of property : id, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ID_IN_STRUCT_DEVICE_ELEMENT = 2868,

	/**
	 Input json string has invalid type of property : host_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HOST_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2869,

	/**
	 Input json string has invalid value of property : host_type, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HOST_TYPE_IN_STRUCT_DEVICE_ELEMENT = 2870,

	/**
	 Input json string has invalid type of property : manufacturer, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MANUFACTURER_IN_STRUCT_DEVICE_ELEMENT = 2871,

	/**
	 Input json string has invalid value of property : manufacturer, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MANUFACTURER_IN_STRUCT_DEVICE_ELEMENT = 2872,

	/**
	 Input json string has invalid type of property : id, please check out #struct_input_remove_device_customized_data for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ID_IN_STRUCT_INPUT_REMOVE_DEVICE_CUSTOMIZED_DATA = 2873,

	/**
	 Input json string has invalid value of property : id, please check out #struct_input_remove_device_customized_data for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ID_IN_STRUCT_INPUT_REMOVE_DEVICE_CUSTOMIZED_DATA = 2874,

	/**
	 Input json string has invalid type in : struct_input_remove_device_customized_data, please check out #struct_input_remove_device_customized_data for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_REMOVE_DEVICE_CUSTOMIZED_DATA = 2875,

	/**
	 Input json string has invalid type of property : id, please check out #struct_input_set_host_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ID_IN_STRUCT_INPUT_SET_HOST_TYPE = 2876,

	/**
	 Input json string has invalid value of property : id, please check out #struct_input_set_host_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ID_IN_STRUCT_INPUT_SET_HOST_TYPE = 2877,

	/**
	 Input json string has invalid type of property : host_type, please check out #struct_input_set_host_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HOST_TYPE_IN_STRUCT_INPUT_SET_HOST_TYPE = 2878,

	/**
	 Input json string has invalid value of property : host_type, please check out #struct_input_set_host_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HOST_TYPE_IN_STRUCT_INPUT_SET_HOST_TYPE = 2879,

	/**
	 Input json string has invalid type in : struct_input_set_host_type, please check out #struct_input_set_host_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SET_HOST_TYPE = 2880,

	/**
	 Input json string has invalid type of property : id, please check out #struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ID_IN_STRUCT_INPUT_SET_HOST_NAME = 2881,

	/**
	 Input json string has invalid value of property : id, please check out #struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ID_IN_STRUCT_INPUT_SET_HOST_NAME = 2882,

	/**
	 name did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_HOST_NAME_NAME_PATTERN_INCORRECT = 2883,

	/**
	 name did not meet the restriction: 2..24, please check out #_struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_HOST_NAME_NAME_LENGTH_INCORRECT = 2884,

	/**
	 Input json string has invalid type of property : name, please check out #struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INPUT_SET_HOST_NAME = 2885,

	/**
	 Input json string has invalid value of property : name, please check out #struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INPUT_SET_HOST_NAME = 2886,

	/**
	 Input json string has invalid type in : struct_input_set_host_name, please check out #struct_input_set_host_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SET_HOST_NAME = 2887,

	/**
	 Input json string has invalid type of property : wifi_on_off, please check out #struct_l2_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WIFI_ON_OFF_IN_STRUCT_L2_DEVICE_FUNCTION = 2888,

	/**
	 Input json string has invalid value of property : wifi_on_off, please check out #struct_l2_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WIFI_ON_OFF_IN_STRUCT_L2_DEVICE_FUNCTION = 2889,

	/**
	 Input json string has invalid type of property : reboot, please check out #struct_l2_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_REBOOT_IN_STRUCT_L2_DEVICE_FUNCTION = 2890,

	/**
	 Input json string has invalid value of property : reboot, please check out #struct_l2_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_REBOOT_IN_STRUCT_L2_DEVICE_FUNCTION = 2891,

	/**
	 Input json string has invalid type in : struct_l2_device_function, please check out #struct_l2_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_L2_DEVICE_FUNCTION = 2892,

	/**
	 Input json string has invalid type in : struct_case_l2_device, please check out #struct_case_l2_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_L2_DEVICE = 2893,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_DEVICE_FUNCTION = 2894,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_DEVICE_FUNCTION = 2895,

	/**
	 Input json string has invalid type in : struct_device_function, please check out #struct_device_function for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_DEVICE_FUNCTION = 2896,

	/**
	 Input json string has invalid type of property : id, please check out #struct_device_information_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ID_IN_STRUCT_DEVICE_INFORMATION_ELEMENT = 2897,

	/**
	 Input json string has invalid value of property : id, please check out #struct_device_information_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ID_IN_STRUCT_DEVICE_INFORMATION_ELEMENT = 2898,

	/**
	 Input json string has invalid type of property : rssi, please check out #struct_zwave for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RSSI_IN_STRUCT_ZWAVE = 2899,

	/**
	 Input json string has invalid value of property : rssi, please check out #struct_zwave for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RSSI_IN_STRUCT_ZWAVE = 2900,

	/**
	 Input json string has invalid type in : struct_zwave, please check out #struct_zwave for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ZWAVE = 2901,

	/**
	 Input json string has invalid type of property : link_rate, please check out #struct_wifi_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LINK_RATE_IN_STRUCT_WIFI_TYPE = 2902,

	/**
	 Input json string has invalid value of property : link_rate, please check out #struct_wifi_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LINK_RATE_IN_STRUCT_WIFI_TYPE = 2903,

	/**
	 Input json string has invalid type in : struct_wifi_type, please check out #struct_wifi_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_WIFI_TYPE = 2904,

	/**
	 Input json string has invalid type in : struct_case_zwave, please check out #struct_case_zwave for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_ZWAVE = 2905,

	/**
	 Input json string has invalid type in : struct_case_wifi, please check out #struct_case_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_WIFI = 2906,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_connecting_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_CONNECTING_TYPE = 2907,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_connecting_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_CONNECTING_TYPE = 2908,

	/**
	 Input json string has invalid type in : struct_connecting_type, please check out #struct_connecting_type for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CONNECTING_TYPE = 2909,

	/**
	 Input json string has invalid type of property : id, please check out #struct_device_status_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ID_IN_STRUCT_DEVICE_STATUS_ELEMENT = 2910,

	/**
	 Input json string has invalid value of property : id, please check out #struct_device_status_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ID_IN_STRUCT_DEVICE_STATUS_ELEMENT = 2911,

	/**
	 key_passphrase did not meet the restriction: ["[a-zA-Z0-9 `~!@#$%\\^&*()_\\-+={}\\|\\\\;:'<,>\\./?\"\\[\\]]*"], please check out #_struct_case_key_passphrase for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_KEY_PASSPHRASE_KEY_PASSPHRASE_PATTERN_INCORRECT = 2912,

	/**
	 key_passphrase did not meet the restriction: 8..63, please check out #_struct_case_key_passphrase for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_KEY_PASSPHRASE_KEY_PASSPHRASE_LENGTH_INCORRECT = 2913,

	/**
	 Input json string has invalid type of property : key_passphrase, please check out #struct_case_key_passphrase for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_KEY_PASSPHRASE_IN_STRUCT_CASE_KEY_PASSPHRASE = 2914,

	/**
	 Input json string has invalid value of property : key_passphrase, please check out #struct_case_key_passphrase for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_KEY_PASSPHRASE_IN_STRUCT_CASE_KEY_PASSPHRASE = 2915,

	/**
	 presharedkey did not meet the restriction: ["[0-9a-fA-F]{64}"], please check out #_struct_case_presharedkey for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_PRESHAREDKEY_PRESHAREDKEY_PATTERN_INCORRECT = 2916,

	/**
	 presharedkey did not meet the restriction: 64, please check out #_struct_case_presharedkey for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_PRESHAREDKEY_PRESHAREDKEY_LENGTH_INCORRECT = 2917,

	/**
	 Input json string has invalid type of property : presharedkey, please check out #struct_case_presharedkey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PRESHAREDKEY_IN_STRUCT_CASE_PRESHAREDKEY = 2918,

	/**
	 Input json string has invalid value of property : presharedkey, please check out #struct_case_presharedkey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PRESHAREDKEY_IN_STRUCT_CASE_PRESHAREDKEY = 2919,

	/**
	 Input json string has invalid type in : struct_case_key_passphrase, please check out #struct_case_key_passphrase for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_KEY_PASSPHRASE = 2920,

	/**
	 Input json string has invalid type in : struct_case_presharedkey, please check out #struct_case_presharedkey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_PRESHAREDKEY = 2921,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_psk for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_PSK = 2922,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_psk for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_PSK = 2923,

	/**
	 Input json string has invalid type in : struct_psk, please check out #struct_psk for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PSK = 2924,

	/**
	 ssid_5g did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_WIFI_SSID_5G_PATTERN_INCORRECT = 2925,

	/**
	 ssid_5g did not meet the restriction: 1..32, please check out #_struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_WIFI_SSID_5G_LENGTH_INCORRECT = 2926,

	/**
	 Input json string has invalid type of property : ssid_5g, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SSID_5G_IN_STRUCT_INPUT_SET_WIFI = 2927,

	/**
	 Input json string has invalid value of property : ssid_5g, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SSID_5G_IN_STRUCT_INPUT_SET_WIFI = 2928,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_INPUT_SET_WIFI = 2929,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_INPUT_SET_WIFI = 2930,

	/**
	 Input json string has invalid type of property : network, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NETWORK_IN_STRUCT_INPUT_SET_WIFI = 2931,

	/**
	 Input json string has invalid value of property : network, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NETWORK_IN_STRUCT_INPUT_SET_WIFI = 2932,

	/**
	 ssid did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_WIFI_SSID_PATTERN_INCORRECT = 2933,

	/**
	 ssid did not meet the restriction: 1..32, please check out #_struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_WIFI_SSID_LENGTH_INCORRECT = 2934,

	/**
	 Input json string has invalid type of property : ssid, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SSID_IN_STRUCT_INPUT_SET_WIFI = 2935,

	/**
	 Input json string has invalid value of property : ssid, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SSID_IN_STRUCT_INPUT_SET_WIFI = 2936,

	/**
	 Input json string has invalid type in : struct_input_set_wifi, please check out #struct_input_set_wifi for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SET_WIFI = 2937,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_is_default_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_IS_DEFAULT_PASSWORD = 2938,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_is_default_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_IS_DEFAULT_PASSWORD = 2939,

	/**
	 Input json string has invalid type in : struct_output_is_default_password, please check out #struct_output_is_default_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_IS_DEFAULT_PASSWORD = 2940,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_access_internet_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_ACCESS_INTERNET_STATUS = 2941,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_access_internet_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_ACCESS_INTERNET_STATUS = 2942,

	/**
	 Input json string has invalid type in : struct_output_access_internet_status, please check out #struct_output_access_internet_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_ACCESS_INTERNET_STATUS = 2943,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_is_wan_port_connected for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_IS_WAN_PORT_CONNECTED = 2944,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_is_wan_port_connected for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_IS_WAN_PORT_CONNECTED = 2945,

	/**
	 Input json string has invalid type in : struct_output_is_wan_port_connected, please check out #struct_output_is_wan_port_connected for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_IS_WAN_PORT_CONNECTED = 2946,

	/**
	 Input json string has invalid type of property : network, please check out #struct_input_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NETWORK_IN_STRUCT_INPUT_GET_WIFI_CONFIGURATION = 2947,

	/**
	 Input json string has invalid value of property : network, please check out #struct_input_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NETWORK_IN_STRUCT_INPUT_GET_WIFI_CONFIGURATION = 2948,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2949,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2950,

	/**
	 ssid did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION_SSID_PATTERN_INCORRECT = 2951,

	/**
	 ssid did not meet the restriction: 1..32, please check out #_struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION_SSID_LENGTH_INCORRECT = 2952,

	/**
	 Input json string has invalid type of property : ssid, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SSID_IN_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2953,

	/**
	 Input json string has invalid value of property : ssid, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SSID_IN_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2954,

	/**
	 ssid_5g did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION_SSID_5G_PATTERN_INCORRECT = 2955,

	/**
	 ssid_5g did not meet the restriction: 1..32, please check out #_struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION_SSID_5G_LENGTH_INCORRECT = 2956,

	/**
	 Input json string has invalid type of property : ssid_5g, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SSID_5G_IN_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2957,

	/**
	 Input json string has invalid value of property : ssid_5g, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SSID_5G_IN_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2958,

	/**
	 Input json string has invalid type in : struct_input_get_wifi_configuration, please check out #struct_input_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_GET_WIFI_CONFIGURATION = 2959,

	/**
	 Input json string has invalid type in : struct_output_get_wifi_configuration, please check out #struct_output_get_wifi_configuration for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_WIFI_CONFIGURATION = 2960,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_is_wifi_button_on for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_IS_WIFI_BUTTON_ON = 2961,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_is_wifi_button_on for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_IS_WIFI_BUTTON_ON = 2962,

	/**
	 Input json string has invalid type in : struct_output_is_wifi_button_on, please check out #struct_output_is_wifi_button_on for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_IS_WIFI_BUTTON_ON = 2963,

	/**
	 Input json string has invalid type of property : proto, please check out #struct_output_detect_wan_proto for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTO_IN_STRUCT_OUTPUT_DETECT_WAN_PROTO = 2964,

	/**
	 Input json string has invalid value of property : proto, please check out #struct_output_detect_wan_proto for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTO_IN_STRUCT_OUTPUT_DETECT_WAN_PROTO = 2965,

	/**
	 Input json string has invalid type in : struct_output_detect_wan_proto, please check out #struct_output_detect_wan_proto for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_DETECT_WAN_PROTO = 2966,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_ever_easy123 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_EVER_EASY123 = 2967,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_ever_easy123 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_EVER_EASY123 = 2968,

	/**
	 Input json string has invalid type in : struct_output_ever_easy123, please check out #struct_output_ever_easy123 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_EVER_EASY123 = 2969,

	/**
	 Input json string has invalid type of property : action, please check out #struct_input_server_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTION_IN_STRUCT_INPUT_SERVER_CONTROL = 2970,

	/**
	 Input json string has invalid value of property : action, please check out #struct_input_server_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTION_IN_STRUCT_INPUT_SERVER_CONTROL = 2971,

	/**
	 Input json string has invalid type of property : service, please check out #struct_input_server_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_IN_STRUCT_INPUT_SERVER_CONTROL = 2972,

	/**
	 Input json string has invalid value of property : service, please check out #struct_input_server_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_IN_STRUCT_INPUT_SERVER_CONTROL = 2973,

	/**
	 Input json string has invalid type in : struct_input_server_control, please check out #struct_input_server_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SERVER_CONTROL = 2974,

	/**
	 Input json string has invalid type of property : device_mac, please check out #struct_input_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEVICE_MAC_IN_STRUCT_INPUT_GET_HISTORY = 2975,

	/**
	 Input json string has invalid value of property : device_mac, please check out #struct_input_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEVICE_MAC_IN_STRUCT_INPUT_GET_HISTORY = 2976,

	/**
	 Input json string has invalid type of property : number, please check out #struct_input_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NUMBER_IN_STRUCT_INPUT_GET_HISTORY = 2977,

	/**
	 Input json string has invalid value of property : number, please check out #struct_input_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NUMBER_IN_STRUCT_INPUT_GET_HISTORY = 2978,

	/**
	 Input json string has invalid type of property : target, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TARGET_IN_STRUCT_HISTORY_ELEMENT = 2979,

	/**
	 Input json string has invalid value of property : target, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TARGET_IN_STRUCT_HISTORY_ELEMENT = 2980,

	/**
	 Input json string has invalid type of property : timestamp, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMESTAMP_IN_STRUCT_HISTORY_ELEMENT = 2981,

	/**
	 Input json string has invalid value of property : timestamp, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMESTAMP_IN_STRUCT_HISTORY_ELEMENT = 2982,

	/**
	 upload did not meet the restriction: 0..max, please check out #_struct_history_element for more information.
	 */
	ZapiErrorCode_STRUCT_HISTORY_ELEMENT_UPLOAD_RANGE_INCORRECT = 2983,

	/**
	 Input json string has invalid type of property : upload, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UPLOAD_IN_STRUCT_HISTORY_ELEMENT = 2984,

	/**
	 Input json string has invalid value of property : upload, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UPLOAD_IN_STRUCT_HISTORY_ELEMENT = 2985,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_HISTORY_ELEMENT = 2986,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_HISTORY_ELEMENT = 2987,

	/**
	 download did not meet the restriction: 0..max, please check out #_struct_history_element for more information.
	 */
	ZapiErrorCode_STRUCT_HISTORY_ELEMENT_DOWNLOAD_RANGE_INCORRECT = 2988,

	/**
	 Input json string has invalid type of property : download, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DOWNLOAD_IN_STRUCT_HISTORY_ELEMENT = 2989,

	/**
	 Input json string has invalid value of property : download, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DOWNLOAD_IN_STRUCT_HISTORY_ELEMENT = 2990,

	/**
	 Input json string has invalid type of property : test_id, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TEST_ID_IN_STRUCT_HISTORY_ELEMENT = 2991,

	/**
	 Input json string has invalid value of property : test_id, please check out #struct_history_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TEST_ID_IN_STRUCT_HISTORY_ELEMENT = 2992,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_GET_HISTORY = 2993,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_GET_HISTORY = 2994,

	/**
	 Input json string has invalid type in : struct_input_get_history, please check out #struct_input_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_GET_HISTORY = 2995,

	/**
	 Input json string has invalid type in : struct_output_get_history, please check out #struct_output_get_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_HISTORY = 2996,

	/**
	 Input json string has invalid type of property : device_mac, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEVICE_MAC_IN_STRUCT_INPUT_SPEED_TEST = 2997,

	/**
	 Input json string has invalid value of property : device_mac, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEVICE_MAC_IN_STRUCT_INPUT_SPEED_TEST = 2998,

	/**
	 Input json string has invalid type of property : test_id, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TEST_ID_IN_STRUCT_INPUT_SPEED_TEST = 2999,

	/**
	 Input json string has invalid value of property : test_id, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TEST_ID_IN_STRUCT_INPUT_SPEED_TEST = 3000,

	/**
	 Input json string has invalid type of property : target, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TARGET_IN_STRUCT_INPUT_SPEED_TEST = 3001,

	/**
	 Input json string has invalid value of property : target, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TARGET_IN_STRUCT_INPUT_SPEED_TEST = 3002,

	/**
	 Input json string has invalid type of property : response, please check out #struct_output_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RESPONSE_IN_STRUCT_OUTPUT_SPEED_TEST = 3003,

	/**
	 Input json string has invalid value of property : response, please check out #struct_output_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RESPONSE_IN_STRUCT_OUTPUT_SPEED_TEST = 3004,

	/**
	 Input json string has invalid type in : struct_input_speed_test, please check out #struct_input_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SPEED_TEST = 3005,

	/**
	 Input json string has invalid type in : struct_output_speed_test, please check out #struct_output_speed_test for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_SPEED_TEST = 3006,

	/**
	 download did not meet the restriction: 0..max, please check out #_struct_output_test_result for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_TEST_RESULT_DOWNLOAD_RANGE_INCORRECT = 3007,

	/**
	 Input json string has invalid type of property : download, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DOWNLOAD_IN_STRUCT_OUTPUT_TEST_RESULT = 3008,

	/**
	 Input json string has invalid value of property : download, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DOWNLOAD_IN_STRUCT_OUTPUT_TEST_RESULT = 3009,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_TEST_RESULT = 3010,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_TEST_RESULT = 3011,

	/**
	 Input json string has invalid type of property : test_id, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TEST_ID_IN_STRUCT_OUTPUT_TEST_RESULT = 3012,

	/**
	 Input json string has invalid value of property : test_id, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TEST_ID_IN_STRUCT_OUTPUT_TEST_RESULT = 3013,

	/**
	 upload did not meet the restriction: 0..max, please check out #_struct_output_test_result for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_TEST_RESULT_UPLOAD_RANGE_INCORRECT = 3014,

	/**
	 Input json string has invalid type of property : upload, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UPLOAD_IN_STRUCT_OUTPUT_TEST_RESULT = 3015,

	/**
	 Input json string has invalid value of property : upload, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UPLOAD_IN_STRUCT_OUTPUT_TEST_RESULT = 3016,

	/**
	 Input json string has invalid type in : struct_output_test_result, please check out #struct_output_test_result for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_TEST_RESULT = 3017,

	/**
	 Input json string has invalid type of property : test_id, please check out #struct_input_clean_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TEST_ID_IN_STRUCT_INPUT_CLEAN_HISTORY = 3018,

	/**
	 Input json string has invalid value of property : test_id, please check out #struct_input_clean_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TEST_ID_IN_STRUCT_INPUT_CLEAN_HISTORY = 3019,

	/**
	 Input json string has invalid type in : struct_input_clean_history, please check out #struct_input_clean_history for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_CLEAN_HISTORY = 3020,

	/**
	 Input json string has invalid type of property : union_of_yang_date_and_time, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_YANG_DATE_AND_TIME_IN_STRUCT_LEASE_TIME_REMAINING = 3021,

	/**
	 Input json string has invalid value of property : union_of_yang_date_and_time, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_YANG_DATE_AND_TIME_IN_STRUCT_LEASE_TIME_REMAINING = 3022,

	/**
	 Input json string has invalid type of property : union_of_int32, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INT32_IN_STRUCT_LEASE_TIME_REMAINING = 3023,

	/**
	 Input json string has invalid value of property : union_of_int32, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INT32_IN_STRUCT_LEASE_TIME_REMAINING = 3024,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_LEASE_TIME_REMAINING = 3025,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_LEASE_TIME_REMAINING = 3026,

	/**
	 Input json string has invalid type of property : ip_address, please check out #struct_dhcp_server_client_ipv4_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ADDRESS_IN_STRUCT_DHCP_SERVER_CLIENT_IPV4_ADDRESS_ELEMENT = 3027,

	/**
	 Input json string has invalid value of property : ip_address, please check out #struct_dhcp_server_client_ipv4_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ADDRESS_IN_STRUCT_DHCP_SERVER_CLIENT_IPV4_ADDRESS_ELEMENT = 3028,

	/**
	 Input json string has invalid type in : struct_lease_time_remaining, please check out #struct_lease_time_remaining for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_LEASE_TIME_REMAINING = 3029,

	/**
	 Input json string has invalid type of property : tag, please check out #struct_dhcp_server_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TAG_IN_STRUCT_DHCP_SERVER_CLIENT_OPTION_ELEMENT = 3030,

	/**
	 Input json string has invalid value of property : tag, please check out #struct_dhcp_server_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TAG_IN_STRUCT_DHCP_SERVER_CLIENT_OPTION_ELEMENT = 3031,

	/**
	 Input json string has invalid type of property : option, please check out #struct_dhcp_server_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPTION_IN_STRUCT_DHCP_SERVER_CLIENT_OPTION_ELEMENT = 3032,

	/**
	 Input json string has invalid value of property : option, please check out #struct_dhcp_server_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPTION_IN_STRUCT_DHCP_SERVER_CLIENT_OPTION_ELEMENT = 3033,

	/**
	 Input json string has invalid type of property : value, please check out #struct_dhcp_server_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALUE_IN_STRUCT_DHCP_SERVER_CLIENT_OPTION_ELEMENT = 3034,

	/**
	 Input json string has invalid value of property : value, please check out #struct_dhcp_server_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALUE_IN_STRUCT_DHCP_SERVER_CLIENT_OPTION_ELEMENT = 3035,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_dhcp_server_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_DHCP_SERVER_CLIENT_ELEMENT = 3036,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_dhcp_server_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_DHCP_SERVER_CLIENT_ELEMENT = 3037,

	/**
	 Input json string has invalid type of property : chaddr, please check out #struct_dhcp_server_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHADDR_IN_STRUCT_DHCP_SERVER_CLIENT_ELEMENT = 3038,

	/**
	 Input json string has invalid value of property : chaddr, please check out #struct_dhcp_server_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHADDR_IN_STRUCT_DHCP_SERVER_CLIENT_ELEMENT = 3039,

	/**
	 Input json string has invalid type of property : active, please check out #struct_dhcp_server_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTIVE_IN_STRUCT_DHCP_SERVER_CLIENT_ELEMENT = 3040,

	/**
	 Input json string has invalid value of property : active, please check out #struct_dhcp_server_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTIVE_IN_STRUCT_DHCP_SERVER_CLIENT_ELEMENT = 3041,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3042,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3043,

	/**
	 Input json string has invalid type of property : option, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPTION_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3044,

	/**
	 Input json string has invalid value of property : option, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPTION_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3045,

	/**
	 Input json string has invalid type of property : value, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALUE_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3046,

	/**
	 Input json string has invalid value of property : value, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALUE_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3047,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3048,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3049,

	/**
	 Input json string has invalid type of property : tag, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TAG_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3050,

	/**
	 Input json string has invalid value of property : tag, please check out #struct_dhcp_server_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TAG_IN_STRUCT_DHCP_SERVER_OPTION_ELEMENT = 3051,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3052,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3053,

	/**
	 Input json string has invalid type of property : chaddr, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHADDR_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3054,

	/**
	 Input json string has invalid value of property : chaddr, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHADDR_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3055,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3056,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3057,

	/**
	 Input json string has invalid type of property : yiaddr, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_YIADDR_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3058,

	/**
	 Input json string has invalid value of property : yiaddr, please check out #struct_dhcp_server_static_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_YIADDR_IN_STRUCT_DHCP_SERVER_STATIC_ADDRESS_ELEMENT = 3059,

	/**
	 Input json string has invalid type of property : lease_time, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LEASE_TIME_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3060,

	/**
	 Input json string has invalid value of property : lease_time, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LEASE_TIME_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3061,

	/**
	 Input json string has invalid type of property : domain_name, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DOMAIN_NAME_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3062,

	/**
	 Input json string has invalid value of property : domain_name, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DOMAIN_NAME_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3063,

	/**
	 Input json string has invalid type of property : chaddr_mask, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHADDR_MASK_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3064,

	/**
	 Input json string has invalid value of property : chaddr_mask, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHADDR_MASK_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3065,

	/**
	 Input json string has invalid type of property : client_id_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLIENT_ID_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3066,

	/**
	 Input json string has invalid value of property : client_id_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLIENT_ID_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3067,

	/**
	 Input json string has invalid type of property : dns_servers, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVERS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3068,

	/**
	 Input json string has invalid value of property : dns_servers, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVERS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3069,

	/**
	 Input json string has invalid type of property : vendor_class_id, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VENDOR_CLASS_ID_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3070,

	/**
	 Input json string has invalid value of property : vendor_class_id, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VENDOR_CLASS_ID_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3071,

	/**
	 Input json string has invalid type of property : status, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3072,

	/**
	 Input json string has invalid value of property : status, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3073,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3074,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3075,

	/**
	 Input json string has invalid type of property : max_address, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAX_ADDRESS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3076,

	/**
	 Input json string has invalid value of property : max_address, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAX_ADDRESS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3077,

	/**
	 Input json string has invalid type of property : ip_routers, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ROUTERS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3078,

	/**
	 Input json string has invalid value of property : ip_routers, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ROUTERS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3079,

	/**
	 Input json string has invalid type of property : vendor_class_id_mode, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VENDOR_CLASS_ID_MODE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3080,

	/**
	 Input json string has invalid value of property : vendor_class_id_mode, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VENDOR_CLASS_ID_MODE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3081,

	/**
	 Input json string has invalid type of property : min_address, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MIN_ADDRESS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3082,

	/**
	 Input json string has invalid value of property : min_address, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MIN_ADDRESS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3083,

	/**
	 Input json string has invalid type of property : chaddr, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHADDR_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3084,

	/**
	 Input json string has invalid value of property : chaddr, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHADDR_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3085,

	/**
	 Input json string has invalid type of property : vendor_class_id_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VENDOR_CLASS_ID_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3086,

	/**
	 Input json string has invalid value of property : vendor_class_id_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VENDOR_CLASS_ID_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3087,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3088,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3089,

	/**
	 Input json string has invalid type of property : user_class_id_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USER_CLASS_ID_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3090,

	/**
	 Input json string has invalid value of property : user_class_id_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USER_CLASS_ID_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3091,

	/**
	 Input json string has invalid type of property : client_id, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLIENT_ID_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3092,

	/**
	 Input json string has invalid value of property : client_id, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLIENT_ID_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3093,

	/**
	 Input json string has invalid type of property : chaddr_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHADDR_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3094,

	/**
	 Input json string has invalid value of property : chaddr_exclude, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHADDR_EXCLUDE_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3095,

	/**
	 Input json string has invalid type of property : subnet_mask, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUBNET_MASK_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3096,

	/**
	 Input json string has invalid value of property : subnet_mask, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUBNET_MASK_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3097,

	/**
	 Input json string has invalid type of property : user_class_id, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USER_CLASS_ID_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3098,

	/**
	 Input json string has invalid value of property : user_class_id, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USER_CLASS_ID_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3099,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3100,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3101,

	/**
	 Input json string has invalid type of property : reserved_addresses, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RESERVED_ADDRESSES_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3102,

	/**
	 Input json string has invalid value of property : reserved_addresses, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RESERVED_ADDRESSES_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3103,

	/**
	 Input json string has invalid type of property : order, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ORDER_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3104,

	/**
	 Input json string has invalid value of property : order, please check out #struct_dhcp_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ORDER_IN_STRUCT_DHCP_SERVER_POOL_ELEMENT = 3105,

	/**
	 Input json string has invalid type of property : ipv4_addr, please check out #struct_static_ip_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV4_ADDR_IN_STRUCT_STATIC_IP_LIST_ELEMENT = 3106,

	/**
	 Input json string has invalid value of property : ipv4_addr, please check out #struct_static_ip_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV4_ADDR_IN_STRUCT_STATIC_IP_LIST_ELEMENT = 3107,

	/**
	 Input json string has invalid type of property : mac_addr, please check out #struct_static_ip_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDR_IN_STRUCT_STATIC_IP_LIST_ELEMENT = 3108,

	/**
	 Input json string has invalid value of property : mac_addr, please check out #struct_static_ip_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDR_IN_STRUCT_STATIC_IP_LIST_ELEMENT = 3109,

	/**
	 Input json string has invalid type of property : is_static_ip, please check out #struct_static_ip_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IS_STATIC_IP_IN_STRUCT_STATIC_IP_LIST_ELEMENT = 3110,

	/**
	 Input json string has invalid value of property : is_static_ip, please check out #struct_static_ip_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IS_STATIC_IP_IN_STRUCT_STATIC_IP_LIST_ELEMENT = 3111,

	/**
	 Input json string has invalid type in : struct_input_add_static_ip, please check out #struct_input_add_static_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_ADD_STATIC_IP = 3112,

	/**
	 Input json string has invalid type of property : state, please check out #struct_output_ble_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATE_IN_STRUCT_OUTPUT_BLE_STATE = 3113,

	/**
	 Input json string has invalid value of property : state, please check out #struct_output_ble_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATE_IN_STRUCT_OUTPUT_BLE_STATE = 3114,

	/**
	 Input json string has invalid type in : struct_output_ble_state, please check out #struct_output_ble_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_BLE_STATE = 3115,

	/**
	 Input json string has invalid type of property : action, please check out #struct_input_action_for_ble for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTION_IN_STRUCT_INPUT_ACTION_FOR_BLE = 3116,

	/**
	 Input json string has invalid value of property : action, please check out #struct_input_action_for_ble for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTION_IN_STRUCT_INPUT_ACTION_FOR_BLE = 3117,

	/**
	 Input json string has invalid type in : struct_input_action_for_ble, please check out #struct_input_action_for_ble for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_ACTION_FOR_BLE = 3118,

	/**
	 Input json string has invalid type of property : row_3_col_1, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_3_COL_1_IN_STRUCT_GRID = 3119,

	/**
	 Input json string has invalid value of property : row_3_col_1, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_3_COL_1_IN_STRUCT_GRID = 3120,

	/**
	 Input json string has invalid type of property : row_3_col_3, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_3_COL_3_IN_STRUCT_GRID = 3121,

	/**
	 Input json string has invalid value of property : row_3_col_3, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_3_COL_3_IN_STRUCT_GRID = 3122,

	/**
	 Input json string has invalid type of property : row_3_col_2, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_3_COL_2_IN_STRUCT_GRID = 3123,

	/**
	 Input json string has invalid value of property : row_3_col_2, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_3_COL_2_IN_STRUCT_GRID = 3124,

	/**
	 Input json string has invalid type of property : row_1_col_3, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_1_COL_3_IN_STRUCT_GRID = 3125,

	/**
	 Input json string has invalid value of property : row_1_col_3, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_1_COL_3_IN_STRUCT_GRID = 3126,

	/**
	 Input json string has invalid type of property : row_1_col_2, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_1_COL_2_IN_STRUCT_GRID = 3127,

	/**
	 Input json string has invalid value of property : row_1_col_2, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_1_COL_2_IN_STRUCT_GRID = 3128,

	/**
	 Input json string has invalid type of property : row_1_col_1, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_1_COL_1_IN_STRUCT_GRID = 3129,

	/**
	 Input json string has invalid value of property : row_1_col_1, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_1_COL_1_IN_STRUCT_GRID = 3130,

	/**
	 Input json string has invalid type of property : row_2_col_1, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_2_COL_1_IN_STRUCT_GRID = 3131,

	/**
	 Input json string has invalid value of property : row_2_col_1, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_2_COL_1_IN_STRUCT_GRID = 3132,

	/**
	 Input json string has invalid type of property : row_2_col_2, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_2_COL_2_IN_STRUCT_GRID = 3133,

	/**
	 Input json string has invalid value of property : row_2_col_2, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_2_COL_2_IN_STRUCT_GRID = 3134,

	/**
	 Input json string has invalid type of property : row_2_col_3, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROW_2_COL_3_IN_STRUCT_GRID = 3135,

	/**
	 Input json string has invalid value of property : row_2_col_3, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROW_2_COL_3_IN_STRUCT_GRID = 3136,

	/**
	 Input json string has invalid type of property : number_of_player_wins, please check out #struct_score_board for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NUMBER_OF_PLAYER_WINS_IN_STRUCT_SCORE_BOARD = 3137,

	/**
	 Input json string has invalid value of property : number_of_player_wins, please check out #struct_score_board for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NUMBER_OF_PLAYER_WINS_IN_STRUCT_SCORE_BOARD = 3138,

	/**
	 Input json string has invalid type of property : number_of_boss_wins, please check out #struct_score_board for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NUMBER_OF_BOSS_WINS_IN_STRUCT_SCORE_BOARD = 3139,

	/**
	 Input json string has invalid value of property : number_of_boss_wins, please check out #struct_score_board for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NUMBER_OF_BOSS_WINS_IN_STRUCT_SCORE_BOARD = 3140,

	/**
	 player_name did not meet the restriction: 3..20, please check out #_struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_STRUCT_TIC_TAC_TOE_PLAYER_NAME_LENGTH_INCORRECT = 3141,

	/**
	 Input json string has invalid type of property : player_name, please check out #struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PLAYER_NAME_IN_STRUCT_TIC_TAC_TOE = 3142,

	/**
	 Input json string has invalid value of property : player_name, please check out #struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PLAYER_NAME_IN_STRUCT_TIC_TAC_TOE = 3143,

	/**
	 Input json string has invalid type of property : game_status, please check out #struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GAME_STATUS_IN_STRUCT_TIC_TAC_TOE = 3144,

	/**
	 Input json string has invalid value of property : game_status, please check out #struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GAME_STATUS_IN_STRUCT_TIC_TAC_TOE = 3145,

	/**
	 Input json string has invalid type in : struct_grid, please check out #struct_grid for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_GRID = 3146,

	/**
	 Input json string has invalid type in : struct_score_board, please check out #struct_score_board for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_SCORE_BOARD = 3147,

	/**
	 Input json string has invalid type of property : boss_name, please check out #struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BOSS_NAME_IN_STRUCT_TIC_TAC_TOE = 3148,

	/**
	 Input json string has invalid value of property : boss_name, please check out #struct_tic_tac_toe for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BOSS_NAME_IN_STRUCT_TIC_TAC_TOE = 3149,

	/**
	 Input json string has invalid type of property : config, please check out #struct_input_apply_wifi_interface_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CONFIG_IN_STRUCT_INPUT_APPLY_WIFI_INTERFACE_SETTING = 3150,

	/**
	 Input json string has invalid value of property : config, please check out #struct_input_apply_wifi_interface_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CONFIG_IN_STRUCT_INPUT_APPLY_WIFI_INTERFACE_SETTING = 3151,

	/**
	 Input json string has invalid type in : struct_input_apply_wifi_interface_setting, please check out #struct_input_apply_wifi_interface_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_APPLY_WIFI_INTERFACE_SETTING = 3152,

	/**
	 Input json string has invalid type of property : release_date, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RELEASE_DATE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3153,

	/**
	 Input json string has invalid value of property : release_date, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RELEASE_DATE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3154,

	/**
	 Input json string has invalid type of property : firmware_name, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIRMWARE_NAME_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3155,

	/**
	 Input json string has invalid value of property : firmware_name, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIRMWARE_NAME_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3156,

	/**
	 Input json string has invalid type of property : release_note, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RELEASE_NOTE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3157,

	/**
	 Input json string has invalid value of property : release_note, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RELEASE_NOTE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3158,

	/**
	 Input json string has invalid type of property : note, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NOTE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3159,

	/**
	 Input json string has invalid value of property : note, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NOTE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3160,

	/**
	 Input json string has invalid type of property : version, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VERSION_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3161,

	/**
	 Input json string has invalid value of property : version, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VERSION_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3162,

	/**
	 Input json string has invalid type of property : result, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RESULT_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3163,

	/**
	 Input json string has invalid value of property : result, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RESULT_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3164,

	/**
	 Input json string has invalid type of property : firmware_size, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIRMWARE_SIZE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3165,

	/**
	 Input json string has invalid value of property : firmware_size, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIRMWARE_SIZE_IN_STRUCT_OUTPUT_ON_LINE_CHECK = 3166,

	/**
	 Input json string has invalid type in : struct_output_on_line_check, please check out #struct_output_on_line_check for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_ON_LINE_CHECK = 3167,

	/**
	 Input json string has invalid type of property : firmware, please check out #struct_output_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIRMWARE_IN_STRUCT_OUTPUT_UPLOAD = 3168,

	/**
	 Input json string has invalid value of property : firmware, please check out #struct_output_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIRMWARE_IN_STRUCT_OUTPUT_UPLOAD = 3169,

	/**
	 Input json string has invalid type in : struct_output_upload, please check out #struct_output_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_UPLOAD = 3170,

	/**
	 download_percent did not meet the restriction: 0..100, please check out #_struct_output_on_line_download_status for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_ON_LINE_DOWNLOAD_STATUS_DOWNLOAD_PERCENT_RANGE_INCORRECT = 3171,

	/**
	 Input json string has invalid type of property : download_percent, please check out #struct_output_on_line_download_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DOWNLOAD_PERCENT_IN_STRUCT_OUTPUT_ON_LINE_DOWNLOAD_STATUS = 3172,

	/**
	 Input json string has invalid value of property : download_percent, please check out #struct_output_on_line_download_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DOWNLOAD_PERCENT_IN_STRUCT_OUTPUT_ON_LINE_DOWNLOAD_STATUS = 3173,

	/**
	 Input json string has invalid type of property : result, please check out #struct_output_on_line_download_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RESULT_IN_STRUCT_OUTPUT_ON_LINE_DOWNLOAD_STATUS = 3174,

	/**
	 Input json string has invalid value of property : result, please check out #struct_output_on_line_download_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RESULT_IN_STRUCT_OUTPUT_ON_LINE_DOWNLOAD_STATUS = 3175,

	/**
	 Input json string has invalid type in : struct_output_on_line_download_status, please check out #struct_output_on_line_download_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_ON_LINE_DOWNLOAD_STATUS = 3176,

	/**
	 Input json string has invalid type of property : status, please check out #struct_output_upgrade_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_OUTPUT_UPGRADE_STATUS = 3177,

	/**
	 Input json string has invalid value of property : status, please check out #struct_output_upgrade_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_OUTPUT_UPGRADE_STATUS = 3178,

	/**
	 Input json string has invalid type in : struct_output_upgrade_status, please check out #struct_output_upgrade_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_UPGRADE_STATUS = 3179,

	/**
	 Input json string has invalid type of property : if_ethernet_duplex, please check out #struct_if_ethernet_ethernet for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_ETHERNET_DUPLEX_IN_STRUCT_IF_ETHERNET_ETHERNET = 3180,

	/**
	 Input json string has invalid value of property : if_ethernet_duplex, please check out #struct_if_ethernet_ethernet for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_ETHERNET_DUPLEX_IN_STRUCT_IF_ETHERNET_ETHERNET = 3181,

	/**
	 Input json string has invalid type of property : if_ssid_retransmissions, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_RETRANSMISSIONS_IN_STRUCT_IF_SSID_END_POINT_STATS = 3182,

	/**
	 Input json string has invalid value of property : if_ssid_retransmissions, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_RETRANSMISSIONS_IN_STRUCT_IF_SSID_END_POINT_STATS = 3183,

	/**
	 Input json string has invalid type of property : if_ssid_signal_strength, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SIGNAL_STRENGTH_IN_STRUCT_IF_SSID_END_POINT_STATS = 3184,

	/**
	 Input json string has invalid value of property : if_ssid_signal_strength, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SIGNAL_STRENGTH_IN_STRUCT_IF_SSID_END_POINT_STATS = 3185,

	/**
	 Input json string has invalid type of property : if_ssid_last_data_uplink_rate, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_LAST_DATA_UPLINK_RATE_IN_STRUCT_IF_SSID_END_POINT_STATS = 3186,

	/**
	 Input json string has invalid value of property : if_ssid_last_data_uplink_rate, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_LAST_DATA_UPLINK_RATE_IN_STRUCT_IF_SSID_END_POINT_STATS = 3187,

	/**
	 Input json string has invalid type of property : if_ssid_last_data_downlink_rate, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_LAST_DATA_DOWNLINK_RATE_IN_STRUCT_IF_SSID_END_POINT_STATS = 3188,

	/**
	 Input json string has invalid value of property : if_ssid_last_data_downlink_rate, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_LAST_DATA_DOWNLINK_RATE_IN_STRUCT_IF_SSID_END_POINT_STATS = 3189,

	/**
	 Input json string has invalid type of property : if_ssid_signal_strength, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SIGNAL_STRENGTH_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3190,

	/**
	 Input json string has invalid value of property : if_ssid_signal_strength, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SIGNAL_STRENGTH_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3191,

	/**
	 Input json string has invalid type of property : if_ssid_authentication_state, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_AUTHENTICATION_STATE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3192,

	/**
	 Input json string has invalid value of property : if_ssid_authentication_state, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_AUTHENTICATION_STATE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3193,

	/**
	 Input json string has invalid type of property : if_ssid_retransmissions, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_RETRANSMISSIONS_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3194,

	/**
	 Input json string has invalid value of property : if_ssid_retransmissions, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_RETRANSMISSIONS_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3195,

	/**
	 Input json string has invalid type of property : if_ssid_last_data_uplink_rate, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_LAST_DATA_UPLINK_RATE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3196,

	/**
	 Input json string has invalid value of property : if_ssid_last_data_uplink_rate, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_LAST_DATA_UPLINK_RATE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3197,

	/**
	 Input json string has invalid type of property : if_ssid_last_data_downlink_rate, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_LAST_DATA_DOWNLINK_RATE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3198,

	/**
	 Input json string has invalid value of property : if_ssid_last_data_downlink_rate, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_LAST_DATA_DOWNLINK_RATE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3199,

	/**
	 Input json string has invalid type of property : if_ssid_macaddress, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_MACADDRESS_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3200,

	/**
	 Input json string has invalid value of property : if_ssid_macaddress, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_MACADDRESS_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3201,

	/**
	 Input json string has invalid type of property : if_ssid_active, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_ACTIVE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3202,

	/**
	 Input json string has invalid value of property : if_ssid_active, please check out #struct_if_ssid_client_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_ACTIVE_IN_STRUCT_IF_SSID_CLIENT_LIST_ELEMENT = 3203,

	/**
	 Input json string has invalid type of property : out_octets, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OUT_OCTETS_IN_STRUCT_STATISTICS = 3204,

	/**
	 Input json string has invalid value of property : out_octets, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OUT_OCTETS_IN_STRUCT_STATISTICS = 3205,

	/**
	 Input json string has invalid type of property : discontinuity_time, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DISCONTINUITY_TIME_IN_STRUCT_STATISTICS = 3206,

	/**
	 Input json string has invalid value of property : discontinuity_time, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DISCONTINUITY_TIME_IN_STRUCT_STATISTICS = 3207,

	/**
	 Input json string has invalid type of property : in_multicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_MULTICAST_PKTS_IN_STRUCT_STATISTICS = 3208,

	/**
	 Input json string has invalid value of property : in_multicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_MULTICAST_PKTS_IN_STRUCT_STATISTICS = 3209,

	/**
	 Input json string has invalid type of property : out_unicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OUT_UNICAST_PKTS_IN_STRUCT_STATISTICS = 3210,

	/**
	 Input json string has invalid value of property : out_unicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OUT_UNICAST_PKTS_IN_STRUCT_STATISTICS = 3211,

	/**
	 Input json string has invalid type of property : in_errors, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_ERRORS_IN_STRUCT_STATISTICS = 3212,

	/**
	 Input json string has invalid value of property : in_errors, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_ERRORS_IN_STRUCT_STATISTICS = 3213,

	/**
	 Input json string has invalid type of property : out_errors, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OUT_ERRORS_IN_STRUCT_STATISTICS = 3214,

	/**
	 Input json string has invalid value of property : out_errors, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OUT_ERRORS_IN_STRUCT_STATISTICS = 3215,

	/**
	 Input json string has invalid type of property : out_multicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OUT_MULTICAST_PKTS_IN_STRUCT_STATISTICS = 3216,

	/**
	 Input json string has invalid value of property : out_multicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OUT_MULTICAST_PKTS_IN_STRUCT_STATISTICS = 3217,

	/**
	 Input json string has invalid type of property : in_discards, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_DISCARDS_IN_STRUCT_STATISTICS = 3218,

	/**
	 Input json string has invalid value of property : in_discards, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_DISCARDS_IN_STRUCT_STATISTICS = 3219,

	/**
	 Input json string has invalid type of property : in_unicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_UNICAST_PKTS_IN_STRUCT_STATISTICS = 3220,

	/**
	 Input json string has invalid value of property : in_unicast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_UNICAST_PKTS_IN_STRUCT_STATISTICS = 3221,

	/**
	 Input json string has invalid type of property : out_broadcast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OUT_BROADCAST_PKTS_IN_STRUCT_STATISTICS = 3222,

	/**
	 Input json string has invalid value of property : out_broadcast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OUT_BROADCAST_PKTS_IN_STRUCT_STATISTICS = 3223,

	/**
	 Input json string has invalid type of property : out_discards, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OUT_DISCARDS_IN_STRUCT_STATISTICS = 3224,

	/**
	 Input json string has invalid value of property : out_discards, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OUT_DISCARDS_IN_STRUCT_STATISTICS = 3225,

	/**
	 Input json string has invalid type of property : in_broadcast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_BROADCAST_PKTS_IN_STRUCT_STATISTICS = 3226,

	/**
	 Input json string has invalid value of property : in_broadcast_pkts, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_BROADCAST_PKTS_IN_STRUCT_STATISTICS = 3227,

	/**
	 Input json string has invalid type of property : in_unknown_protos, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_UNKNOWN_PROTOS_IN_STRUCT_STATISTICS = 3228,

	/**
	 Input json string has invalid value of property : in_unknown_protos, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_UNKNOWN_PROTOS_IN_STRUCT_STATISTICS = 3229,

	/**
	 Input json string has invalid type of property : in_octets, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IN_OCTETS_IN_STRUCT_STATISTICS = 3230,

	/**
	 Input json string has invalid value of property : in_octets, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IN_OCTETS_IN_STRUCT_STATISTICS = 3231,

	/**
	 Input json string has invalid type of property : ip_origin, please check out #struct_ip_neighbor_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ORIGIN_IN_STRUCT_IP_NEIGHBOR_ELEMENT = 3232,

	/**
	 Input json string has invalid value of property : ip_origin, please check out #struct_ip_neighbor_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ORIGIN_IN_STRUCT_IP_NEIGHBOR_ELEMENT = 3233,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_neighbor_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT = 3234,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_neighbor_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT = 3235,

	/**
	 Input json string has invalid type of property : ip_link_layer_address, please check out #struct_ip_neighbor_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT = 3236,

	/**
	 Input json string has invalid value of property : ip_link_layer_address, please check out #struct_ip_neighbor_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT = 3237,

	/**
	 ip_prefix_length did not meet the restriction: 0..32, please check out #_struct_case_ip_prefix_length for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_IP_PREFIX_LENGTH_IP_PREFIX_LENGTH_RANGE_INCORRECT = 3238,

	/**
	 Input json string has invalid type of property : ip_prefix_length, please check out #struct_case_ip_prefix_length for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_PREFIX_LENGTH_IN_STRUCT_CASE_IP_PREFIX_LENGTH = 3239,

	/**
	 Input json string has invalid value of property : ip_prefix_length, please check out #struct_case_ip_prefix_length for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_PREFIX_LENGTH_IN_STRUCT_CASE_IP_PREFIX_LENGTH = 3240,

	/**
	 Input json string has invalid type of property : ip_netmask, please check out #struct_case_ip_netmask for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_NETMASK_IN_STRUCT_CASE_IP_NETMASK = 3241,

	/**
	 Input json string has invalid value of property : ip_netmask, please check out #struct_case_ip_netmask for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_NETMASK_IN_STRUCT_CASE_IP_NETMASK = 3242,

	/**
	 Input json string has invalid type in : struct_case_ip_prefix_length, please check out #struct_case_ip_prefix_length for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_IP_PREFIX_LENGTH = 3243,

	/**
	 Input json string has invalid type in : struct_case_ip_netmask, please check out #struct_case_ip_netmask for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_IP_NETMASK = 3244,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_ip_subnet for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_IP_SUBNET = 3245,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_ip_subnet for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_IP_SUBNET = 3246,

	/**
	 Input json string has invalid type of property : ip_origin, please check out #struct_ip_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ORIGIN_IN_STRUCT_IP_ADDRESS_ELEMENT = 3247,

	/**
	 Input json string has invalid value of property : ip_origin, please check out #struct_ip_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ORIGIN_IN_STRUCT_IP_ADDRESS_ELEMENT = 3248,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT = 3249,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT = 3250,

	/**
	 Input json string has invalid type in : struct_ip_subnet, please check out #struct_ip_subnet for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_SUBNET = 3251,

	/**
	 Input json string has invalid type of property : ip_forwarding, please check out #struct_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_FORWARDING_IN_STRUCT_IP_IPV4 = 3252,

	/**
	 Input json string has invalid value of property : ip_forwarding, please check out #struct_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_FORWARDING_IN_STRUCT_IP_IPV4 = 3253,

	/**
	 ip_mtu did not meet the restriction: 68..max, please check out #_struct_ip_ipv4 for more information.
	 */
	ZapiErrorCode_STRUCT_IP_IPV4_IP_MTU_RANGE_INCORRECT = 3254,

	/**
	 Input json string has invalid type of property : ip_mtu, please check out #struct_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_MTU_IN_STRUCT_IP_IPV4 = 3255,

	/**
	 Input json string has invalid value of property : ip_mtu, please check out #struct_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_MTU_IN_STRUCT_IP_IPV4 = 3256,

	/**
	 Input json string has invalid type of property : ip_link_layer_address, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3257,

	/**
	 Input json string has invalid value of property : ip_link_layer_address, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3258,

	/**
	 Input json string has invalid type of property : ip_origin, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ORIGIN_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3259,

	/**
	 Input json string has invalid value of property : ip_origin, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ORIGIN_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3260,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3261,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3262,

	/**
	 Input json string has invalid type of property : ip_state, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_STATE_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3263,

	/**
	 Input json string has invalid value of property : ip_state, please check out #struct_ip_neighbor_element_ip_neighbor for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_STATE_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR = 3264,

	/**
	 Input json string has invalid type of property : ip_origin, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ORIGIN_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3265,

	/**
	 Input json string has invalid value of property : ip_origin, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ORIGIN_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3266,

	/**
	 Input json string has invalid type of property : ip_status, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_STATUS_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3267,

	/**
	 Input json string has invalid value of property : ip_status, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_STATUS_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3268,

	/**
	 ip_prefix_length did not meet the restriction: 0..128, please check out #_struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_PREFIX_LENGTH_RANGE_INCORRECT = 3269,

	/**
	 Input json string has invalid type of property : ip_prefix_length, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_PREFIX_LENGTH_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3270,

	/**
	 Input json string has invalid value of property : ip_prefix_length, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_PREFIX_LENGTH_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3271,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3272,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_address_element_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS = 3273,

	/**
	 Input json string has invalid type of property : ip_forwarding, please check out #struct_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_FORWARDING_IN_STRUCT_IP_IPV6 = 3274,

	/**
	 Input json string has invalid value of property : ip_forwarding, please check out #struct_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_FORWARDING_IN_STRUCT_IP_IPV6 = 3275,

	/**
	 ip_mtu did not meet the restriction: 1280..max, please check out #_struct_ip_ipv6 for more information.
	 */
	ZapiErrorCode_STRUCT_IP_IPV6_IP_MTU_RANGE_INCORRECT = 3276,

	/**
	 Input json string has invalid type of property : ip_mtu, please check out #struct_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_MTU_IN_STRUCT_IP_IPV6 = 3277,

	/**
	 Input json string has invalid value of property : ip_mtu, please check out #struct_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_MTU_IN_STRUCT_IP_IPV6 = 3278,

	/**
	 Input json string has invalid type in : struct_if_ethernet_ethernet, please check out #struct_if_ethernet_ethernet for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_ETHERNET_ETHERNET = 3279,

	/**
	 if_ssid_pin_code did not meet the restriction: ["[0-9]*"], please check out #_struct_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_IF_SSID_PIN_CODE_PATTERN_INCORRECT = 3280,

	/**
	 if_ssid_pin_code did not meet the restriction: 8, please check out #_struct_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_IF_SSID_PIN_CODE_LENGTH_INCORRECT = 3281,

	/**
	 Input json string has invalid type of property : if_ssid_pin_code, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_PIN_CODE_IN_STRUCT_INTERFACE_ELEMENT = 3282,

	/**
	 Input json string has invalid value of property : if_ssid_pin_code, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_PIN_CODE_IN_STRUCT_INTERFACE_ELEMENT = 3283,

	/**
	 Input json string has invalid type of property : if_ppp_encryption_protocol, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_ENCRYPTION_PROTOCOL_IN_STRUCT_INTERFACE_ELEMENT = 3284,

	/**
	 Input json string has invalid value of property : if_ppp_encryption_protocol, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_ENCRYPTION_PROTOCOL_IN_STRUCT_INTERFACE_ELEMENT = 3285,

	/**
	 Input json string has invalid type in : struct_if_ssid_end_point_stats, please check out #struct_if_ssid_end_point_stats for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_SSID_END_POINT_STATS = 3286,

	/**
	 Input json string has invalid type of property : last_change, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LAST_CHANGE_IN_STRUCT_INTERFACE_ELEMENT = 3287,

	/**
	 Input json string has invalid value of property : last_change, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LAST_CHANGE_IN_STRUCT_INTERFACE_ELEMENT = 3288,

	/**
	 Input json string has invalid type of property : speed, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SPEED_IN_STRUCT_INTERFACE_ELEMENT = 3289,

	/**
	 Input json string has invalid value of property : speed, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SPEED_IN_STRUCT_INTERFACE_ELEMENT = 3290,

	/**
	 Input json string has invalid type in : struct_statistics, please check out #struct_statistics for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_STATISTICS = 3291,

	/**
	 Input json string has invalid type of property : if_ppp_authentication_protocol, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_AUTHENTICATION_PROTOCOL_IN_STRUCT_INTERFACE_ELEMENT = 3292,

	/**
	 Input json string has invalid value of property : if_ppp_authentication_protocol, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_AUTHENTICATION_PROTOCOL_IN_STRUCT_INTERFACE_ELEMENT = 3293,

	/**
	 Input json string has invalid type of property : oper_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPER_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 3294,

	/**
	 Input json string has invalid value of property : oper_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPER_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 3295,

	/**
	 Input json string has invalid type of property : if_radio_operating_frequency_band, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_OPERATING_FREQUENCY_BAND_IN_STRUCT_INTERFACE_ELEMENT = 3296,

	/**
	 Input json string has invalid value of property : if_radio_operating_frequency_band, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_OPERATING_FREQUENCY_BAND_IN_STRUCT_INTERFACE_ELEMENT = 3297,

	/**
	 Input json string has invalid type of property : if_radio_enabled_by_hw_button, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_ENABLED_BY_HW_BUTTON_IN_STRUCT_INTERFACE_ELEMENT = 3298,

	/**
	 Input json string has invalid value of property : if_radio_enabled_by_hw_button, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_ENABLED_BY_HW_BUTTON_IN_STRUCT_INTERFACE_ELEMENT = 3299,

	/**
	 Input json string has invalid type of property : if_ppp_connection_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_CONNECTION_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 3300,

	/**
	 Input json string has invalid value of property : if_ppp_connection_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_CONNECTION_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 3301,

	/**
	 Input json string has invalid type in : struct_ip_ipv4, please check out #struct_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_IPV4 = 3302,

	/**
	 if_ssid_ssid did not meet the restriction: ["[0-9a-zA-Z`~!@#$%\\^&*()\\-+={};:'<>,\\./_\\|\\[\\]\"?\\\\ ]*"], please check out #_struct_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_IF_SSID_SSID_PATTERN_INCORRECT = 3303,

	/**
	 if_ssid_ssid did not meet the restriction: 1..32, please check out #_struct_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_IF_SSID_SSID_LENGTH_INCORRECT = 3304,

	/**
	 Input json string has invalid type of property : if_ssid_ssid, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SSID_IN_STRUCT_INTERFACE_ELEMENT = 3305,

	/**
	 Input json string has invalid value of property : if_ssid_ssid, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SSID_IN_STRUCT_INTERFACE_ELEMENT = 3306,

	/**
	 Input json string has invalid type in : struct_ip_ipv6, please check out #struct_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_IPV6 = 3307,

	/**
	 Input json string has invalid type of property : if_ssid_wps_configured, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_WPS_CONFIGURED_IN_STRUCT_INTERFACE_ELEMENT = 3308,

	/**
	 Input json string has invalid value of property : if_ssid_wps_configured, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_WPS_CONFIGURED_IN_STRUCT_INTERFACE_ELEMENT = 3309,

	/**
	 Input json string has invalid type of property : name, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INTERFACE_ELEMENT = 3310,

	/**
	 Input json string has invalid value of property : name, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INTERFACE_ELEMENT = 3311,

	/**
	 Input json string has invalid type of property : type, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_INTERFACE_ELEMENT = 3312,

	/**
	 Input json string has invalid value of property : type, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_INTERFACE_ELEMENT = 3313,

	/**
	 Input json string has invalid type of property : phys_address, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PHYS_ADDRESS_IN_STRUCT_INTERFACE_ELEMENT = 3314,

	/**
	 Input json string has invalid value of property : phys_address, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PHYS_ADDRESS_IN_STRUCT_INTERFACE_ELEMENT = 3315,

	/**
	 Input json string has invalid type of property : if_ppp_compression_protocol, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_COMPRESSION_PROTOCOL_IN_STRUCT_INTERFACE_ELEMENT = 3316,

	/**
	 Input json string has invalid value of property : if_ppp_compression_protocol, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_COMPRESSION_PROTOCOL_IN_STRUCT_INTERFACE_ELEMENT = 3317,

	/**
	 Input json string has invalid type of property : if_radio_channel, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_CHANNEL_IN_STRUCT_INTERFACE_ELEMENT = 3318,

	/**
	 Input json string has invalid value of property : if_radio_channel, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_CHANNEL_IN_STRUCT_INTERFACE_ELEMENT = 3319,

	/**
	 Input json string has invalid type of property : admin_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ADMIN_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 3320,

	/**
	 Input json string has invalid value of property : admin_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ADMIN_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 3321,

	/**
	 if_index did not meet the restriction: 1..2147483647, please check out #_struct_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_IF_INDEX_RANGE_INCORRECT = 3322,

	/**
	 Input json string has invalid type of property : if_index, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_INDEX_IN_STRUCT_INTERFACE_ELEMENT = 3323,

	/**
	 Input json string has invalid value of property : if_index, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_INDEX_IN_STRUCT_INTERFACE_ELEMENT = 3324,

	/**
	 Input json string has invalid type of property : if_ethernet_speed, please check out #struct_case_if_ethernet_manual for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_ETHERNET_SPEED_IN_STRUCT_CASE_IF_ETHERNET_MANUAL = 3325,

	/**
	 Input json string has invalid value of property : if_ethernet_speed, please check out #struct_case_if_ethernet_manual for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_ETHERNET_SPEED_IN_STRUCT_CASE_IF_ETHERNET_MANUAL = 3326,

	/**
	 Input json string has invalid type of property : if_ethernet_duplex, please check out #struct_case_if_ethernet_manual for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_ETHERNET_DUPLEX_IN_STRUCT_CASE_IF_ETHERNET_MANUAL = 3327,

	/**
	 Input json string has invalid value of property : if_ethernet_duplex, please check out #struct_case_if_ethernet_manual for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_ETHERNET_DUPLEX_IN_STRUCT_CASE_IF_ETHERNET_MANUAL = 3328,

	/**
	 Input json string has invalid type in : struct_case_if_ethernet_auto, please check out #struct_case_if_ethernet_auto for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_IF_ETHERNET_AUTO = 3329,

	/**
	 Input json string has invalid type in : struct_case_if_ethernet_manual, please check out #struct_case_if_ethernet_manual for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_IF_ETHERNET_MANUAL = 3330,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_if_ethernet_transmission_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_IF_ETHERNET_TRANSMISSION_PARAMS = 3331,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_if_ethernet_transmission_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_IF_ETHERNET_TRANSMISSION_PARAMS = 3332,

	/**
	 Input json string has invalid type in : struct_if_ethernet_transmission_params, please check out #struct_if_ethernet_transmission_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_ETHERNET_TRANSMISSION_PARAMS = 3333,

	/**
	 Input json string has invalid type of property : if_ssid_enabled, please check out #struct_if_ssid_wps for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_ENABLED_IN_STRUCT_IF_SSID_WPS = 3334,

	/**
	 Input json string has invalid value of property : if_ssid_enabled, please check out #struct_if_ssid_wps for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_ENABLED_IN_STRUCT_IF_SSID_WPS = 3335,

	/**
	 Input json string has invalid type of property : if_ssid_pin_code_enabled, please check out #struct_if_ssid_wps for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_PIN_CODE_ENABLED_IN_STRUCT_IF_SSID_WPS = 3336,

	/**
	 Input json string has invalid value of property : if_ssid_pin_code_enabled, please check out #struct_if_ssid_wps for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_PIN_CODE_ENABLED_IN_STRUCT_IF_SSID_WPS = 3337,

	/**
	 Input json string has invalid type of property : if_ssid_enabled, please check out #struct_if_ssid_bandwidth_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_ENABLED_IN_STRUCT_IF_SSID_BANDWIDTH_CONTROL = 3338,

	/**
	 Input json string has invalid value of property : if_ssid_enabled, please check out #struct_if_ssid_bandwidth_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_ENABLED_IN_STRUCT_IF_SSID_BANDWIDTH_CONTROL = 3339,

	/**
	 Input json string has invalid type of property : if_ssid_max_bandwidth, please check out #struct_if_ssid_bandwidth_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_MAX_BANDWIDTH_IN_STRUCT_IF_SSID_BANDWIDTH_CONTROL = 3340,

	/**
	 Input json string has invalid value of property : if_ssid_max_bandwidth, please check out #struct_if_ssid_bandwidth_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_MAX_BANDWIDTH_IN_STRUCT_IF_SSID_BANDWIDTH_CONTROL = 3341,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_address_element_ip_address_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV4 = 3342,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_address_element_ip_address_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV4 = 3343,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV4 = 3344,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV4 = 3345,

	/**
	 Input json string has invalid type of property : ip_link_layer_address, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV4 = 3346,

	/**
	 Input json string has invalid value of property : ip_link_layer_address, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv4 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV4 = 3347,

	/**
	 Input json string has invalid type of property : ip_enabled, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ENABLED_IN_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3348,

	/**
	 Input json string has invalid value of property : ip_enabled, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ENABLED_IN_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3349,

	/**
	 Input json string has invalid type of property : ip_forwarding, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_FORWARDING_IN_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3350,

	/**
	 Input json string has invalid value of property : ip_forwarding, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_FORWARDING_IN_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3351,

	/**
	 ip_mtu did not meet the restriction: 68..max, please check out #_struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_IP_IPV4_INTERFACE_ELEMENT_IP_MTU_RANGE_INCORRECT = 3352,

	/**
	 Input json string has invalid type of property : ip_mtu, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_MTU_IN_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3353,

	/**
	 Input json string has invalid value of property : ip_mtu, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_MTU_IN_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3354,

	/**
	 Input json string has invalid type of property : ip_temporary_valid_lifetime, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_TEMPORARY_VALID_LIFETIME_IN_STRUCT_IP_AUTOCONF = 3355,

	/**
	 Input json string has invalid value of property : ip_temporary_valid_lifetime, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_TEMPORARY_VALID_LIFETIME_IN_STRUCT_IP_AUTOCONF = 3356,

	/**
	 Input json string has invalid type of property : ip_create_temporary_addresses, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_CREATE_TEMPORARY_ADDRESSES_IN_STRUCT_IP_AUTOCONF = 3357,

	/**
	 Input json string has invalid value of property : ip_create_temporary_addresses, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_CREATE_TEMPORARY_ADDRESSES_IN_STRUCT_IP_AUTOCONF = 3358,

	/**
	 Input json string has invalid type of property : ip_create_global_addresses, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_CREATE_GLOBAL_ADDRESSES_IN_STRUCT_IP_AUTOCONF = 3359,

	/**
	 Input json string has invalid value of property : ip_create_global_addresses, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_CREATE_GLOBAL_ADDRESSES_IN_STRUCT_IP_AUTOCONF = 3360,

	/**
	 Input json string has invalid type of property : ip_temporary_preferred_lifetime, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_TEMPORARY_PREFERRED_LIFETIME_IN_STRUCT_IP_AUTOCONF = 3361,

	/**
	 Input json string has invalid value of property : ip_temporary_preferred_lifetime, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_TEMPORARY_PREFERRED_LIFETIME_IN_STRUCT_IP_AUTOCONF = 3362,

	/**
	 ip_prefix_length did not meet the restriction: 0..128, please check out #_struct_ip_address_element_ip_address_ip_ipv6 for more information.
	 */
	ZapiErrorCode_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV6_IP_PREFIX_LENGTH_RANGE_INCORRECT = 3363,

	/**
	 Input json string has invalid type of property : ip_prefix_length, please check out #struct_ip_address_element_ip_address_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_PREFIX_LENGTH_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV6 = 3364,

	/**
	 Input json string has invalid value of property : ip_prefix_length, please check out #struct_ip_address_element_ip_address_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_PREFIX_LENGTH_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV6 = 3365,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_address_element_ip_address_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV6 = 3366,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_address_element_ip_address_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_ADDRESS_ELEMENT_IP_ADDRESS_IP_IPV6 = 3367,

	/**
	 Input json string has invalid type of property : ip_ip, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV6 = 3368,

	/**
	 Input json string has invalid value of property : ip_ip, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IP_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV6 = 3369,

	/**
	 Input json string has invalid type of property : ip_link_layer_address, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV6 = 3370,

	/**
	 Input json string has invalid value of property : ip_link_layer_address, please check out #struct_ip_neighbor_element_ip_neighbor_ip_ipv6 for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_LINK_LAYER_ADDRESS_IN_STRUCT_IP_NEIGHBOR_ELEMENT_IP_NEIGHBOR_IP_IPV6 = 3371,

	/**
	 Input json string has invalid type in : struct_ip_autoconf, please check out #struct_ip_autoconf for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_AUTOCONF = 3372,

	/**
	 Input json string has invalid type of property : ip_enabled, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ENABLED_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3373,

	/**
	 Input json string has invalid value of property : ip_enabled, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ENABLED_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3374,

	/**
	 Input json string has invalid type of property : ip_forwarding, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_FORWARDING_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3375,

	/**
	 Input json string has invalid value of property : ip_forwarding, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_FORWARDING_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3376,

	/**
	 ip_mtu did not meet the restriction: 1280..max, please check out #_struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_STRUCT_IP_IPV6_INTERFACE_ELEMENT_IP_MTU_RANGE_INCORRECT = 3377,

	/**
	 Input json string has invalid type of property : ip_mtu, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_MTU_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3378,

	/**
	 Input json string has invalid value of property : ip_mtu, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_MTU_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3379,

	/**
	 Input json string has invalid type of property : ip_dup_addr_detect_transmits, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_DUP_ADDR_DETECT_TRANSMITS_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3380,

	/**
	 Input json string has invalid value of property : ip_dup_addr_detect_transmits, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_DUP_ADDR_DETECT_TRANSMITS_IN_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3381,

	/**
	 Input json string has invalid type of property : if_ssid_radius_server_ip_address, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_RADIUS_SERVER_IP_ADDRESS_IN_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3382,

	/**
	 Input json string has invalid value of property : if_ssid_radius_server_ip_address, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_RADIUS_SERVER_IP_ADDRESS_IN_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3383,

	/**
	 Input json string has invalid type of property : if_ssid_radius_secret, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_RADIUS_SECRET_IN_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3384,

	/**
	 Input json string has invalid value of property : if_ssid_radius_secret, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_RADIUS_SECRET_IN_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3385,

	/**
	 Input json string has invalid type of property : if_ssid_radius_server_port, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_RADIUS_SERVER_PORT_IN_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3386,

	/**
	 Input json string has invalid value of property : if_ssid_radius_server_port, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_RADIUS_SERVER_PORT_IN_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3387,

	/**
	 if_ssid_key_passphrase did not meet the restriction: ["[a-zA-Z0-9 `~!@#$%\\^&*()_\\-+={}\\|\\\\;:'<,>\\./?\"\\[\\]]*"], please check out #_struct_case_if_ssid_key_passphrase for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_IF_SSID_KEY_PASSPHRASE_IF_SSID_KEY_PASSPHRASE_PATTERN_INCORRECT = 3388,

	/**
	 if_ssid_key_passphrase did not meet the restriction: 8..63, please check out #_struct_case_if_ssid_key_passphrase for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_IF_SSID_KEY_PASSPHRASE_IF_SSID_KEY_PASSPHRASE_LENGTH_INCORRECT = 3389,

	/**
	 Input json string has invalid type of property : if_ssid_key_passphrase, please check out #struct_case_if_ssid_key_passphrase for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_KEY_PASSPHRASE_IN_STRUCT_CASE_IF_SSID_KEY_PASSPHRASE = 3390,

	/**
	 Input json string has invalid value of property : if_ssid_key_passphrase, please check out #struct_case_if_ssid_key_passphrase for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_KEY_PASSPHRASE_IN_STRUCT_CASE_IF_SSID_KEY_PASSPHRASE = 3391,

	/**
	 if_ssid_presharedkey did not meet the restriction: ["[0-9a-fA-F]{64}"], please check out #_struct_case_if_ssid_presharedkey for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_IF_SSID_PRESHAREDKEY_IF_SSID_PRESHAREDKEY_PATTERN_INCORRECT = 3392,

	/**
	 if_ssid_presharedkey did not meet the restriction: 64, please check out #_struct_case_if_ssid_presharedkey for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_IF_SSID_PRESHAREDKEY_IF_SSID_PRESHAREDKEY_LENGTH_INCORRECT = 3393,

	/**
	 Input json string has invalid type of property : if_ssid_presharedkey, please check out #struct_case_if_ssid_presharedkey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_PRESHAREDKEY_IN_STRUCT_CASE_IF_SSID_PRESHAREDKEY = 3394,

	/**
	 Input json string has invalid value of property : if_ssid_presharedkey, please check out #struct_case_if_ssid_presharedkey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_PRESHAREDKEY_IN_STRUCT_CASE_IF_SSID_PRESHAREDKEY = 3395,

	/**
	 Input json string has invalid type in : struct_case_if_ssid_key_passphrase, please check out #struct_case_if_ssid_key_passphrase for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_IF_SSID_KEY_PASSPHRASE = 3396,

	/**
	 Input json string has invalid type in : struct_case_if_ssid_presharedkey, please check out #struct_case_if_ssid_presharedkey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_IF_SSID_PRESHAREDKEY = 3397,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_if_ssid_psk for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_IF_SSID_PSK = 3398,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_if_ssid_psk for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_IF_SSID_PSK = 3399,

	/**
	 Input json string has invalid type in : struct_if_ssid_psk, please check out #struct_if_ssid_psk for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_SSID_PSK = 3400,

	/**
	 Input json string has invalid type of property : if_ssid_re_key_interval, please check out #struct_if_ssid_psk_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_RE_KEY_INTERVAL_IN_STRUCT_IF_SSID_PSK_SETTING = 3401,

	/**
	 Input json string has invalid value of property : if_ssid_re_key_interval, please check out #struct_if_ssid_psk_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_RE_KEY_INTERVAL_IN_STRUCT_IF_SSID_PSK_SETTING = 3402,

	/**
	 Input json string has invalid type of property : union_of_wifi_types_channel_2g, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_WIFI_TYPES_CHANNEL_2G_IN_STRUCT_IF_RADIO_CHANNEL = 3403,

	/**
	 Input json string has invalid value of property : union_of_wifi_types_channel_2g, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_WIFI_TYPES_CHANNEL_2G_IN_STRUCT_IF_RADIO_CHANNEL = 3404,

	/**
	 Input json string has invalid type of property : union_of_wifi_types_channel_5g, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_WIFI_TYPES_CHANNEL_5G_IN_STRUCT_IF_RADIO_CHANNEL = 3405,

	/**
	 Input json string has invalid value of property : union_of_wifi_types_channel_5g, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_WIFI_TYPES_CHANNEL_5G_IN_STRUCT_IF_RADIO_CHANNEL = 3406,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_IF_RADIO_CHANNEL = 3407,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_IF_RADIO_CHANNEL = 3408,

	/**
	 Input json string has invalid type in : struct_if_ethernet_ethernet_interface_element, please check out #struct_if_ethernet_ethernet_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_ETHERNET_ETHERNET_INTERFACE_ELEMENT = 3409,

	/**
	 Input json string has invalid type of property : if_radio_auto_channel, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_AUTO_CHANNEL_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3410,

	/**
	 Input json string has invalid value of property : if_radio_auto_channel, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_AUTO_CHANNEL_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3411,

	/**
	 Input json string has invalid type of property : if_ppp_password, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_PASSWORD_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3412,

	/**
	 Input json string has invalid value of property : if_ppp_password, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_PASSWORD_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3413,

	/**
	 Input json string has invalid type of property : if_radio_support_channel_list, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_SUPPORT_CHANNEL_LIST_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3414,

	/**
	 Input json string has invalid value of property : if_radio_support_channel_list, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_SUPPORT_CHANNEL_LIST_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3415,

	/**
	 Input json string has invalid type of property : if_ssid_pmf_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_PMF_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3416,

	/**
	 Input json string has invalid value of property : if_ssid_pmf_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_PMF_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3417,

	/**
	 if_ppp_mtu did not meet the restriction: 1360..1492, please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_PPP_MTU_RANGE_INCORRECT = 3418,

	/**
	 Input json string has invalid type of property : if_ppp_mtu, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_MTU_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3419,

	/**
	 Input json string has invalid value of property : if_ppp_mtu, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_MTU_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3420,

	/**
	 Input json string has invalid type of property : if_radio_transmit_power, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_TRANSMIT_POWER_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3421,

	/**
	 Input json string has invalid value of property : if_radio_transmit_power, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_TRANSMIT_POWER_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3422,

	/**
	 Input json string has invalid type of property : if_radio_operating_standard, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_OPERATING_STANDARD_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3423,

	/**
	 Input json string has invalid value of property : if_radio_operating_standard, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_OPERATING_STANDARD_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3424,

	/**
	 Input json string has invalid type of property : if_ssid_ssid_hidden_enabled, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SSID_HIDDEN_ENABLED_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3425,

	/**
	 Input json string has invalid value of property : if_ssid_ssid_hidden_enabled, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SSID_HIDDEN_ENABLED_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3426,

	/**
	 Input json string has invalid type in : struct_if_ssid_wps, please check out #struct_if_ssid_wps for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_SSID_WPS = 3427,

	/**
	 Input json string has invalid type of property : if_ssid_security, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SECURITY_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3428,

	/**
	 Input json string has invalid value of property : if_ssid_security, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SECURITY_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3429,

	/**
	 Input json string has invalid type of property : if_ssid_base_interface, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_BASE_INTERFACE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3430,

	/**
	 Input json string has invalid value of property : if_ssid_base_interface, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_BASE_INTERFACE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3431,

	/**
	 Input json string has invalid type of property : if_ssid_dfs_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_DFS_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3432,

	/**
	 Input json string has invalid value of property : if_ssid_dfs_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_DFS_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3433,

	/**
	 Input json string has invalid type in : struct_if_ssid_bandwidth_control, please check out #struct_if_ssid_bandwidth_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_SSID_BANDWIDTH_CONTROL = 3434,

	/**
	 Input json string has invalid type of property : if_ssid_intra_bss_traffic_blocking, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_INTRA_BSS_TRAFFIC_BLOCKING_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3435,

	/**
	 Input json string has invalid value of property : if_ssid_intra_bss_traffic_blocking, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_INTRA_BSS_TRAFFIC_BLOCKING_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3436,

	/**
	 Input json string has invalid type of property : if_ppp_username, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_USERNAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3437,

	/**
	 Input json string has invalid value of property : if_ppp_username, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_USERNAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3438,

	/**
	 Input json string has invalid type of property : if_ppp_name, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_NAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3439,

	/**
	 Input json string has invalid value of property : if_ppp_name, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_NAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3440,

	/**
	 Input json string has invalid type of property : type, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3441,

	/**
	 Input json string has invalid value of property : type, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3442,

	/**
	 Input json string has invalid type of property : if_radio_operating_channel_bandwidth, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_OPERATING_CHANNEL_BANDWIDTH_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3443,

	/**
	 Input json string has invalid value of property : if_radio_operating_channel_bandwidth, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_OPERATING_CHANNEL_BANDWIDTH_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3444,

	/**
	 Input json string has invalid type in : struct_ip_ipv4_interface_element, please check out #struct_ip_ipv4_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_IPV4_INTERFACE_ELEMENT = 3445,

	/**
	 if_ssid_ssid did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_SSID_SSID_PATTERN_INCORRECT = 3446,

	/**
	 if_ssid_ssid did not meet the restriction: 1..32, please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_SSID_SSID_LENGTH_INCORRECT = 3447,

	/**
	 Input json string has invalid type of property : if_ssid_ssid, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SSID_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3448,

	/**
	 Input json string has invalid value of property : if_ssid_ssid, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SSID_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3449,

	/**
	 Input json string has invalid type in : struct_ip_ipv6_interface_element, please check out #struct_ip_ipv6_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_IPV6_INTERFACE_ELEMENT = 3450,

	/**
	 Input json string has invalid type of property : if_ppp_base_interface, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_BASE_INTERFACE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3451,

	/**
	 Input json string has invalid value of property : if_ppp_base_interface, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_BASE_INTERFACE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3452,

	/**
	 Input json string has invalid type of property : if_ppp_idle_disconnect_time, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_IDLE_DISCONNECT_TIME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3453,

	/**
	 Input json string has invalid value of property : if_ppp_idle_disconnect_time, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_IDLE_DISCONNECT_TIME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3454,

	/**
	 Input json string has invalid type in : struct_if_ssid_enterprise_setting, please check out #struct_if_ssid_enterprise_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_SSID_ENTERPRISE_SETTING = 3455,

	/**
	 Input json string has invalid type of property : if_ppp_auto_connect_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_AUTO_CONNECT_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3456,

	/**
	 Input json string has invalid value of property : if_ppp_auto_connect_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_AUTO_CONNECT_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3457,

	/**
	 Input json string has invalid type of property : if_ssid_ssid_mode, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_SSID_MODE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3458,

	/**
	 Input json string has invalid value of property : if_ssid_ssid_mode, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_SSID_MODE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3459,

	/**
	 Input json string has invalid type of property : if_ssid_wmm_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_WMM_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3460,

	/**
	 Input json string has invalid value of property : if_ssid_wmm_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_WMM_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3461,

	/**
	 Input json string has invalid type of property : if_ppp_pppoe_service_name, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_PPP_PPPOE_SERVICE_NAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3462,

	/**
	 Input json string has invalid value of property : if_ppp_pppoe_service_name, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_PPP_PPPOE_SERVICE_NAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3463,

	/**
	 if_ssid_ctsrts did not meet the restriction: 256..2346, please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_SSID_CTSRTS_RANGE_INCORRECT = 3464,

	/**
	 Input json string has invalid type of property : if_ssid_ctsrts, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_CTSRTS_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3465,

	/**
	 Input json string has invalid value of property : if_ssid_ctsrts, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_CTSRTS_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3466,

	/**
	 Input json string has invalid type of property : name, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3467,

	/**
	 Input json string has invalid value of property : name, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3468,

	/**
	 if_ssid_frag did not meet the restriction: 256..2346, please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_SSID_FRAG_RANGE_INCORRECT = 3469,

	/**
	 Input json string has invalid type of property : if_ssid_frag, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_SSID_FRAG_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3470,

	/**
	 Input json string has invalid value of property : if_ssid_frag, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_SSID_FRAG_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3471,

	/**
	 Input json string has invalid type of property : link_up_down_trap_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LINK_UP_DOWN_TRAP_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3472,

	/**
	 Input json string has invalid value of property : link_up_down_trap_enable, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LINK_UP_DOWN_TRAP_ENABLE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3473,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3474,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3475,

	/**
	 Input json string has invalid type in : struct_if_ssid_psk_setting, please check out #struct_if_ssid_psk_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_SSID_PSK_SETTING = 3476,

	/**
	 Input json string has invalid type in : struct_if_radio_channel, please check out #struct_if_radio_channel for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IF_RADIO_CHANNEL = 3477,

	/**
	 Input json string has invalid type of property : if_radio_operating_frequency_band, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_OPERATING_FREQUENCY_BAND_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3478,

	/**
	 Input json string has invalid value of property : if_radio_operating_frequency_band, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_OPERATING_FREQUENCY_BAND_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3479,

	/**
	 if_radio_regulatory_domain did not meet the restriction: ["[a-zA-Z]*"], please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_RADIO_REGULATORY_DOMAIN_PATTERN_INCORRECT = 3480,

	/**
	 if_radio_regulatory_domain did not meet the restriction: 2, please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_RADIO_REGULATORY_DOMAIN_LENGTH_INCORRECT = 3481,

	/**
	 Input json string has invalid type of property : if_radio_regulatory_domain, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_RADIO_REGULATORY_DOMAIN_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3482,

	/**
	 Input json string has invalid value of property : if_radio_regulatory_domain, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_RADIO_REGULATORY_DOMAIN_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 3483,

	/**
	 Input json string has invalid type of property : action, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTION_IN_STRUCT_INPUT_PAIR_UNPAIR = 3484,

	/**
	 Input json string has invalid value of property : action, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTION_IN_STRUCT_INPUT_PAIR_UNPAIR = 3485,

	/**
	 Input json string has invalid type of property : token, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TOKEN_IN_STRUCT_INPUT_PAIR_UNPAIR = 3486,

	/**
	 Input json string has invalid value of property : token, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TOKEN_IN_STRUCT_INPUT_PAIR_UNPAIR = 3487,

	/**
	 Input json string has invalid type of property : cloud_id, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLOUD_ID_IN_STRUCT_INPUT_PAIR_UNPAIR = 3488,

	/**
	 Input json string has invalid value of property : cloud_id, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLOUD_ID_IN_STRUCT_INPUT_PAIR_UNPAIR = 3489,

	/**
	 Input json string has invalid type in : struct_input_pair_unpair, please check out #struct_input_pair_unpair for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_PAIR_UNPAIR = 3490,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_FILTER_RULE_ELEMENT = 3491,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_FILTER_RULE_ELEMENT = 3492,

	/**
	 Input json string has invalid type of property : dest_port_end, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT = 3493,

	/**
	 Input json string has invalid value of property : dest_port_end, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT = 3494,

	/**
	 Input json string has invalid type of property : dest_ip_address, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT = 3495,

	/**
	 Input json string has invalid value of property : dest_ip_address, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT = 3496,

	/**
	 Input json string has invalid type of property : source_port_start, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT = 3497,

	/**
	 Input json string has invalid value of property : source_port_start, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT = 3498,

	/**
	 Input json string has invalid type of property : rule_index, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RULE_INDEX_IN_STRUCT_FILTER_RULE_ELEMENT = 3499,

	/**
	 Input json string has invalid value of property : rule_index, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RULE_INDEX_IN_STRUCT_FILTER_RULE_ELEMENT = 3500,

	/**
	 Input json string has invalid type of property : source_port_end, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT = 3501,

	/**
	 Input json string has invalid value of property : source_port_end, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT = 3502,

	/**
	 Input json string has invalid type of property : source_ip_address, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT = 3503,

	/**
	 Input json string has invalid value of property : source_ip_address, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT = 3504,

	/**
	 Input json string has invalid type of property : service_name, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_NAME_IN_STRUCT_FILTER_RULE_ELEMENT = 3505,

	/**
	 Input json string has invalid value of property : service_name, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_NAME_IN_STRUCT_FILTER_RULE_ELEMENT = 3506,

	/**
	 Input json string has invalid type of property : dest_port_start, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT = 3507,

	/**
	 Input json string has invalid value of property : dest_port_start, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT = 3508,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT = 3509,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_filter_rule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT = 3510,

	/**
	 Input json string has invalid type of property : target, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TARGET_IN_STRUCT_FIREWALL = 3511,

	/**
	 Input json string has invalid value of property : target, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TARGET_IN_STRUCT_FIREWALL = 3512,

	/**
	 Input json string has invalid type of property : icmp_respond_to_ping_interface, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ICMP_RESPOND_TO_PING_INTERFACE_IN_STRUCT_FIREWALL = 3513,

	/**
	 Input json string has invalid value of property : icmp_respond_to_ping_interface, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ICMP_RESPOND_TO_PING_INTERFACE_IN_STRUCT_FIREWALL = 3514,

	/**
	 Input json string has invalid type of property : enable_firewall_rule, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_FIREWALL_RULE_IN_STRUCT_FIREWALL = 3515,

	/**
	 Input json string has invalid value of property : enable_firewall_rule, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_FIREWALL_RULE_IN_STRUCT_FIREWALL = 3516,

	/**
	 Input json string has invalid type of property : enable_firewall, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_FIREWALL_IN_STRUCT_FIREWALL = 3517,

	/**
	 Input json string has invalid value of property : enable_firewall, please check out #struct_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_FIREWALL_IN_STRUCT_FIREWALL = 3518,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_input_unblock_urn_zyxel_cpe_applications_zyxel_applications_ipv4_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_INPUT_UNBLOCK_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL = 3519,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_input_unblock_urn_zyxel_cpe_applications_zyxel_applications_ipv4_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_INPUT_UNBLOCK_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL = 3520,

	/**
	 Input json string has invalid type in : struct_input_unblock_urn_zyxel_cpe_applications_zyxel_applications_ipv4_firewall, please check out #struct_input_unblock_urn_zyxel_cpe_applications_zyxel_applications_ipv4_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_UNBLOCK_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL = 3521,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_input_block for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_INPUT_BLOCK = 3522,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_input_block for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_INPUT_BLOCK = 3523,

	/**
	 Input json string has invalid type in : struct_input_block, please check out #struct_input_block for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_BLOCK = 3524,

	/**
	 Input json string has invalid type of property : name, please check out #struct_input for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INPUT = 3525,

	/**
	 Input json string has invalid value of property : name, please check out #struct_input for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INPUT = 3526,

	/**
	 pin_code did not meet the restriction: ["[0-9]*"], please check out #_struct_output_generate_pin_code for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_GENERATE_PIN_CODE_PIN_CODE_PATTERN_INCORRECT = 3527,

	/**
	 pin_code did not meet the restriction: 8, please check out #_struct_output_generate_pin_code for more information.
	 */
	ZapiErrorCode_STRUCT_OUTPUT_GENERATE_PIN_CODE_PIN_CODE_LENGTH_INCORRECT = 3528,

	/**
	 Input json string has invalid type of property : pin_code, please check out #struct_output_generate_pin_code for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PIN_CODE_IN_STRUCT_OUTPUT_GENERATE_PIN_CODE = 3529,

	/**
	 Input json string has invalid value of property : pin_code, please check out #struct_output_generate_pin_code for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PIN_CODE_IN_STRUCT_OUTPUT_GENERATE_PIN_CODE = 3530,

	/**
	 Input json string has invalid type in : struct_input, please check out #struct_input for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT = 3531,

	/**
	 Input json string has invalid type in : struct_output_generate_pin_code, please check out #struct_output_generate_pin_code for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GENERATE_PIN_CODE = 3532,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_input_site_survey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_INPUT_SITE_SURVEY = 3533,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_input_site_survey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_INPUT_SITE_SURVEY = 3534,

	/**
	 Input json string has invalid type of property : index, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3535,

	/**
	 Input json string has invalid value of property : index, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3536,

	/**
	 Input json string has invalid type of property : strength, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STRENGTH_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3537,

	/**
	 Input json string has invalid value of property : strength, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STRENGTH_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3538,

	/**
	 Input json string has invalid type of property : ssid, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SSID_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3539,

	/**
	 Input json string has invalid value of property : ssid, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SSID_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3540,

	/**
	 Input json string has invalid type of property : radio, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RADIO_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3541,

	/**
	 Input json string has invalid value of property : radio, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RADIO_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3542,

	/**
	 Input json string has invalid type of property : mode, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MODE_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3543,

	/**
	 Input json string has invalid value of property : mode, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MODE_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3544,

	/**
	 Input json string has invalid type of property : security, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SECURITY_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3545,

	/**
	 Input json string has invalid value of property : security, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SECURITY_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3546,

	/**
	 Input json string has invalid type of property : channel, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHANNEL_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3547,

	/**
	 Input json string has invalid value of property : channel, please check out #struct_site_survey_result_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHANNEL_IN_STRUCT_SITE_SURVEY_RESULT_ELEMENT = 3548,

	/**
	 Input json string has invalid type in : struct_input_site_survey, please check out #struct_input_site_survey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SITE_SURVEY = 3549,

	/**
	 Input json string has invalid type in : struct_output_site_survey, please check out #struct_output_site_survey for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_SITE_SURVEY = 3550,

	/**
	 sta_pin did not meet the restriction: ["[0-9]*"], please check out #_struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_PRESS_START_BUTTON_STA_PIN_PATTERN_INCORRECT = 3551,

	/**
	 sta_pin did not meet the restriction: 8, please check out #_struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_PRESS_START_BUTTON_STA_PIN_LENGTH_INCORRECT = 3552,

	/**
	 Input json string has invalid type of property : sta_pin, please check out #struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STA_PIN_IN_STRUCT_INPUT_PRESS_START_BUTTON = 3553,

	/**
	 Input json string has invalid value of property : sta_pin, please check out #struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STA_PIN_IN_STRUCT_INPUT_PRESS_START_BUTTON = 3554,

	/**
	 Input json string has invalid type of property : name, please check out #struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INPUT_PRESS_START_BUTTON = 3555,

	/**
	 Input json string has invalid value of property : name, please check out #struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INPUT_PRESS_START_BUTTON = 3556,

	/**
	 Input json string has invalid type of property : wps_status, please check out #struct_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WPS_STATUS_IN_STRUCT_OUTPUT = 3557,

	/**
	 Input json string has invalid value of property : wps_status, please check out #struct_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WPS_STATUS_IN_STRUCT_OUTPUT = 3558,

	/**
	 Input json string has invalid type in : struct_input_press_start_button, please check out #struct_input_press_start_button for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_PRESS_START_BUTTON = 3559,

	/**
	 Input json string has invalid type in : struct_output, please check out #struct_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT = 3560,

	/**
	 Input json string has invalid type of property : root, please check out #struct_config_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROOT_IN_STRUCT_CONFIG_ELEMENT = 3561,

	/**
	 Input json string has invalid value of property : root, please check out #struct_config_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROOT_IN_STRUCT_CONFIG_ELEMENT = 3562,

	/**
	 Input json string has invalid type of property : xmlns, please check out #struct_config_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_XMLNS_IN_STRUCT_CONFIG_ELEMENT = 3563,

	/**
	 Input json string has invalid value of property : xmlns, please check out #struct_config_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_XMLNS_IN_STRUCT_CONFIG_ELEMENT = 3564,

	/**
	 Input json string has invalid type of property : type, please check out #struct_config_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_CONFIG_ELEMENT = 3565,

	/**
	 Input json string has invalid value of property : type, please check out #struct_config_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_CONFIG_ELEMENT = 3566,

	/**
	 Input json string has invalid type of property : xmlns, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_XMLNS_IN_STRUCT_PARAMS = 3567,

	/**
	 Input json string has invalid value of property : xmlns, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_XMLNS_IN_STRUCT_PARAMS = 3568,

	/**
	 Input json string has invalid type of property : target, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TARGET_IN_STRUCT_PARAMS = 3569,

	/**
	 Input json string has invalid value of property : target, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TARGET_IN_STRUCT_PARAMS = 3570,

	/**
	 Input json string has invalid type of property : error_option, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ERROR_OPTION_IN_STRUCT_PARAMS = 3571,

	/**
	 Input json string has invalid value of property : error_option, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ERROR_OPTION_IN_STRUCT_PARAMS = 3572,

	/**
	 Input json string has invalid type of property : source, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_IN_STRUCT_PARAMS = 3573,

	/**
	 Input json string has invalid value of property : source, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_IN_STRUCT_PARAMS = 3574,

	/**
	 Input json string has invalid type of property : root, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROOT_IN_STRUCT_PARAMS = 3575,

	/**
	 Input json string has invalid value of property : root, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROOT_IN_STRUCT_PARAMS = 3576,

	/**
	 Input json string has invalid type of property : message_id, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MESSAGE_ID_IN_STRUCT_RPC = 3577,

	/**
	 Input json string has invalid value of property : message_id, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MESSAGE_ID_IN_STRUCT_RPC = 3578,

	/**
	 Input json string has invalid type of property : operation, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPERATION_IN_STRUCT_RPC = 3579,

	/**
	 Input json string has invalid value of property : operation, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPERATION_IN_STRUCT_RPC = 3580,

	/**
	 xmlns did not meet the restriction: 39, please check out #_struct_rpc for more information.
	 */
	ZapiErrorCode_STRUCT_RPC_XMLNS_LENGTH_INCORRECT = 3581,

	/**
	 Input json string has invalid type of property : xmlns, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_XMLNS_IN_STRUCT_RPC = 3582,

	/**
	 Input json string has invalid value of property : xmlns, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_XMLNS_IN_STRUCT_RPC = 3583,

	/**
	 Input json string has invalid type in : struct_params, please check out #struct_params for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PARAMS = 3584,

	/**
	 Input json string has invalid type in : struct_rpc, please check out #struct_rpc for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_RPC = 3585,

	/**
	 text did not meet the restriction: 0..500, please check out #_struct_error_message for more information.
	 */
	ZapiErrorCode_STRUCT_ERROR_MESSAGE_TEXT_LENGTH_INCORRECT = 3586,

	/**
	 Input json string has invalid type of property : text, please check out #struct_error_message for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TEXT_IN_STRUCT_ERROR_MESSAGE = 3587,

	/**
	 Input json string has invalid value of property : text, please check out #struct_error_message for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TEXT_IN_STRUCT_ERROR_MESSAGE = 3588,

	/**
	 xml_lang did not meet the restriction: ["[A-F]{2}"], please check out #_struct_error_message for more information.
	 */
	ZapiErrorCode_STRUCT_ERROR_MESSAGE_XML_LANG_PATTERN_INCORRECT = 3589,

	/**
	 xml_lang did not meet the restriction: 2, please check out #_struct_error_message for more information.
	 */
	ZapiErrorCode_STRUCT_ERROR_MESSAGE_XML_LANG_LENGTH_INCORRECT = 3590,

	/**
	 Input json string has invalid type of property : xml_lang, please check out #struct_error_message for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_XML_LANG_IN_STRUCT_ERROR_MESSAGE = 3591,

	/**
	 Input json string has invalid value of property : xml_lang, please check out #struct_error_message for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_XML_LANG_IN_STRUCT_ERROR_MESSAGE = 3592,

	/**
	 Input json string has invalid type of property : error_type, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ERROR_TYPE_IN_STRUCT_RPC_ERROR = 3593,

	/**
	 Input json string has invalid value of property : error_type, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ERROR_TYPE_IN_STRUCT_RPC_ERROR = 3594,

	/**
	 Input json string has invalid type of property : error_severity, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ERROR_SEVERITY_IN_STRUCT_RPC_ERROR = 3595,

	/**
	 Input json string has invalid value of property : error_severity, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ERROR_SEVERITY_IN_STRUCT_RPC_ERROR = 3596,

	/**
	 Input json string has invalid type of property : error_tag, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ERROR_TAG_IN_STRUCT_RPC_ERROR = 3597,

	/**
	 Input json string has invalid value of property : error_tag, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ERROR_TAG_IN_STRUCT_RPC_ERROR = 3598,

	/**
	 Input json string has invalid type in : struct_error_message, please check out #struct_error_message for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ERROR_MESSAGE = 3599,

	/**
	 xmlns did not meet the restriction: 39, please check out #_struct_rpc_reply for more information.
	 */
	ZapiErrorCode_STRUCT_RPC_REPLY_XMLNS_LENGTH_INCORRECT = 3600,

	/**
	 Input json string has invalid type of property : xmlns, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_XMLNS_IN_STRUCT_RPC_REPLY = 3601,

	/**
	 Input json string has invalid value of property : xmlns, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_XMLNS_IN_STRUCT_RPC_REPLY = 3602,

	/**
	 Input json string has invalid type in : struct_rpc_error, please check out #struct_rpc_error for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_RPC_ERROR = 3603,

	/**
	 Input json string has invalid type of property : result, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RESULT_IN_STRUCT_RPC_REPLY = 3604,

	/**
	 Input json string has invalid value of property : result, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RESULT_IN_STRUCT_RPC_REPLY = 3605,

	/**
	 Input json string has invalid type of property : message_id, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MESSAGE_ID_IN_STRUCT_RPC_REPLY = 3606,

	/**
	 Input json string has invalid value of property : message_id, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MESSAGE_ID_IN_STRUCT_RPC_REPLY = 3607,

	/**
	 Input json string has invalid type in : struct_rpc_reply, please check out #struct_rpc_reply for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_RPC_REPLY = 3608,

	/**
	 Input json string has invalid type of property : radio_index, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RADIO_INDEX_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3609,

	/**
	 Input json string has invalid value of property : radio_index, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RADIO_INDEX_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3610,

	/**
	 Input json string has invalid type of property : radio, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RADIO_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3611,

	/**
	 Input json string has invalid value of property : radio, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RADIO_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3612,

	/**
	 Input json string has invalid type of property : name, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3613,

	/**
	 Input json string has invalid value of property : name, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3614,

	/**
	 Input json string has invalid type of property : type, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3615,

	/**
	 Input json string has invalid value of property : type, please check out #struct_wifi_interface_mapping_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_WIFI_INTERFACE_MAPPING_ELEMENT = 3616,

	/**
	 Input json string has invalid type in : struct_interfaces_capability, please check out #struct_interfaces_capability for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INTERFACES_CAPABILITY = 3617,

	/**
	 Input json string has invalid type of property : status, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3618,

	/**
	 Input json string has invalid value of property : status, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3619,

	/**
	 Input json string has invalid type of property : border_relay_ipv4_addresses, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BORDER_RELAY_IPV4_ADDRESSES_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3620,

	/**
	 Input json string has invalid value of property : border_relay_ipv4_addresses, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BORDER_RELAY_IPV4_ADDRESSES_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3621,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3622,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3623,

	/**
	 Input json string has invalid type of property : name, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3624,

	/**
	 Input json string has invalid value of property : name, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3625,

	/**
	 Input json string has invalid type of property : tunneled_interface, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TUNNELED_INTERFACE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3626,

	/**
	 Input json string has invalid value of property : tunneled_interface, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TUNNELED_INTERFACE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3627,

	/**
	 Input json string has invalid type of property : sp_ipv6_prefixs, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SP_IPV6_PREFIXS_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3628,

	/**
	 Input json string has invalid value of property : sp_ipv6_prefixs, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SP_IPV6_PREFIXS_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3629,

	/**
	 Input json string has invalid type of property : tunnel_interface, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TUNNEL_INTERFACE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3630,

	/**
	 Input json string has invalid value of property : tunnel_interface, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TUNNEL_INTERFACE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3631,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3632,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3633,

	/**
	 Input json string has invalid type of property : all_traffic_to_border_relay, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALL_TRAFFIC_TO_BORDER_RELAY_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3634,

	/**
	 Input json string has invalid value of property : all_traffic_to_border_relay, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALL_TRAFFIC_TO_BORDER_RELAY_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3635,

	/**
	 Input json string has invalid type of property : address_source, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ADDRESS_SOURCE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3636,

	/**
	 Input json string has invalid value of property : address_source, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ADDRESS_SOURCE_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3637,

	/**
	 Input json string has invalid type of property : ipv4_mask_length, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IPV4_MASK_LENGTH_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3638,

	/**
	 Input json string has invalid value of property : ipv4_mask_length, please check out #struct_ipv6rd_interface_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IPV4_MASK_LENGTH_IN_STRUCT_IPV6RD_INTERFACE_SETTING_ELEMENT = 3639,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_system_zyxel_wifi_system_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG = 3640,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_system_zyxel_wifi_system_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG = 3641,

	/**
	 Input json string has invalid type of property : file, please check out #struct_output_dump_file for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FILE_IN_STRUCT_OUTPUT_DUMP_FILE = 3642,

	/**
	 Input json string has invalid value of property : file, please check out #struct_output_dump_file for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FILE_IN_STRUCT_OUTPUT_DUMP_FILE = 3643,

	/**
	 Input json string has invalid type in : struct_output_dump_file, please check out #struct_output_dump_file for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_DUMP_FILE = 3644,

	/**
	 Input json string has invalid type of property : severity, please check out #struct_input_get_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SEVERITY_IN_STRUCT_INPUT_GET_LOG = 3645,

	/**
	 Input json string has invalid value of property : severity, please check out #struct_input_get_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SEVERITY_IN_STRUCT_INPUT_GET_LOG = 3646,

	/**
	 Input json string has invalid type of property : index, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_LOG_ELEMENT = 3647,

	/**
	 Input json string has invalid value of property : index, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_LOG_ELEMENT = 3648,

	/**
	 Input json string has invalid type of property : timestamp, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMESTAMP_IN_STRUCT_LOG_ELEMENT = 3649,

	/**
	 Input json string has invalid value of property : timestamp, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMESTAMP_IN_STRUCT_LOG_ELEMENT = 3650,

	/**
	 Input json string has invalid type of property : message, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MESSAGE_IN_STRUCT_LOG_ELEMENT = 3651,

	/**
	 Input json string has invalid value of property : message, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MESSAGE_IN_STRUCT_LOG_ELEMENT = 3652,

	/**
	 Input json string has invalid type of property : type, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_LOG_ELEMENT = 3653,

	/**
	 Input json string has invalid value of property : type, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_LOG_ELEMENT = 3654,

	/**
	 Input json string has invalid type of property : severity, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SEVERITY_IN_STRUCT_LOG_ELEMENT = 3655,

	/**
	 Input json string has invalid value of property : severity, please check out #struct_log_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SEVERITY_IN_STRUCT_LOG_ELEMENT = 3656,

	/**
	 Input json string has invalid type in : struct_input_get_log, please check out #struct_input_get_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_GET_LOG = 3657,

	/**
	 Input json string has invalid type in : struct_output_get_log, please check out #struct_output_get_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_LOG = 3658,

	/**
	 Input json string has invalid type of property : index, please check out #struct_input_bonus for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_INPUT_BONUS = 3659,

	/**
	 Input json string has invalid value of property : index, please check out #struct_input_bonus for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_INPUT_BONUS = 3660,

	/**
	 minute did not meet the restriction: 1 .. 1440, please check out #_struct_input_bonus for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_BONUS_MINUTE_RANGE_INCORRECT = 3661,

	/**
	 Input json string has invalid type of property : minute, please check out #struct_input_bonus for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MINUTE_IN_STRUCT_INPUT_BONUS = 3662,

	/**
	 Input json string has invalid value of property : minute, please check out #struct_input_bonus for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MINUTE_IN_STRUCT_INPUT_BONUS = 3663,

	/**
	 Input json string has invalid type in : struct_input_bonus, please check out #struct_input_bonus for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_BONUS = 3664,

	/**
	 Input json string has invalid type of property : timestamp, please check out #struct_immediate_block_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMESTAMP_IN_STRUCT_IMMEDIATE_BLOCK_STATE = 3665,

	/**
	 Input json string has invalid value of property : timestamp, please check out #struct_immediate_block_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMESTAMP_IN_STRUCT_IMMEDIATE_BLOCK_STATE = 3666,

	/**
	 Input json string has invalid type of property : state, please check out #struct_immediate_block_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATE_IN_STRUCT_IMMEDIATE_BLOCK_STATE = 3667,

	/**
	 Input json string has invalid value of property : state, please check out #struct_immediate_block_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATE_IN_STRUCT_IMMEDIATE_BLOCK_STATE = 3668,

	/**
	 Input json string has invalid type of property : device_mac, please check out #struct_device_mac_selected_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEVICE_MAC_IN_STRUCT_DEVICE_MAC_SELECTED_LIST_ELEMENT = 3669,

	/**
	 Input json string has invalid value of property : device_mac, please check out #struct_device_mac_selected_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEVICE_MAC_IN_STRUCT_DEVICE_MAC_SELECTED_LIST_ELEMENT = 3670,

	/**
	 Input json string has invalid type of property : index, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_SERVICE_RULES_ELEMENT = 3671,

	/**
	 Input json string has invalid value of property : index, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_SERVICE_RULES_ELEMENT = 3672,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_SERVICE_RULES_ELEMENT = 3673,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_SERVICE_RULES_ELEMENT = 3674,

	/**
	 Input json string has invalid type of property : user_defined, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USER_DEFINED_IN_STRUCT_SERVICE_RULES_ELEMENT = 3675,

	/**
	 Input json string has invalid value of property : user_defined, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USER_DEFINED_IN_STRUCT_SERVICE_RULES_ELEMENT = 3676,

	/**
	 Input json string has invalid type of property : service_name, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_NAME_IN_STRUCT_SERVICE_RULES_ELEMENT = 3677,

	/**
	 Input json string has invalid value of property : service_name, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_NAME_IN_STRUCT_SERVICE_RULES_ELEMENT = 3678,

	/**
	 Input json string has invalid type of property : port, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PORT_IN_STRUCT_SERVICE_RULES_ELEMENT = 3679,

	/**
	 Input json string has invalid value of property : port, please check out #struct_service_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PORT_IN_STRUCT_SERVICE_RULES_ELEMENT = 3680,

	/**
	 Input json string has invalid type of property : keyword, please check out #struct_keyword_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_KEYWORD_IN_STRUCT_KEYWORD_LIST_ELEMENT = 3681,

	/**
	 Input json string has invalid value of property : keyword, please check out #struct_keyword_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_KEYWORD_IN_STRUCT_KEYWORD_LIST_ELEMENT = 3682,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_content_filtering for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_CONTENT_FILTERING = 3683,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_content_filtering for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_CONTENT_FILTERING = 3684,

	/**
	 Input json string has invalid type of property : service_setting, please check out #struct_content_filtering for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_SETTING_IN_STRUCT_CONTENT_FILTERING = 3685,

	/**
	 Input json string has invalid value of property : service_setting, please check out #struct_content_filtering for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_SETTING_IN_STRUCT_CONTENT_FILTERING = 3686,

	/**
	 Input json string has invalid type of property : monday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MONDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3687,

	/**
	 Input json string has invalid value of property : monday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MONDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3688,

	/**
	 Input json string has invalid type of property : tuesday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TUESDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3689,

	/**
	 Input json string has invalid value of property : tuesday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TUESDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3690,

	/**
	 Input json string has invalid type of property : friday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FRIDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3691,

	/**
	 Input json string has invalid value of property : friday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FRIDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3692,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_NOTIFICATION_SCHEDULE = 3693,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_NOTIFICATION_SCHEDULE = 3694,

	/**
	 Input json string has invalid type of property : wednesday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WEDNESDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3695,

	/**
	 Input json string has invalid value of property : wednesday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WEDNESDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3696,

	/**
	 Input json string has invalid type of property : thursday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_THURSDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3697,

	/**
	 Input json string has invalid value of property : thursday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_THURSDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3698,

	/**
	 Input json string has invalid type of property : sunday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUNDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3699,

	/**
	 Input json string has invalid value of property : sunday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUNDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3700,

	/**
	 Input json string has invalid type of property : saturday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SATURDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3701,

	/**
	 Input json string has invalid value of property : saturday, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SATURDAY_IN_STRUCT_NOTIFICATION_SCHEDULE = 3702,

	/**
	 Input json string has invalid type of property : monday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MONDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3703,

	/**
	 Input json string has invalid value of property : monday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MONDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3704,

	/**
	 Input json string has invalid type of property : tuesday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TUESDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3705,

	/**
	 Input json string has invalid value of property : tuesday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TUESDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3706,

	/**
	 Input json string has invalid type of property : friday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FRIDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3707,

	/**
	 Input json string has invalid value of property : friday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FRIDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3708,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3709,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3710,

	/**
	 Input json string has invalid type of property : wednesday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WEDNESDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3711,

	/**
	 Input json string has invalid value of property : wednesday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WEDNESDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3712,

	/**
	 Input json string has invalid type of property : thursday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_THURSDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3713,

	/**
	 Input json string has invalid value of property : thursday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_THURSDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3714,

	/**
	 Input json string has invalid type of property : sunday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUNDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3715,

	/**
	 Input json string has invalid value of property : sunday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUNDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3716,

	/**
	 Input json string has invalid type of property : saturday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SATURDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3717,

	/**
	 Input json string has invalid value of property : saturday, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SATURDAY_IN_STRUCT_ACCESS_TIME_SCHEDULE = 3718,

	/**
	 Input json string has invalid type of property : index, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_PROFILES_ELEMENT = 3719,

	/**
	 Input json string has invalid value of property : index, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_PROFILES_ELEMENT = 3720,

	/**
	 Input json string has invalid type of property : bonus_remaining_time, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BONUS_REMAINING_TIME_IN_STRUCT_PROFILES_ELEMENT = 3721,

	/**
	 Input json string has invalid value of property : bonus_remaining_time, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BONUS_REMAINING_TIME_IN_STRUCT_PROFILES_ELEMENT = 3722,

	/**
	 name did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_profiles_element for more information.
	 */
	ZapiErrorCode_STRUCT_PROFILES_ELEMENT_NAME_PATTERN_INCORRECT = 3723,

	/**
	 name did not meet the restriction: 1..20, please check out #_struct_profiles_element for more information.
	 */
	ZapiErrorCode_STRUCT_PROFILES_ELEMENT_NAME_LENGTH_INCORRECT = 3724,

	/**
	 Input json string has invalid type of property : name, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_PROFILES_ELEMENT = 3725,

	/**
	 Input json string has invalid value of property : name, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_PROFILES_ELEMENT = 3726,

	/**
	 Input json string has invalid type of property : schedule, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SCHEDULE_IN_STRUCT_PROFILES_ELEMENT = 3727,

	/**
	 Input json string has invalid value of property : schedule, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SCHEDULE_IN_STRUCT_PROFILES_ELEMENT = 3728,

	/**
	 Input json string has invalid type in : struct_immediate_block_state, please check out #struct_immediate_block_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IMMEDIATE_BLOCK_STATE = 3729,

	/**
	 Input json string has invalid type in : struct_content_filtering, please check out #struct_content_filtering for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CONTENT_FILTERING = 3730,

	/**
	 Input json string has invalid type of property : image_path, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IMAGE_PATH_IN_STRUCT_PROFILES_ELEMENT = 3731,

	/**
	 Input json string has invalid value of property : image_path, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IMAGE_PATH_IN_STRUCT_PROFILES_ELEMENT = 3732,

	/**
	 Input json string has invalid type of property : active, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTIVE_IN_STRUCT_PROFILES_ELEMENT = 3733,

	/**
	 Input json string has invalid value of property : active, please check out #struct_profiles_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTIVE_IN_STRUCT_PROFILES_ELEMENT = 3734,

	/**
	 Input json string has invalid type in : struct_notification_schedule, please check out #struct_notification_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_NOTIFICATION_SCHEDULE = 3735,

	/**
	 Input json string has invalid type in : struct_access_time_schedule, please check out #struct_access_time_schedule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ACCESS_TIME_SCHEDULE = 3736,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_parental_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL = 3737,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_parental_control for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL = 3738,

	/**
	 Input json string has invalid type of property : index, please check out #struct_input_unblock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_INPUT_UNBLOCK = 3739,

	/**
	 Input json string has invalid value of property : index, please check out #struct_input_unblock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_INPUT_UNBLOCK = 3740,

	/**
	 Input json string has invalid type in : struct_input_unblock, please check out #struct_input_unblock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_UNBLOCK = 3741,

	/**
	 Input json string has invalid type of property : index, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_DEVICES_ELEMENT = 3742,

	/**
	 Input json string has invalid value of property : index, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_DEVICES_ELEMENT = 3743,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_DEVICES_ELEMENT = 3744,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_DEVICES_ELEMENT = 3745,

	/**
	 Input json string has invalid type of property : profile_name, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROFILE_NAME_IN_STRUCT_DEVICES_ELEMENT = 3746,

	/**
	 Input json string has invalid value of property : profile_name, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROFILE_NAME_IN_STRUCT_DEVICES_ELEMENT = 3747,

	/**
	 Input json string has invalid type of property : mode, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MODE_IN_STRUCT_DEVICES_ELEMENT = 3748,

	/**
	 Input json string has invalid value of property : mode, please check out #struct_devices_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MODE_IN_STRUCT_DEVICES_ELEMENT = 3749,

	/**
	 Input json string has invalid type in : struct_input_add_device, please check out #struct_input_add_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_ADD_DEVICE = 3750,

	/**
	 Input json string has invalid type of property : index, please check out #struct_input_remove_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_INPUT_REMOVE_DEVICE = 3751,

	/**
	 Input json string has invalid value of property : index, please check out #struct_input_remove_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_INPUT_REMOVE_DEVICE = 3752,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_input_remove_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_INPUT_REMOVE_DEVICE = 3753,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_input_remove_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_INPUT_REMOVE_DEVICE = 3754,

	/**
	 Input json string has invalid type in : struct_input_remove_device, please check out #struct_input_remove_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_REMOVE_DEVICE = 3755,

	/**
	 Input json string has invalid type of property : index, please check out #struct_input_delete_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_INPUT_DELETE_PROFILE = 3756,

	/**
	 Input json string has invalid value of property : index, please check out #struct_input_delete_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_INPUT_DELETE_PROFILE = 3757,

	/**
	 Input json string has invalid type in : struct_input_delete_profile, please check out #struct_input_delete_profile for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_DELETE_PROFILE = 3758,

	/**
	 Input json string has invalid type of property : dns_server, please check out #struct_second_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVER_IN_STRUCT_SECOND_DNS_SERVER = 3759,

	/**
	 Input json string has invalid value of property : dns_server, please check out #struct_second_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVER_IN_STRUCT_SECOND_DNS_SERVER = 3760,

	/**
	 Input json string has invalid type of property : dns_server_ip, please check out #struct_second_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DNS_SERVER_IP_IN_STRUCT_SECOND_DNS_SERVER = 3761,

	/**
	 Input json string has invalid value of property : dns_server_ip, please check out #struct_second_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DNS_SERVER_IP_IN_STRUCT_SECOND_DNS_SERVER = 3762,

	/**
	 Input json string has invalid type in : struct_second_dns_server, please check out #struct_second_dns_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_SECOND_DNS_SERVER = 3763,

	/**
	 Input json string has invalid type of property : ip, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IN_STRUCT_STATIC_IP_IP_ADDRESS = 3764,

	/**
	 Input json string has invalid value of property : ip, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IN_STRUCT_STATIC_IP_IP_ADDRESS = 3765,

	/**
	 Input json string has invalid type of property : gateway, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GATEWAY_IN_STRUCT_STATIC_IP_IP_ADDRESS = 3766,

	/**
	 Input json string has invalid value of property : gateway, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GATEWAY_IN_STRUCT_STATIC_IP_IP_ADDRESS = 3767,

	/**
	 Input json string has invalid type of property : subnet, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUBNET_IN_STRUCT_STATIC_IP_IP_ADDRESS = 3768,

	/**
	 Input json string has invalid value of property : subnet, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUBNET_IN_STRUCT_STATIC_IP_IP_ADDRESS = 3769,

	/**
	 Input json string has invalid type of property : ip_address_setting, please check out #struct_ip_address_case_Access_Point for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_ADDRESS_SETTING_IN_STRUCT_IP_ADDRESS_CASE_ACCESS_POINT = 3770,

	/**
	 Input json string has invalid value of property : ip_address_setting, please check out #struct_ip_address_case_Access_Point for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_ADDRESS_SETTING_IN_STRUCT_IP_ADDRESS_CASE_ACCESS_POINT = 3771,

	/**
	 Input json string has invalid type in : struct_static_ip_ip_address, please check out #struct_static_ip_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_STATIC_IP_IP_ADDRESS = 3772,

	/**
	 Input json string has invalid type in : struct_ipv4_dns_server_case_Access_Point, please check out #struct_ipv4_dns_server_case_Access_Point for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IPV4_DNS_SERVER_CASE_ACCESS_POINT = 3773,

	/**
	 Input json string has invalid type in : struct_ip_address_case_Access_Point, please check out #struct_ip_address_case_Access_Point for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IP_ADDRESS_CASE_ACCESS_POINT = 3774,

	/**
	 Input json string has invalid type of property : pool_size, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_POOL_SIZE_IN_STRUCT_DHCP_SERVER = 3775,

	/**
	 Input json string has invalid value of property : pool_size, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_POOL_SIZE_IN_STRUCT_DHCP_SERVER = 3776,

	/**
	 Input json string has invalid type of property : pool_starting_address, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_POOL_STARTING_ADDRESS_IN_STRUCT_DHCP_SERVER = 3777,

	/**
	 Input json string has invalid value of property : pool_starting_address, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_POOL_STARTING_ADDRESS_IN_STRUCT_DHCP_SERVER = 3778,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_DHCP_SERVER = 3779,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_DHCP_SERVER = 3780,

	/**
	 Input json string has invalid type of property : name, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_DHCP_SERVER = 3781,

	/**
	 Input json string has invalid value of property : name, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_DHCP_SERVER = 3782,

	/**
	 Input json string has invalid type of property : ip, please check out #struct_static_dhcp_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IN_STRUCT_STATIC_DHCP_TABLE_ELEMENT = 3783,

	/**
	 Input json string has invalid value of property : ip, please check out #struct_static_dhcp_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IN_STRUCT_STATIC_DHCP_TABLE_ELEMENT = 3784,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_static_dhcp_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_STATIC_DHCP_TABLE_ELEMENT = 3785,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_static_dhcp_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_STATIC_DHCP_TABLE_ELEMENT = 3786,

	/**
	 Input json string has invalid type of property : start, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_START_IN_STRUCT_IPV6_ADDRESS_RANGE = 3787,

	/**
	 Input json string has invalid value of property : start, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_START_IN_STRUCT_IPV6_ADDRESS_RANGE = 3788,

	/**
	 Input json string has invalid type of property : end, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_END_IN_STRUCT_IPV6_ADDRESS_RANGE = 3789,

	/**
	 Input json string has invalid value of property : end, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_END_IN_STRUCT_IPV6_ADDRESS_RANGE = 3790,

	/**
	 Input json string has invalid type of property : lifetime, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LIFETIME_IN_STRUCT_IPV6_ADDRESS_RANGE = 3791,

	/**
	 Input json string has invalid value of property : lifetime, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LIFETIME_IN_STRUCT_IPV6_ADDRESS_RANGE = 3792,

	/**
	 Input json string has invalid type of property : autoconfiguration_type, please check out #struct_enable_dhcpv6_pd for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTOCONFIGURATION_TYPE_IN_STRUCT_ENABLE_DHCPV6_PD = 3793,

	/**
	 Input json string has invalid value of property : autoconfiguration_type, please check out #struct_enable_dhcpv6_pd for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTOCONFIGURATION_TYPE_IN_STRUCT_ENABLE_DHCPV6_PD = 3794,

	/**
	 Input json string has invalid type in : struct_ipv6_address_range, please check out #struct_ipv6_address_range for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_IPV6_ADDRESS_RANGE = 3795,

	/**
	 Input json string has invalid type of property : prefix_preferred_lifetime, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFIX_PREFERRED_LIFETIME_IN_STRUCT_STATIC_IP_ADDRESS = 3796,

	/**
	 Input json string has invalid value of property : prefix_preferred_lifetime, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFIX_PREFERRED_LIFETIME_IN_STRUCT_STATIC_IP_ADDRESS = 3797,

	/**
	 lan_ipv6_prefix_length did not meet the restriction: 48..64, please check out #_struct_static_ip_address for more information.
	 */
	ZapiErrorCode_STRUCT_STATIC_IP_ADDRESS_LAN_IPV6_PREFIX_LENGTH_RANGE_INCORRECT = 3798,

	/**
	 Input json string has invalid type of property : lan_ipv6_prefix_length, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LAN_IPV6_PREFIX_LENGTH_IN_STRUCT_STATIC_IP_ADDRESS = 3799,

	/**
	 Input json string has invalid value of property : lan_ipv6_prefix_length, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LAN_IPV6_PREFIX_LENGTH_IN_STRUCT_STATIC_IP_ADDRESS = 3800,

	/**
	 Input json string has invalid type of property : prefix_valid_lifetime, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFIX_VALID_LIFETIME_IN_STRUCT_STATIC_IP_ADDRESS = 3801,

	/**
	 Input json string has invalid value of property : prefix_valid_lifetime, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFIX_VALID_LIFETIME_IN_STRUCT_STATIC_IP_ADDRESS = 3802,

	/**
	 Input json string has invalid type of property : lan_ipv6_address, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LAN_IPV6_ADDRESS_IN_STRUCT_STATIC_IP_ADDRESS = 3803,

	/**
	 Input json string has invalid value of property : lan_ipv6_address, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LAN_IPV6_ADDRESS_IN_STRUCT_STATIC_IP_ADDRESS = 3804,

	/**
	 Input json string has invalid type of property : assignment, please check out #struct_lan_ipv6_address_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ASSIGNMENT_IN_STRUCT_LAN_IPV6_ADDRESS_ASSIGNMENT = 3805,

	/**
	 Input json string has invalid value of property : assignment, please check out #struct_lan_ipv6_address_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ASSIGNMENT_IN_STRUCT_LAN_IPV6_ADDRESS_ASSIGNMENT = 3806,

	/**
	 Input json string has invalid type in : struct_enable_dhcpv6_pd, please check out #struct_enable_dhcpv6_pd for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ENABLE_DHCPV6_PD = 3807,

	/**
	 Input json string has invalid type of property : minimum_ra_period, please check out #struct_lan_ipv6_address_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MINIMUM_RA_PERIOD_IN_STRUCT_LAN_IPV6_ADDRESS_ASSIGNMENT = 3808,

	/**
	 Input json string has invalid value of property : minimum_ra_period, please check out #struct_lan_ipv6_address_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MINIMUM_RA_PERIOD_IN_STRUCT_LAN_IPV6_ADDRESS_ASSIGNMENT = 3809,

	/**
	 Input json string has invalid type in : struct_static_ip_address, please check out #struct_static_ip_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_STATIC_IP_ADDRESS = 3810,

	/**
	 Input json string has invalid type of property : ip, please check out #struct_lan_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IN_STRUCT_LAN_IP = 3811,

	/**
	 Input json string has invalid value of property : ip, please check out #struct_lan_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IN_STRUCT_LAN_IP = 3812,

	/**
	 Input json string has invalid type of property : subnet, please check out #struct_lan_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUBNET_IN_STRUCT_LAN_IP = 3813,

	/**
	 Input json string has invalid value of property : subnet, please check out #struct_lan_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUBNET_IN_STRUCT_LAN_IP = 3814,

	/**
	 Input json string has invalid type in : struct_dhcp_server, please check out #struct_dhcp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_DHCP_SERVER = 3815,

	/**
	 Input json string has invalid type in : struct_static_dhcp, please check out #struct_static_dhcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_STATIC_DHCP = 3816,

	/**
	 Input json string has invalid type in : struct_lan_ipv6_address_assignment, please check out #struct_lan_ipv6_address_assignment for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_LAN_IPV6_ADDRESS_ASSIGNMENT = 3817,

	/**
	 Input json string has invalid type in : struct_lan_ip, please check out #struct_lan_ip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_LAN_IP = 3818,

	/**
	 Input json string has invalid type in : struct_case_Access_Point, please check out #struct_case_Access_Point for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_ACCESS_POINT = 3819,

	/**
	 Input json string has invalid type in : struct_case_Router, please check out #struct_case_Router for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_ROUTER = 3820,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_opmode for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_OPMODE = 3821,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_opmode for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_OPMODE = 3822,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_network_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_NETWORK_ELEMENT = 3823,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_network_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_NETWORK_ELEMENT = 3824,

	/**
	 Input json string has invalid type of property : name, please check out #struct_network_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_NETWORK_ELEMENT = 3825,

	/**
	 Input json string has invalid value of property : name, please check out #struct_network_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_NETWORK_ELEMENT = 3826,

	/**
	 Input json string has invalid type in : struct_opmode, please check out #struct_opmode for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OPMODE = 3827,

	/**
	 Input json string has invalid type of property : base_interface, please check out #struct_network_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BASE_INTERFACE_IN_STRUCT_NETWORK_ELEMENT = 3828,

	/**
	 Input json string has invalid value of property : base_interface, please check out #struct_network_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BASE_INTERFACE_IN_STRUCT_NETWORK_ELEMENT = 3829,

	/**
	 Input json string has invalid type of property : current_datetime, please check out #struct_input_set_current_datetime for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_DATETIME_IN_STRUCT_INPUT_SET_CURRENT_DATETIME = 3830,

	/**
	 Input json string has invalid value of property : current_datetime, please check out #struct_input_set_current_datetime for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_DATETIME_IN_STRUCT_INPUT_SET_CURRENT_DATETIME = 3831,

	/**
	 Input json string has invalid type in : struct_input_set_current_datetime, please check out #struct_input_set_current_datetime for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SET_CURRENT_DATETIME = 3832,

	/**
	 Input json string has invalid type of property : password, please check out #struct_input_system_factory_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_INPUT_SYSTEM_FACTORY_PASSWORD = 3833,

	/**
	 Input json string has invalid value of property : password, please check out #struct_input_system_factory_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_INPUT_SYSTEM_FACTORY_PASSWORD = 3834,

	/**
	 Input json string has invalid type in : struct_input_system_factory_password, please check out #struct_input_system_factory_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SYSTEM_FACTORY_PASSWORD = 3835,

	/**
	 Input json string has invalid type of property : config, please check out #struct_output_system_config_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CONFIG_IN_STRUCT_OUTPUT_SYSTEM_CONFIG_UPLOAD = 3836,

	/**
	 Input json string has invalid value of property : config, please check out #struct_output_system_config_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CONFIG_IN_STRUCT_OUTPUT_SYSTEM_CONFIG_UPLOAD = 3837,

	/**
	 Input json string has invalid type in : struct_output_system_config_upload, please check out #struct_output_system_config_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_SYSTEM_CONFIG_UPLOAD = 3838,

	/**
	 Input json string has invalid type of property : turn_on, please check out #struct_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TURN_ON_IN_STRUCT_LED = 3839,

	/**
	 Input json string has invalid value of property : turn_on, please check out #struct_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TURN_ON_IN_STRUCT_LED = 3840,

	/**
	 Input json string has invalid type of property : timezone_name, please check out #struct_case_timezone_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMEZONE_NAME_IN_STRUCT_CASE_TIMEZONE_NAME = 3841,

	/**
	 Input json string has invalid value of property : timezone_name, please check out #struct_case_timezone_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMEZONE_NAME_IN_STRUCT_CASE_TIMEZONE_NAME = 3842,

	/**
	 Input json string has invalid type of property : index, please check out #struct_case_timezone_utc_offset for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_CASE_TIMEZONE_UTC_OFFSET = 3843,

	/**
	 Input json string has invalid value of property : index, please check out #struct_case_timezone_utc_offset for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_CASE_TIMEZONE_UTC_OFFSET = 3844,

	/**
	 timezone_utc_offset did not meet the restriction: -1500 .. 1500, please check out #_struct_case_timezone_utc_offset for more information.
	 */
	ZapiErrorCode_STRUCT_CASE_TIMEZONE_UTC_OFFSET_TIMEZONE_UTC_OFFSET_RANGE_INCORRECT = 3845,

	/**
	 Input json string has invalid type of property : timezone_utc_offset, please check out #struct_case_timezone_utc_offset for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMEZONE_UTC_OFFSET_IN_STRUCT_CASE_TIMEZONE_UTC_OFFSET = 3846,

	/**
	 Input json string has invalid value of property : timezone_utc_offset, please check out #struct_case_timezone_utc_offset for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMEZONE_UTC_OFFSET_IN_STRUCT_CASE_TIMEZONE_UTC_OFFSET = 3847,

	/**
	 Input json string has invalid type in : struct_case_timezone_name, please check out #struct_case_timezone_name for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_TIMEZONE_NAME = 3848,

	/**
	 Input json string has invalid type in : struct_case_timezone_utc_offset, please check out #struct_case_timezone_utc_offset for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_TIMEZONE_UTC_OFFSET = 3849,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_timezone for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_TIMEZONE = 3850,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_timezone for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_TIMEZONE = 3851,

	/**
	 Input json string has invalid type in : struct_timezone, please check out #struct_timezone for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_TIMEZONE = 3852,

	/**
	 Input json string has invalid type of property : time_setting, please check out #struct_clock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIME_SETTING_IN_STRUCT_CLOCK = 3853,

	/**
	 Input json string has invalid value of property : time_setting, please check out #struct_clock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIME_SETTING_IN_STRUCT_CLOCK = 3854,

	/**
	 Input json string has invalid type of property : mode, please check out #struct_clock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MODE_IN_STRUCT_CLOCK = 3855,

	/**
	 Input json string has invalid value of property : mode, please check out #struct_clock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MODE_IN_STRUCT_CLOCK = 3856,

	/**
	 Input json string has invalid type of property : union_of_inet_domain_name, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_DOMAIN_NAME_IN_STRUCT_ADDRESS = 3857,

	/**
	 Input json string has invalid value of property : union_of_inet_domain_name, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_DOMAIN_NAME_IN_STRUCT_ADDRESS = 3858,

	/**
	 Input json string has invalid type of property : union_of_inet_ipv4_address, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_IPV4_ADDRESS_IN_STRUCT_ADDRESS = 3859,

	/**
	 Input json string has invalid value of property : union_of_inet_ipv4_address, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_IPV4_ADDRESS_IN_STRUCT_ADDRESS = 3860,

	/**
	 Input json string has invalid type of property : union_of_inet_ipv6_address, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_IPV6_ADDRESS_IN_STRUCT_ADDRESS = 3861,

	/**
	 Input json string has invalid value of property : union_of_inet_ipv6_address, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_IPV6_ADDRESS_IN_STRUCT_ADDRESS = 3862,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_ADDRESS = 3863,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_ADDRESS = 3864,

	/**
	 Input json string has invalid type of property : port, please check out #struct_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PORT_IN_STRUCT_UDP = 3865,

	/**
	 Input json string has invalid value of property : port, please check out #struct_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PORT_IN_STRUCT_UDP = 3866,

	/**
	 Input json string has invalid type in : struct_address, please check out #struct_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ADDRESS = 3867,

	/**
	 Input json string has invalid type in : struct_udp, please check out #struct_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_UDP = 3868,

	/**
	 Input json string has invalid type in : struct_case_udp, please check out #struct_case_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_UDP = 3869,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_transport for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_TRANSPORT = 3870,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_transport for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_TRANSPORT = 3871,

	/**
	 Input json string has invalid type of property : name, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_SERVER_ELEMENT = 3872,

	/**
	 Input json string has invalid value of property : name, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_SERVER_ELEMENT = 3873,

	/**
	 Input json string has invalid type of property : prefer, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFER_IN_STRUCT_SERVER_ELEMENT = 3874,

	/**
	 Input json string has invalid value of property : prefer, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFER_IN_STRUCT_SERVER_ELEMENT = 3875,

	/**
	 Input json string has invalid type of property : association_type, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ASSOCIATION_TYPE_IN_STRUCT_SERVER_ELEMENT = 3876,

	/**
	 Input json string has invalid value of property : association_type, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ASSOCIATION_TYPE_IN_STRUCT_SERVER_ELEMENT = 3877,

	/**
	 Input json string has invalid type of property : iburst, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IBURST_IN_STRUCT_SERVER_ELEMENT = 3878,

	/**
	 Input json string has invalid value of property : iburst, please check out #struct_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IBURST_IN_STRUCT_SERVER_ELEMENT = 3879,

	/**
	 Input json string has invalid type in : struct_transport, please check out #struct_transport for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_TRANSPORT = 3880,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_ntp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_NTP = 3881,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_ntp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_NTP = 3882,

	/**
	 Input json string has invalid type of property : hostname, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HOSTNAME_IN_STRUCT_GENERAL = 3883,

	/**
	 Input json string has invalid value of property : hostname, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HOSTNAME_IN_STRUCT_GENERAL = 3884,

	/**
	 Input json string has invalid type of property : administrator_inactivity_timer, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ADMINISTRATOR_INACTIVITY_TIMER_IN_STRUCT_GENERAL = 3885,

	/**
	 Input json string has invalid value of property : administrator_inactivity_timer, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ADMINISTRATOR_INACTIVITY_TIMER_IN_STRUCT_GENERAL = 3886,

	/**
	 system_name did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_general for more information.
	 */
	ZapiErrorCode_STRUCT_GENERAL_SYSTEM_NAME_PATTERN_INCORRECT = 3887,

	/**
	 system_name did not meet the restriction: 1..20, please check out #_struct_general for more information.
	 */
	ZapiErrorCode_STRUCT_GENERAL_SYSTEM_NAME_LENGTH_INCORRECT = 3888,

	/**
	 Input json string has invalid type of property : system_name, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SYSTEM_NAME_IN_STRUCT_GENERAL = 3889,

	/**
	 Input json string has invalid value of property : system_name, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SYSTEM_NAME_IN_STRUCT_GENERAL = 3890,

	/**
	 Input json string has invalid type of property : location, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LOCATION_IN_STRUCT_GENERAL = 3891,

	/**
	 Input json string has invalid value of property : location, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LOCATION_IN_STRUCT_GENERAL = 3892,

	/**
	 Input json string has invalid type of property : key_data, please check out #struct_authorized_key_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_KEY_DATA_IN_STRUCT_AUTHORIZED_KEY_ELEMENT = 3893,

	/**
	 Input json string has invalid value of property : key_data, please check out #struct_authorized_key_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_KEY_DATA_IN_STRUCT_AUTHORIZED_KEY_ELEMENT = 3894,

	/**
	 Input json string has invalid type of property : name, please check out #struct_authorized_key_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_AUTHORIZED_KEY_ELEMENT = 3895,

	/**
	 Input json string has invalid value of property : name, please check out #struct_authorized_key_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_AUTHORIZED_KEY_ELEMENT = 3896,

	/**
	 Input json string has invalid type of property : algorithm, please check out #struct_authorized_key_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALGORITHM_IN_STRUCT_AUTHORIZED_KEY_ELEMENT = 3897,

	/**
	 Input json string has invalid value of property : algorithm, please check out #struct_authorized_key_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALGORITHM_IN_STRUCT_AUTHORIZED_KEY_ELEMENT = 3898,

	/**
	 Input json string has invalid type of property : password, please check out #struct_user_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_USER_ELEMENT = 3899,

	/**
	 Input json string has invalid value of property : password, please check out #struct_user_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_USER_ELEMENT = 3900,

	/**
	 Input json string has invalid type of property : name, please check out #struct_user_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_USER_ELEMENT = 3901,

	/**
	 Input json string has invalid value of property : name, please check out #struct_user_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_USER_ELEMENT = 3902,

	/**
	 attempts did not meet the restriction: 1..max, please check out #_struct_options for more information.
	 */
	ZapiErrorCode_STRUCT_OPTIONS_ATTEMPTS_RANGE_INCORRECT = 3903,

	/**
	 Input json string has invalid type of property : attempts, please check out #struct_options for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ATTEMPTS_IN_STRUCT_OPTIONS = 3904,

	/**
	 Input json string has invalid value of property : attempts, please check out #struct_options for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ATTEMPTS_IN_STRUCT_OPTIONS = 3905,

	/**
	 timeout did not meet the restriction: 1..max, please check out #_struct_options for more information.
	 */
	ZapiErrorCode_STRUCT_OPTIONS_TIMEOUT_RANGE_INCORRECT = 3906,

	/**
	 Input json string has invalid type of property : timeout, please check out #struct_options for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMEOUT_IN_STRUCT_OPTIONS = 3907,

	/**
	 Input json string has invalid value of property : timeout, please check out #struct_options for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMEOUT_IN_STRUCT_OPTIONS = 3908,

	/**
	 Input json string has invalid type of property : shared_secret, please check out #struct_udp_case_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SHARED_SECRET_IN_STRUCT_UDP_CASE_UDP = 3909,

	/**
	 Input json string has invalid value of property : shared_secret, please check out #struct_udp_case_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SHARED_SECRET_IN_STRUCT_UDP_CASE_UDP = 3910,

	/**
	 Input json string has invalid type of property : authentication_port, please check out #struct_udp_case_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTHENTICATION_PORT_IN_STRUCT_UDP_CASE_UDP = 3911,

	/**
	 Input json string has invalid value of property : authentication_port, please check out #struct_udp_case_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTHENTICATION_PORT_IN_STRUCT_UDP_CASE_UDP = 3912,

	/**
	 Input json string has invalid type in : struct_udp_case_udp, please check out #struct_udp_case_udp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_UDP_CASE_UDP = 3913,

	/**
	 Input json string has invalid type in : struct_case_udp_transport, please check out #struct_case_udp_transport for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_UDP_TRANSPORT = 3914,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_transport_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_TRANSPORT_SERVER_ELEMENT = 3915,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_transport_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_TRANSPORT_SERVER_ELEMENT = 3916,

	/**
	 Input json string has invalid type of property : authentication_type, please check out #struct_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTHENTICATION_TYPE_IN_STRUCT_SERVER_ELEMENT_SERVER = 3917,

	/**
	 Input json string has invalid value of property : authentication_type, please check out #struct_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTHENTICATION_TYPE_IN_STRUCT_SERVER_ELEMENT_SERVER = 3918,

	/**
	 Input json string has invalid type of property : name, please check out #struct_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_SERVER_ELEMENT_SERVER = 3919,

	/**
	 Input json string has invalid value of property : name, please check out #struct_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_SERVER_ELEMENT_SERVER = 3920,

	/**
	 Input json string has invalid type in : struct_transport_server_element, please check out #struct_transport_server_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_TRANSPORT_SERVER_ELEMENT = 3921,

	/**
	 Input json string has invalid type in : struct_options, please check out #struct_options for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OPTIONS = 3922,

	/**
	 Input json string has invalid type of property : union_of_inet_ipv4_address, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_IPV4_ADDRESS_IN_STRUCT_CLIENT_ADDRESS = 3923,

	/**
	 Input json string has invalid value of property : union_of_inet_ipv4_address, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_IPV4_ADDRESS_IN_STRUCT_CLIENT_ADDRESS = 3924,

	/**
	 Input json string has invalid type of property : union_of_inet_ipv6_address, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_IPV6_ADDRESS_IN_STRUCT_CLIENT_ADDRESS = 3925,

	/**
	 Input json string has invalid value of property : union_of_inet_ipv6_address, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_IPV6_ADDRESS_IN_STRUCT_CLIENT_ADDRESS = 3926,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_CLIENT_ADDRESS = 3927,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_CLIENT_ADDRESS = 3928,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3929,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3930,

	/**
	 Input json string has invalid type of property : name, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3931,

	/**
	 Input json string has invalid value of property : name, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3932,

	/**
	 Input json string has invalid type of property : client_check, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLIENT_CHECK_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3933,

	/**
	 Input json string has invalid value of property : client_check, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLIENT_CHECK_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3934,

	/**
	 Input json string has invalid type of property : interfaceList, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACELIST_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3935,

	/**
	 Input json string has invalid value of property : interfaceList, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACELIST_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3936,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3937,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3938,

	/**
	 Input json string has invalid type in : struct_client_address, please check out #struct_client_address for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CLIENT_ADDRESS = 3939,

	/**
	 Input json string has invalid type of property : port, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PORT_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3940,

	/**
	 Input json string has invalid value of property : port, please check out #struct_remote_access_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PORT_IN_STRUCT_REMOTE_ACCESS_ELEMENT = 3941,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_mac_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_MAC_LIST_ELEMENT = 3942,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_mac_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_MAC_LIST_ELEMENT = 3943,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_wake_on_lan_over_wan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_WAKE_ON_LAN_OVER_WAN = 3944,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_wake_on_lan_over_wan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_WAKE_ON_LAN_OVER_WAN = 3945,

	/**
	 Input json string has invalid type of property : port, please check out #struct_wake_on_lan_over_wan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PORT_IN_STRUCT_WAKE_ON_LAN_OVER_WAN = 3946,

	/**
	 Input json string has invalid value of property : port, please check out #struct_wake_on_lan_over_wan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PORT_IN_STRUCT_WAKE_ON_LAN_OVER_WAN = 3947,

	/**
	 Input json string has invalid type in : struct_wake_on_lan_over_wan, please check out #struct_wake_on_lan_over_wan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_WAKE_ON_LAN_OVER_WAN = 3948,

	/**
	 attempts did not meet the restriction: 1..max, please check out #_struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_STRUCT_OPTIONS_DNS_RESOLVER_ATTEMPTS_RANGE_INCORRECT = 3949,

	/**
	 Input json string has invalid type of property : attempts, please check out #struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ATTEMPTS_IN_STRUCT_OPTIONS_DNS_RESOLVER = 3950,

	/**
	 Input json string has invalid value of property : attempts, please check out #struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ATTEMPTS_IN_STRUCT_OPTIONS_DNS_RESOLVER = 3951,

	/**
	 timeout did not meet the restriction: 1..max, please check out #_struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_STRUCT_OPTIONS_DNS_RESOLVER_TIMEOUT_RANGE_INCORRECT = 3952,

	/**
	 Input json string has invalid type of property : timeout, please check out #struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMEOUT_IN_STRUCT_OPTIONS_DNS_RESOLVER = 3953,

	/**
	 Input json string has invalid value of property : timeout, please check out #struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMEOUT_IN_STRUCT_OPTIONS_DNS_RESOLVER = 3954,

	/**
	 Input json string has invalid type of property : union_of_inet_ipv4_address, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_IPV4_ADDRESS_IN_STRUCT_ADDRESS_UDP_AND_TCP = 3955,

	/**
	 Input json string has invalid value of property : union_of_inet_ipv4_address, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_IPV4_ADDRESS_IN_STRUCT_ADDRESS_UDP_AND_TCP = 3956,

	/**
	 Input json string has invalid type of property : union_of_inet_ipv6_address, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UNION_OF_INET_IPV6_ADDRESS_IN_STRUCT_ADDRESS_UDP_AND_TCP = 3957,

	/**
	 Input json string has invalid value of property : union_of_inet_ipv6_address, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UNION_OF_INET_IPV6_ADDRESS_IN_STRUCT_ADDRESS_UDP_AND_TCP = 3958,

	/**
	 Input json string has invalid type of property : current_union_item, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_UNION_ITEM_IN_STRUCT_ADDRESS_UDP_AND_TCP = 3959,

	/**
	 Input json string has invalid value of property : current_union_item, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_UNION_ITEM_IN_STRUCT_ADDRESS_UDP_AND_TCP = 3960,

	/**
	 Input json string has invalid type of property : port, please check out #struct_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PORT_IN_STRUCT_UDP_AND_TCP = 3961,

	/**
	 Input json string has invalid value of property : port, please check out #struct_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PORT_IN_STRUCT_UDP_AND_TCP = 3962,

	/**
	 Input json string has invalid type in : struct_address_udp_and_tcp, please check out #struct_address_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_ADDRESS_UDP_AND_TCP = 3963,

	/**
	 Input json string has invalid type in : struct_udp_and_tcp, please check out #struct_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_UDP_AND_TCP = 3964,

	/**
	 Input json string has invalid type in : struct_case_udp_and_tcp, please check out #struct_case_udp_and_tcp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CASE_UDP_AND_TCP = 3965,

	/**
	 Input json string has invalid type of property : current_case, please check out #struct_transport_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_CASE_IN_STRUCT_TRANSPORT_SERVER_ELEMENT_SERVER = 3966,

	/**
	 Input json string has invalid value of property : current_case, please check out #struct_transport_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_CASE_IN_STRUCT_TRANSPORT_SERVER_ELEMENT_SERVER = 3967,

	/**
	 Input json string has invalid type of property : name, please check out #struct_server_element_server_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_SERVER_ELEMENT_SERVER_DNS_RESOLVER = 3968,

	/**
	 Input json string has invalid value of property : name, please check out #struct_server_element_server_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_SERVER_ELEMENT_SERVER_DNS_RESOLVER = 3969,

	/**
	 Input json string has invalid type in : struct_transport_server_element_server, please check out #struct_transport_server_element_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_TRANSPORT_SERVER_ELEMENT_SERVER = 3970,

	/**
	 Input json string has invalid type in : struct_options_dns_resolver, please check out #struct_options_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OPTIONS_DNS_RESOLVER = 3971,

	/**
	 new_password did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_set_root_password for more information.
	 */
	ZapiErrorCode_STRUCT_SET_ROOT_PASSWORD_NEW_PASSWORD_PATTERN_INCORRECT = 3972,

	/**
	 new_password did not meet the restriction: 4..30, please check out #_struct_set_root_password for more information.
	 */
	ZapiErrorCode_STRUCT_SET_ROOT_PASSWORD_NEW_PASSWORD_LENGTH_INCORRECT = 3973,

	/**
	 Input json string has invalid type of property : new_password, please check out #struct_set_root_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NEW_PASSWORD_IN_STRUCT_SET_ROOT_PASSWORD = 3974,

	/**
	 Input json string has invalid value of property : new_password, please check out #struct_set_root_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NEW_PASSWORD_IN_STRUCT_SET_ROOT_PASSWORD = 3975,

	/**
	 current_password did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_set_root_password for more information.
	 */
	ZapiErrorCode_STRUCT_SET_ROOT_PASSWORD_CURRENT_PASSWORD_PATTERN_INCORRECT = 3976,

	/**
	 current_password did not meet the restriction: 4..30, please check out #_struct_set_root_password for more information.
	 */
	ZapiErrorCode_STRUCT_SET_ROOT_PASSWORD_CURRENT_PASSWORD_LENGTH_INCORRECT = 3977,

	/**
	 Input json string has invalid type of property : current_password, please check out #struct_set_root_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_PASSWORD_IN_STRUCT_SET_ROOT_PASSWORD = 3978,

	/**
	 Input json string has invalid value of property : current_password, please check out #struct_set_root_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_PASSWORD_IN_STRUCT_SET_ROOT_PASSWORD = 3979,

	/**
	 Input json string has invalid type of property : start_num, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_START_NUM_IN_STRUCT_DAYLIGHT_SAVINGS = 3980,

	/**
	 Input json string has invalid value of property : start_num, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_START_NUM_IN_STRUCT_DAYLIGHT_SAVINGS = 3981,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_DAYLIGHT_SAVINGS = 3982,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_DAYLIGHT_SAVINGS = 3983,

	/**
	 Input json string has invalid type of property : end_month, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_END_MONTH_IN_STRUCT_DAYLIGHT_SAVINGS = 3984,

	/**
	 Input json string has invalid value of property : end_month, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_END_MONTH_IN_STRUCT_DAYLIGHT_SAVINGS = 3985,

	/**
	 Input json string has invalid type of property : end_monthday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_END_MONTHDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 3986,

	/**
	 Input json string has invalid value of property : end_monthday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_END_MONTHDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 3987,

	/**
	 Input json string has invalid type of property : end_weekday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_END_WEEKDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 3988,

	/**
	 Input json string has invalid value of property : end_weekday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_END_WEEKDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 3989,

	/**
	 Input json string has invalid type of property : end_clock, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_END_CLOCK_IN_STRUCT_DAYLIGHT_SAVINGS = 3990,

	/**
	 Input json string has invalid value of property : end_clock, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_END_CLOCK_IN_STRUCT_DAYLIGHT_SAVINGS = 3991,

	/**
	 Input json string has invalid type of property : start_month, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_START_MONTH_IN_STRUCT_DAYLIGHT_SAVINGS = 3992,

	/**
	 Input json string has invalid value of property : start_month, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_START_MONTH_IN_STRUCT_DAYLIGHT_SAVINGS = 3993,

	/**
	 Input json string has invalid type of property : end_num, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_END_NUM_IN_STRUCT_DAYLIGHT_SAVINGS = 3994,

	/**
	 Input json string has invalid value of property : end_num, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_END_NUM_IN_STRUCT_DAYLIGHT_SAVINGS = 3995,

	/**
	 Input json string has invalid type of property : start_weekday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_START_WEEKDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 3996,

	/**
	 Input json string has invalid value of property : start_weekday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_START_WEEKDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 3997,

	/**
	 Input json string has invalid type of property : start_clock, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_START_CLOCK_IN_STRUCT_DAYLIGHT_SAVINGS = 3998,

	/**
	 Input json string has invalid value of property : start_clock, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_START_CLOCK_IN_STRUCT_DAYLIGHT_SAVINGS = 3999,

	/**
	 Input json string has invalid type of property : start_monthday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_START_MONTHDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 4000,

	/**
	 Input json string has invalid value of property : start_monthday, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_START_MONTHDAY_IN_STRUCT_DAYLIGHT_SAVINGS = 4001,

	/**
	 Input json string has invalid type of property : username, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USERNAME_IN_STRUCT_USER_ELEMENT_USER = 4002,

	/**
	 Input json string has invalid value of property : username, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USERNAME_IN_STRUCT_USER_ELEMENT_USER = 4003,

	/**
	 Input json string has invalid type of property : password, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_USER_ELEMENT_USER = 4004,

	/**
	 Input json string has invalid value of property : password, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_USER_ELEMENT_USER = 4005,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_USER_ELEMENT_USER = 4006,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_USER_ELEMENT_USER = 4007,

	/**
	 Input json string has invalid type of property : access_privilege, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCESS_PRIVILEGE_IN_STRUCT_USER_ELEMENT_USER = 4008,

	/**
	 Input json string has invalid value of property : access_privilege, please check out #struct_user_element_user for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCESS_PRIVILEGE_IN_STRUCT_USER_ELEMENT_USER = 4009,

	/**
	 Input json string has invalid type in : struct_led, please check out #struct_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_LED = 4010,

	/**
	 Input json string has invalid type in : struct_clock, please check out #struct_clock for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CLOCK = 4011,

	/**
	 Input json string has invalid type in : struct_ntp, please check out #struct_ntp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_NTP = 4012,

	/**
	 Input json string has invalid type in : struct_general, please check out #struct_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_GENERAL = 4013,

	/**
	 Input json string has invalid type in : struct_authentication, please check out #struct_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_AUTHENTICATION = 4014,

	/**
	 Input json string has invalid type of property : contact, please check out #struct_system for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CONTACT_IN_STRUCT_SYSTEM = 4015,

	/**
	 Input json string has invalid value of property : contact, please check out #struct_system for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CONTACT_IN_STRUCT_SYSTEM = 4016,

	/**
	 Input json string has invalid type in : struct_radius, please check out #struct_radius for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_RADIUS = 4017,

	/**
	 Input json string has invalid type in : struct_remote_management, please check out #struct_remote_management for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_REMOTE_MANAGEMENT = 4018,

	/**
	 Input json string has invalid type in : struct_dns_resolver, please check out #struct_dns_resolver for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_DNS_RESOLVER = 4019,

	/**
	 Input json string has invalid type in : struct_set_root_password, please check out #struct_set_root_password for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_SET_ROOT_PASSWORD = 4020,

	/**
	 Input json string has invalid type in : struct_daylight_savings, please check out #struct_daylight_savings for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_DAYLIGHT_SAVINGS = 4021,

	/**
	 Input json string has invalid type in : struct_users, please check out #struct_users for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_USERS = 4022,

	/**
	 memory did not meet the restriction: 0..100, please check out #_struct_usage for more information.
	 */
	ZapiErrorCode_STRUCT_USAGE_MEMORY_RANGE_INCORRECT = 4023,

	/**
	 Input json string has invalid type of property : memory, please check out #struct_usage for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MEMORY_IN_STRUCT_USAGE = 4024,

	/**
	 Input json string has invalid value of property : memory, please check out #struct_usage for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MEMORY_IN_STRUCT_USAGE = 4025,

	/**
	 cpu did not meet the restriction: 0..100, please check out #_struct_usage for more information.
	 */
	ZapiErrorCode_STRUCT_USAGE_CPU_RANGE_INCORRECT = 4026,

	/**
	 Input json string has invalid type of property : cpu, please check out #struct_usage for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CPU_IN_STRUCT_USAGE = 4027,

	/**
	 Input json string has invalid value of property : cpu, please check out #struct_usage for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CPU_IN_STRUCT_USAGE = 4028,

	/**
	 Input json string has invalid type of property : machine, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MACHINE_IN_STRUCT_PLATFORM = 4029,

	/**
	 Input json string has invalid value of property : machine, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MACHINE_IN_STRUCT_PLATFORM = 4030,

	/**
	 Input json string has invalid type of property : software_version, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOFTWARE_VERSION_IN_STRUCT_PLATFORM = 4031,

	/**
	 Input json string has invalid value of property : software_version, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOFTWARE_VERSION_IN_STRUCT_PLATFORM = 4032,

	/**
	 Input json string has invalid type of property : os_release, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OS_RELEASE_IN_STRUCT_PLATFORM = 4033,

	/**
	 Input json string has invalid value of property : os_release, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OS_RELEASE_IN_STRUCT_PLATFORM = 4034,

	/**
	 Input json string has invalid type of property : serial_number, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERIAL_NUMBER_IN_STRUCT_PLATFORM = 4035,

	/**
	 Input json string has invalid value of property : serial_number, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERIAL_NUMBER_IN_STRUCT_PLATFORM = 4036,

	/**
	 Input json string has invalid type of property : os_version, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OS_VERSION_IN_STRUCT_PLATFORM = 4037,

	/**
	 Input json string has invalid value of property : os_version, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OS_VERSION_IN_STRUCT_PLATFORM = 4038,

	/**
	 Input json string has invalid type of property : os_name, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OS_NAME_IN_STRUCT_PLATFORM = 4039,

	/**
	 Input json string has invalid value of property : os_name, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OS_NAME_IN_STRUCT_PLATFORM = 4040,

	/**
	 Input json string has invalid type of property : model_name, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MODEL_NAME_IN_STRUCT_PLATFORM = 4041,

	/**
	 Input json string has invalid value of property : model_name, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MODEL_NAME_IN_STRUCT_PLATFORM = 4042,

	/**
	 Input json string has invalid type of property : manufacturer, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MANUFACTURER_IN_STRUCT_PLATFORM = 4043,

	/**
	 Input json string has invalid value of property : manufacturer, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MANUFACTURER_IN_STRUCT_PLATFORM = 4044,

	/**
	 Input json string has invalid type of property : index, please check out #struct_printer_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_PRINTER_ELEMENT = 4045,

	/**
	 Input json string has invalid value of property : index, please check out #struct_printer_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_PRINTER_ELEMENT = 4046,

	/**
	 Input json string has invalid type of property : name, please check out #struct_printer_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_PRINTER_ELEMENT = 4047,

	/**
	 Input json string has invalid value of property : name, please check out #struct_printer_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_PRINTER_ELEMENT = 4048,

	/**
	 uptime did not meet the restriction: 1..max, please check out #_struct_clock_system_state for more information.
	 */
	ZapiErrorCode_STRUCT_CLOCK_SYSTEM_STATE_UPTIME_RANGE_INCORRECT = 4049,

	/**
	 Input json string has invalid type of property : uptime, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UPTIME_IN_STRUCT_CLOCK_SYSTEM_STATE = 4050,

	/**
	 Input json string has invalid value of property : uptime, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UPTIME_IN_STRUCT_CLOCK_SYSTEM_STATE = 4051,

	/**
	 Input json string has invalid type of property : boot_datetime, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BOOT_DATETIME_IN_STRUCT_CLOCK_SYSTEM_STATE = 4052,

	/**
	 Input json string has invalid value of property : boot_datetime, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BOOT_DATETIME_IN_STRUCT_CLOCK_SYSTEM_STATE = 4053,

	/**
	 Input json string has invalid type of property : current_datetime, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CURRENT_DATETIME_IN_STRUCT_CLOCK_SYSTEM_STATE = 4054,

	/**
	 Input json string has invalid value of property : current_datetime, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CURRENT_DATETIME_IN_STRUCT_CLOCK_SYSTEM_STATE = 4055,

	/**
	 Input json string has invalid type in : struct_usage, please check out #struct_usage for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_USAGE = 4056,

	/**
	 Input json string has invalid type in : struct_platform, please check out #struct_platform for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PLATFORM = 4057,

	/**
	 Input json string has invalid type in : struct_printer, please check out #struct_printer for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_PRINTER = 4058,

	/**
	 Input json string has invalid type in : struct_clock_system_state, please check out #struct_clock_system_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_CLOCK_SYSTEM_STATE = 4059,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_input_system_wake_on_lan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_INPUT_SYSTEM_WAKE_ON_LAN = 4060,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_input_system_wake_on_lan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_INPUT_SYSTEM_WAKE_ON_LAN = 4061,

	/**
	 Input json string has invalid type in : struct_input_system_wake_on_lan, please check out #struct_input_system_wake_on_lan for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SYSTEM_WAKE_ON_LAN = 4062,

	/**
	 Input json string has invalid type of property : minimum_app_version, please check out #struct_output_api_version for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MINIMUM_APP_VERSION_IN_STRUCT_OUTPUT_API_VERSION = 4063,

	/**
	 Input json string has invalid value of property : minimum_app_version, please check out #struct_output_api_version for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MINIMUM_APP_VERSION_IN_STRUCT_OUTPUT_API_VERSION = 4064,

	/**
	 Input json string has invalid type of property : version, please check out #struct_output_api_version for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VERSION_IN_STRUCT_OUTPUT_API_VERSION = 4065,

	/**
	 Input json string has invalid value of property : version, please check out #struct_output_api_version for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VERSION_IN_STRUCT_OUTPUT_API_VERSION = 4066,

	/**
	 Input json string has invalid type in : struct_output_api_version, please check out #struct_output_api_version for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_API_VERSION = 4067,

	/**
	 Input json string has invalid type of property : download, please check out #struct_output_current_band_width for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DOWNLOAD_IN_STRUCT_OUTPUT_CURRENT_BAND_WIDTH = 4068,

	/**
	 Input json string has invalid value of property : download, please check out #struct_output_current_band_width for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DOWNLOAD_IN_STRUCT_OUTPUT_CURRENT_BAND_WIDTH = 4069,

	/**
	 Input json string has invalid type of property : upload, please check out #struct_output_current_band_width for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UPLOAD_IN_STRUCT_OUTPUT_CURRENT_BAND_WIDTH = 4070,

	/**
	 Input json string has invalid value of property : upload, please check out #struct_output_current_band_width for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UPLOAD_IN_STRUCT_OUTPUT_CURRENT_BAND_WIDTH = 4071,

	/**
	 Input json string has invalid type in : struct_output_current_band_width, please check out #struct_output_current_band_width for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_CURRENT_BAND_WIDTH = 4072,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_upnp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP = 4073,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_upnp for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP = 4074,

	/**
	 Input json string has invalid type of property : status, please check out #struct_led_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_LED_DEVICE_ELEMENT = 4075,

	/**
	 Input json string has invalid value of property : status, please check out #struct_led_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_LED_DEVICE_ELEMENT = 4076,

	/**
	 Input json string has invalid type of property : p_switch, please check out #struct_led_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_P_SWITCH_IN_STRUCT_LED_DEVICE_ELEMENT = 4077,

	/**
	 Input json string has invalid value of property : p_switch, please check out #struct_led_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_P_SWITCH_IN_STRUCT_LED_DEVICE_ELEMENT = 4078,

	/**
	 Input json string has invalid type of property : peer_ap_bssid, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PEER_AP_BSSID_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4079,

	/**
	 Input json string has invalid value of property : peer_ap_bssid, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PEER_AP_BSSID_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4080,

	/**
	 Input json string has invalid type of property : my_sta_mac, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MY_STA_MAC_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4081,

	/**
	 Input json string has invalid value of property : my_sta_mac, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MY_STA_MAC_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4082,

	/**
	 Input json string has invalid type of property : rate, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RATE_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4083,

	/**
	 Input json string has invalid value of property : rate, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RATE_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4084,

	/**
	 Input json string has invalid type of property : peer_al_mac, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PEER_AL_MAC_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4085,

	/**
	 Input json string has invalid value of property : peer_al_mac, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PEER_AL_MAC_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4086,

	/**
	 Input json string has invalid type of property : rssi, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RSSI_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4087,

	/**
	 Input json string has invalid value of property : rssi, please check out #struct_neighbor_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RSSI_IN_STRUCT_NEIGHBOR_LIST_ELEMENT = 4088,

	/**
	 Input json string has invalid type of property : firmware_version, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIRMWARE_VERSION_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4089,

	/**
	 Input json string has invalid value of property : firmware_version, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIRMWARE_VERSION_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4090,

	/**
	 Input json string has invalid type in : struct_led_device_element, please check out #struct_led_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_LED_DEVICE_ELEMENT = 4091,

	/**
	 name did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_device_element_device for more information.
	 */
	ZapiErrorCode_STRUCT_DEVICE_ELEMENT_DEVICE_NAME_PATTERN_INCORRECT = 4092,

	/**
	 name did not meet the restriction: 2..24, please check out #_struct_device_element_device for more information.
	 */
	ZapiErrorCode_STRUCT_DEVICE_ELEMENT_DEVICE_NAME_LENGTH_INCORRECT = 4093,

	/**
	 Input json string has invalid type of property : name, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4094,

	/**
	 Input json string has invalid value of property : name, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4095,

	/**
	 Input json string has invalid type of property : ip, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IP_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4096,

	/**
	 Input json string has invalid value of property : ip, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IP_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4097,

	/**
	 Input json string has invalid type of property : hardware_version, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HARDWARE_VERSION_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4098,

	/**
	 Input json string has invalid value of property : hardware_version, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HARDWARE_VERSION_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4099,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4100,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4101,

	/**
	 Input json string has invalid type of property : role, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ROLE_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4102,

	/**
	 Input json string has invalid value of property : role, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ROLE_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4103,

	/**
	 Input json string has invalid type of property : on_off_line, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ON_OFF_LINE_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4104,

	/**
	 Input json string has invalid value of property : on_off_line, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ON_OFF_LINE_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4105,

	/**
	 Input json string has invalid type of property : authorization, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTHORIZATION_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4106,

	/**
	 Input json string has invalid value of property : authorization, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTHORIZATION_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 4107,

	/**
	 Input json string has invalid type of property : firmware_version, please check out #struct_system_devices_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIRMWARE_VERSION_IN_STRUCT_SYSTEM_DEVICES_STATE = 4108,

	/**
	 Input json string has invalid value of property : firmware_version, please check out #struct_system_devices_state for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIRMWARE_VERSION_IN_STRUCT_SYSTEM_DEVICES_STATE = 4109,

	/**
	 Input json string has invalid type of property : led_type, please check out #struct_rgb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LED_TYPE_IN_STRUCT_RGB_ELEMENT = 4110,

	/**
	 Input json string has invalid value of property : led_type, please check out #struct_rgb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LED_TYPE_IN_STRUCT_RGB_ELEMENT = 4111,

	/**
	 Input json string has invalid type of property : value, please check out #struct_rgb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALUE_IN_STRUCT_RGB_ELEMENT = 4112,

	/**
	 Input json string has invalid value of property : value, please check out #struct_rgb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALUE_IN_STRUCT_RGB_ELEMENT = 4113,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_input_switch_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_INPUT_SWITCH_LED = 4114,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_input_switch_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_INPUT_SWITCH_LED = 4115,

	/**
	 Input json string has invalid type of property : led_switch, please check out #struct_input_switch_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LED_SWITCH_IN_STRUCT_INPUT_SWITCH_LED = 4116,

	/**
	 Input json string has invalid value of property : led_switch, please check out #struct_input_switch_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LED_SWITCH_IN_STRUCT_INPUT_SWITCH_LED = 4117,

	/**
	 Input json string has invalid type in : struct_input_switch_led, please check out #struct_input_switch_led for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SWITCH_LED = 4118,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_input_authorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_INPUT_AUTHORIZE_DEVICE = 4119,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_input_authorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_INPUT_AUTHORIZE_DEVICE = 4120,

	/**
	 Input json string has invalid type of property : hardware_version, please check out #struct_input_authorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HARDWARE_VERSION_IN_STRUCT_INPUT_AUTHORIZE_DEVICE = 4121,

	/**
	 Input json string has invalid value of property : hardware_version, please check out #struct_input_authorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HARDWARE_VERSION_IN_STRUCT_INPUT_AUTHORIZE_DEVICE = 4122,

	/**
	 Input json string has invalid type in : struct_input_authorize_device, please check out #struct_input_authorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_AUTHORIZE_DEVICE = 4123,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_input_unauthorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_INPUT_UNAUTHORIZE_DEVICE = 4124,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_input_unauthorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_INPUT_UNAUTHORIZE_DEVICE = 4125,

	/**
	 Input json string has invalid type in : struct_input_unauthorize_device, please check out #struct_input_unauthorize_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_UNAUTHORIZE_DEVICE = 4126,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_input_naming for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_INPUT_NAMING = 4127,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_input_naming for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_INPUT_NAMING = 4128,

	/**
	 name did not meet the restriction: ["[^\\x22\\x27\\x60\\x3C\\x3E\\x5E\\x24\\x26\\u1F60-\\u1F64\\u2702-\\u27B0\\u1F68-\\u1F6C\\u1F30-\\u1F70\\u2600-\\u26ff]*"], please check out #_struct_input_naming for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_NAMING_NAME_PATTERN_INCORRECT = 4129,

	/**
	 name did not meet the restriction: 2..24, please check out #_struct_input_naming for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_NAMING_NAME_LENGTH_INCORRECT = 4130,

	/**
	 Input json string has invalid type of property : name, please check out #struct_input_naming for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INPUT_NAMING = 4131,

	/**
	 Input json string has invalid value of property : name, please check out #struct_input_naming for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INPUT_NAMING = 4132,

	/**
	 Input json string has invalid type in : struct_input_naming, please check out #struct_input_naming for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_NAMING = 4133,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_output_retrive_device_information for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_OUTPUT_RETRIVE_DEVICE_INFORMATION = 4134,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_output_retrive_device_information for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_OUTPUT_RETRIVE_DEVICE_INFORMATION = 4135,

	/**
	 Input json string has invalid type of property : hardware_version, please check out #struct_output_retrive_device_information for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HARDWARE_VERSION_IN_STRUCT_OUTPUT_RETRIVE_DEVICE_INFORMATION = 4136,

	/**
	 Input json string has invalid value of property : hardware_version, please check out #struct_output_retrive_device_information for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HARDWARE_VERSION_IN_STRUCT_OUTPUT_RETRIVE_DEVICE_INFORMATION = 4137,

	/**
	 Input json string has invalid type in : struct_output_retrive_device_information, please check out #struct_output_retrive_device_information for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_RETRIVE_DEVICE_INFORMATION = 4138,

	/**
	 Input json string has invalid type of property : mac, please check out #struct_output_get_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_IN_STRUCT_OUTPUT_GET_MAC = 4139,

	/**
	 Input json string has invalid value of property : mac, please check out #struct_output_get_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_IN_STRUCT_OUTPUT_GET_MAC = 4140,

	/**
	 Input json string has invalid type in : struct_output_get_mac, please check out #struct_output_get_mac for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_MAC = 4141,

	/**
	 Other uncategorized error.
	 */
	ZapiErrorCode_ERROR = 4142,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:authentication, root: authentication #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_AUTHENTICATION_AUTHENTICATION_1 = 4143,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:authentication, root: authentication #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_AUTHENTICATION_AUTHENTICATION_2 = 4144,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:authentication, root: authentication #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_AUTHENTICATION_AUTHENTICATION_3 = 4145,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:authentication, root: authentication #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_AUTHENTICATION_AUTHENTICATION_4 = 4146,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:authentication, root: authentication #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_AUTHENTICATION_AUTHENTICATION_5 = 4147,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ddns, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS_TOP_1 = 4148,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ddns, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS_TOP_2 = 4149,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ddns, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS_TOP_3 = 4150,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ddns, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS_TOP_4 = 4151,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ddns, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS_TOP_5 = 4152,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-port-trigger, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_PORT_TRIGGER_TOP_1 = 4153,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-port-trigger, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_PORT_TRIGGER_TOP_2 = 4154,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-port-trigger, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_PORT_TRIGGER_TOP_3 = 4155,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-port-trigger, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_PORT_TRIGGER_TOP_4 = 4156,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-port-trigger, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_PORT_TRIGGER_TOP_5 = 4157,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_TOP_1 = 4158,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_TOP_2 = 4159,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_TOP_3 = 4160,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_TOP_4 = 4161,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_TOP_5 = 4162,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: rescan #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_RESCAN_1 = 4163,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: rescan #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_RESCAN_2 = 4164,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: rescan #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_RESCAN_3 = 4165,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: rescan #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_RESCAN_4 = 4166,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dlna, root: rescan #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA_RESCAN_5 = 4167,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-oneconnect, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT_TOP_1 = 4168,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-oneconnect, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT_TOP_2 = 4169,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-oneconnect, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT_TOP_3 = 4170,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-oneconnect, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT_TOP_4 = 4171,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-oneconnect, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT_TOP_5 = 4172,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-language, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE_TOP_1 = 4173,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-language, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE_TOP_2 = 4174,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-language, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE_TOP_3 = 4175,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-language, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE_TOP_4 = 4176,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-language, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE_TOP_5 = 4177,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-bandwidth, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_TOP_1 = 4178,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-bandwidth, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_TOP_2 = 4179,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-bandwidth, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_TOP_3 = 4180,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-bandwidth, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_TOP_4 = 4181,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-bandwidth, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_TOP_5 = 4182,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-notification, root: notification #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NOTIFICATION_NOTIFICATION_1 = 4183,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-notification, root: notification #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NOTIFICATION_NOTIFICATION_2 = 4184,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-notification, root: notification #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NOTIFICATION_NOTIFICATION_3 = 4185,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-notification, root: notification #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NOTIFICATION_NOTIFICATION_4 = 4186,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-notification, root: notification #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NOTIFICATION_NOTIFICATION_5 = 4187,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcpv6-server, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER_TOP_1 = 4188,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcpv6-server, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER_TOP_2 = 4189,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcpv6-server, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER_TOP_3 = 4190,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcpv6-server, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER_TOP_4 = 4191,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcpv6-server, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER_TOP_5 = 4192,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-firewall, root: firewall #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL_FIREWALL_1 = 4193,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-firewall, root: firewall #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL_FIREWALL_2 = 4194,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-firewall, root: firewall #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL_FIREWALL_3 = 4195,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-firewall, root: firewall #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL_FIREWALL_4 = 4196,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv6-firewall, root: firewall #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL_FIREWALL_5 = 4197,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ftp-server, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER_TOP_1 = 4198,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ftp-server, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER_TOP_2 = 4199,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ftp-server, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER_TOP_3 = 4200,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ftp-server, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER_TOP_4 = 4201,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-ftp-server, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER_TOP_5 = 4202,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_TOP_1 = 4203,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_TOP_2 = 4204,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_TOP_3 = 4205,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_TOP_4 = 4206,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_TOP_5 = 4207,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: clear #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_CLEAR_1 = 4208,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: clear #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_CLEAR_2 = 4209,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: clear #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_CLEAR_3 = 4210,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: clear #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_CLEAR_4 = 4211,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: clear #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_CLEAR_5 = 4212,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: refresh #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_REFRESH_1 = 4213,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: refresh #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_REFRESH_2 = 4214,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: refresh #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_REFRESH_3 = 4215,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: refresh #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_REFRESH_4 = 4216,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: refresh #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_REFRESH_5 = 4217,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: remove-rule #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_REMOVE_RULE_1 = 4218,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: remove-rule #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_REMOVE_RULE_2 = 4219,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: remove-rule #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_REMOVE_RULE_3 = 4220,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: remove-rule #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_REMOVE_RULE_4 = 4221,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: remove-rule #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_REMOVE_RULE_5 = 4222,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_TOP_1 = 4223,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_TOP_2 = 4224,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_TOP_3 = 4225,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_TOP_4 = 4226,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_TOP_5 = 4227,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: add-rule #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_ADD_RULE_1 = 4228,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: add-rule #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_ADD_RULE_2 = 4229,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: add-rule #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_ADD_RULE_3 = 4230,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: add-rule #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_ADD_RULE_4 = 4231,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: add-rule #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_ADD_RULE_5 = 4232,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: get-system-port #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_GET_SYSTEM_PORT_1 = 4233,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: get-system-port #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_GET_SYSTEM_PORT_2 = 4234,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: get-system-port #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_GET_SYSTEM_PORT_3 = 4235,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: get-system-port #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_GET_SYSTEM_PORT_4 = 4236,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-nat-general, root: get-system-port #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL_GET_SYSTEM_PORT_5 = 4237,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv6-forwarding #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV6_FORWARDING_1 = 4238,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv6-forwarding #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV6_FORWARDING_2 = 4239,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv6-forwarding #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV6_FORWARDING_3 = 4240,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv6-forwarding #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV6_FORWARDING_4 = 4241,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv6-forwarding #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV6_FORWARDING_5 = 4242,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv4-forwarding #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV4_FORWARDING_1 = 4243,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv4-forwarding #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV4_FORWARDING_2 = 4244,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv4-forwarding #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV4_FORWARDING_3 = 4245,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv4-forwarding #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV4_FORWARDING_4 = 4246,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: ipv4-forwarding #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_IPV4_FORWARDING_5 = 4247,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: rip #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_RIP_1 = 4248,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: rip #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_RIP_2 = 4249,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: rip #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_RIP_3 = 4250,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: rip #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_RIP_4 = 4251,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-routing, root: rip #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ROUTING_RIP_5 = 4252,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: write-nmk-to-devices #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_WRITE_NMK_TO_DEVICES_1 = 4253,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: write-nmk-to-devices #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_WRITE_NMK_TO_DEVICES_2 = 4254,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: write-nmk-to-devices #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_WRITE_NMK_TO_DEVICES_3 = 4255,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: write-nmk-to-devices #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_WRITE_NMK_TO_DEVICES_4 = 4256,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: write-nmk-to-devices #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_WRITE_NMK_TO_DEVICES_5 = 4257,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: save-dak #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_SAVE_DAK_1 = 4258,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: save-dak #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_SAVE_DAK_2 = 4259,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: save-dak #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_SAVE_DAK_3 = 4260,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: save-dak #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_SAVE_DAK_4 = 4261,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: save-dak #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_SAVE_DAK_5 = 4262,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: modify-local-dak #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_MODIFY_LOCAL_DAK_1 = 4263,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: modify-local-dak #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_MODIFY_LOCAL_DAK_2 = 4264,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: modify-local-dak #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_MODIFY_LOCAL_DAK_3 = 4265,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: modify-local-dak #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_MODIFY_LOCAL_DAK_4 = 4266,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:interface:zyxel-interface-homenetwork, root: modify-local-dak #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_HOMENETWORK_MODIFY_LOCAL_DAK_5 = 4267,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-usb-storage, root: usb-storage #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_USB_STORAGE_USB_STORAGE_1 = 4268,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-usb-storage, root: usb-storage #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_USB_STORAGE_USB_STORAGE_2 = 4269,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-usb-storage, root: usb-storage #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_USB_STORAGE_USB_STORAGE_3 = 4270,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-usb-storage, root: usb-storage #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_USB_STORAGE_USB_STORAGE_4 = 4271,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-usb-storage, root: usb-storage #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_USB_STORAGE_USB_STORAGE_5 = 4272,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-samba, root: top #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA_TOP_1 = 4273,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-samba, root: top #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA_TOP_2 = 4274,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-samba, root: top #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA_TOP_3 = 4275,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-samba, root: top #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA_TOP_4 = 4276,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:applications:zyxel-applications-samba, root: top #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA_TOP_5 = 4277,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-macfilter, root: macfilter-profile #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_MACFILTER_MACFILTER_PROFILE_1 = 4278,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-macfilter, root: macfilter-profile #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_MACFILTER_MACFILTER_PROFILE_2 = 4279,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-macfilter, root: macfilter-profile #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_MACFILTER_MACFILTER_PROFILE_3 = 4280,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-macfilter, root: macfilter-profile #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_MACFILTER_MACFILTER_PROFILE_4 = 4281,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-macfilter, root: macfilter-profile #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_MACFILTER_MACFILTER_PROFILE_5 = 4282,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-applications-usb-port, root: usb-port #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_APPLICATIONS_USB_PORT_USB_PORT_1 = 4283,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-applications-usb-port, root: usb-port #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_APPLICATIONS_USB_PORT_USB_PORT_2 = 4284,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-applications-usb-port, root: usb-port #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_APPLICATIONS_USB_PORT_USB_PORT_3 = 4285,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-applications-usb-port, root: usb-port #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_APPLICATIONS_USB_PORT_USB_PORT_4 = 4286,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:application:zyxel-applications-usb-port, root: usb-port #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_APPLICATION_ZYXEL_APPLICATIONS_USB_PORT_USB_PORT_5 = 4287,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: get-remaining-time #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_GET_REMAINING_TIME_1 = 4288,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: get-remaining-time #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_GET_REMAINING_TIME_2 = 4289,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: get-remaining-time #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_GET_REMAINING_TIME_3 = 4290,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: get-remaining-time #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_GET_REMAINING_TIME_4 = 4291,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: get-remaining-time #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_GET_REMAINING_TIME_5 = 4292,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: wifi-schedule #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_WIFI_SCHEDULE_1 = 4293,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: wifi-schedule #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_WIFI_SCHEDULE_2 = 4294,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: wifi-schedule #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_WIFI_SCHEDULE_3 = 4295,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: wifi-schedule #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_WIFI_SCHEDULE_4 = 4296,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: wifi-schedule #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_WIFI_SCHEDULE_5 = 4297,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: set-rule #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_SET_RULE_1 = 4298,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: set-rule #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_SET_RULE_2 = 4299,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: set-rule #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_SET_RULE_3 = 4300,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: set-rule #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_SET_RULE_4 = 4301,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-wireless-scheduling, root: set-rule #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIRELESS_SCHEDULING_SET_RULE_5 = 4302,

	/**
	 Input string is not a valid enum string of: enum_service_provider, please check out #_enum_service_provider for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SERVICE_PROVIDER = 4303,

	/**
	 Input string is not a valid enum string of: enum_auto, please check out #_enum_auto for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_AUTO = 4304,

	/**
	 Input string is not a valid enum string of: enum_language, please check out #_enum_language for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_LANGUAGE = 4305,

	/**
	 Input string is not a valid enum string of: enum_zyxel_applications_notification_category_type, please check out #_enum_zyxel_applications_notification_category_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ZYXEL_APPLICATIONS_NOTIFICATION_CATEGORY_TYPE = 4306,

	/**
	 Input string is not a valid enum string of: enum_zyxel_applications_notification_method_type, please check out #_enum_zyxel_applications_notification_method_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ZYXEL_APPLICATIONS_NOTIFICATION_METHOD_TYPE = 4307,

	/**
	 Input string is not a valid enum string of: enum_protocol_filter_rule_element, please check out #_enum_protocol_filter_rule_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_PROTOCOL_FILTER_RULE_ELEMENT = 4308,

	/**
	 Input string is not a valid enum string of: enum_usb2_access_level, please check out #_enum_usb2_access_level for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_USB2_ACCESS_LEVEL = 4309,

	/**
	 Input string is not a valid enum string of: enum_if_usb_status, please check out #_enum_if_usb_status for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_IF_USB_STATUS = 4310,

	/**
	 Input string is not a valid enum string of: enum_type_log_element, please check out #_enum_type_log_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TYPE_LOG_ELEMENT = 4311,

	/**
	 Input string is not a valid enum string of: enum_protocol_port_forward_rules_element, please check out #_enum_protocol_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_PROTOCOL_PORT_FORWARD_RULES_ELEMENT = 4312,

	/**
	 Input string is not a valid enum string of: enum_status_table_element, please check out #_enum_status_table_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_STATUS_TABLE_ELEMENT = 4313,

	/**
	 Input string is not a valid enum string of: enum_origin, please check out #_enum_origin for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_ORIGIN = 4314,

	/**
	 Input string is not a valid enum string of: enum_supported_modes, please check out #_enum_supported_modes for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SUPPORTED_MODES = 4315,

	/**
	 Input string is not a valid enum string of: enum_write_type, please check out #_enum_write_type for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WRITE_TYPE = 4316,

	/**
	 Input string is not a valid enum string of: enum_filter_action, please check out #_enum_filter_action for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_FILTER_ACTION = 4317,

	/**
	 Input string is not a valid enum string of: enum_power, please check out #_enum_power for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_POWER = 4318,

	/**
	 Input string is not a valid enum string of: enum_type_usb_ports_element, please check out #_enum_type_usb_ports_element for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TYPE_USB_PORTS_ELEMENT = 4319,

	/**
	 Input string is not a valid enum string of: enum_rate, please check out #_enum_rate for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_RATE = 4320,

	/**
	 Input string is not a valid enum string of: enum_receptacle, please check out #_enum_receptacle for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_RECEPTACLE = 4321,

	/**
	 Input string is not a valid enum string of: enum_weekday, please check out #_enum_weekday for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_WEEKDAY = 4322,

	/**
	 Input json string has invalid type of property : password, please check out #struct_input_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_INPUT_AUTHENTICATION = 4323,

	/**
	 Input json string has invalid value of property : password, please check out #struct_input_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_INPUT_AUTHENTICATION = 4324,

	/**
	 Input json string has invalid type of property : name, please check out #struct_input_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INPUT_AUTHENTICATION = 4325,

	/**
	 Input json string has invalid value of property : name, please check out #struct_input_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INPUT_AUTHENTICATION = 4326,

	/**
	 Input json string has invalid type of property : token, please check out #struct_output_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TOKEN_IN_STRUCT_OUTPUT_AUTHENTICATION = 4327,

	/**
	 Input json string has invalid value of property : token, please check out #struct_output_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TOKEN_IN_STRUCT_OUTPUT_AUTHENTICATION = 4328,

	/**
	 Input json string has invalid type in : struct_input_authentication, please check out #struct_input_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_AUTHENTICATION = 4329,

	/**
	 Input json string has invalid type in : struct_output_authentication, please check out #struct_output_authentication for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_AUTHENTICATION = 4330,

	/**
	 Input json string has invalid type of property : user_name, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USER_NAME_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4331,

	/**
	 Input json string has invalid value of property : user_name, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USER_NAME_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4332,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4333,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4334,

	/**
	 Input json string has invalid type of property : host_name, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HOST_NAME_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4335,

	/**
	 Input json string has invalid value of property : host_name, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HOST_NAME_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4336,

	/**
	 Input json string has invalid type of property : password, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4337,

	/**
	 Input json string has invalid value of property : password, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4338,

	/**
	 Input json string has invalid type of property : service_provider, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_PROVIDER_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4339,

	/**
	 Input json string has invalid value of property : service_provider, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ddns for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_PROVIDER_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DDNS = 4340,

	/**
	 Input json string has invalid type in : nat-interface-setting, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_NAT_INTERFACE_SETTING = 4341,

	/**
	 Input json string has invalid type in element of : nat-interface-setting, should be struct_nat_interface_setting_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_NAT_INTERFACE_SETTING = 4342,

	/**
	 Input json string has invalid type in : nat-port-mapping, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_NAT_PORT_MAPPING = 4343,

	/**
	 Input json string has invalid type in element of : nat-port-mapping, should be struct_nat_port_mapping_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_NAT_PORT_MAPPING = 4344,

	/**
	 Input json string has invalid type in : support-encapsulation, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SUPPORT_ENCAPSULATION = 4345,

	/**
	 Input json string has invalid type in : wan-settings, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_WAN_SETTINGS = 4346,

	/**
	 Input json string has invalid type in element of : wan-settings, should be struct_wan_settings_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_WAN_SETTINGS = 4347,

	/**
	 Input json string has invalid type of property : incoming_port_start, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INCOMING_PORT_START_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4348,

	/**
	 Input json string has invalid value of property : incoming_port_start, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INCOMING_PORT_START_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4349,

	/**
	 index did not meet the restriction: 1..32, please check out #_struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_STRUCT_PORT_TRIGGER_RULES_ELEMENT_INDEX_RANGE_INCORRECT = 4350,

	/**
	 Input json string has invalid type of property : index, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4351,

	/**
	 Input json string has invalid value of property : index, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4352,

	/**
	 Input json string has invalid type of property : trigger_port_start, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TRIGGER_PORT_START_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4353,

	/**
	 Input json string has invalid value of property : trigger_port_start, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TRIGGER_PORT_START_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4354,

	/**
	 Input json string has invalid type of property : rule_name, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RULE_NAME_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4355,

	/**
	 Input json string has invalid value of property : rule_name, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RULE_NAME_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4356,

	/**
	 Input json string has invalid type of property : trigger_port_end, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TRIGGER_PORT_END_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4357,

	/**
	 Input json string has invalid value of property : trigger_port_end, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TRIGGER_PORT_END_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4358,

	/**
	 Input json string has invalid type of property : incoming_port_end, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INCOMING_PORT_END_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4359,

	/**
	 Input json string has invalid value of property : incoming_port_end, please check out #struct_port_trigger_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INCOMING_PORT_END_IN_STRUCT_PORT_TRIGGER_RULES_ELEMENT = 4360,

	/**
	 Input json string has invalid type in : port-trigger-rules, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PORT_TRIGGER_RULES = 4361,

	/**
	 Input json string has invalid type in element of : port-trigger-rules, should be struct_port_trigger_rules_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_PORT_TRIGGER_RULES = 4362,

	/**
	 Input json string has invalid type of property : photo_enable, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PHOTO_ENABLE_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4363,

	/**
	 Input json string has invalid value of property : photo_enable, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PHOTO_ENABLE_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4364,

	/**
	 Input json string has invalid type of property : usb_name, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB_NAME_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4365,

	/**
	 Input json string has invalid value of property : usb_name, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB_NAME_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4366,

	/**
	 Input json string has invalid type of property : video_enable, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VIDEO_ENABLE_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4367,

	/**
	 Input json string has invalid value of property : video_enable, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VIDEO_ENABLE_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4368,

	/**
	 Input json string has invalid type of property : music_enable, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MUSIC_ENABLE_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4369,

	/**
	 Input json string has invalid value of property : music_enable, please check out #struct_usb_sharing_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MUSIC_ENABLE_IN_STRUCT_USB_SHARING_SETTING_ELEMENT = 4370,

	/**
	 Input json string has invalid type of property : audio_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUDIO_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4371,

	/**
	 Input json string has invalid value of property : audio_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUDIO_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4372,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4373,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4374,

	/**
	 Input json string has invalid type of property : media_collection_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MEDIA_COLLECTION_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4375,

	/**
	 Input json string has invalid value of property : media_collection_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MEDIA_COLLECTION_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4376,

	/**
	 Input json string has invalid type of property : av_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AV_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4377,

	/**
	 Input json string has invalid value of property : av_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AV_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4378,

	/**
	 Input json string has invalid type of property : device_capability, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEVICE_CAPABILITY_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4379,

	/**
	 Input json string has invalid value of property : device_capability, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEVICE_CAPABILITY_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4380,

	/**
	 Input json string has invalid type of property : hnd_deviceclass, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HND_DEVICECLASS_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4381,

	/**
	 Input json string has invalid value of property : hnd_deviceclass, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HND_DEVICECLASS_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4382,

	/**
	 Input json string has invalid type of property : printer_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PRINTER_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4383,

	/**
	 Input json string has invalid value of property : printer_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PRINTER_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4384,

	/**
	 Input json string has invalid type of property : image_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IMAGE_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4385,

	/**
	 Input json string has invalid value of property : image_class_profile_id, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IMAGE_CLASS_PROFILE_ID_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4386,

	/**
	 Input json string has invalid type in : usb-sharing-setting, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_USB_SHARING_SETTING = 4387,

	/**
	 Input json string has invalid type in element of : usb-sharing-setting, should be struct_usb_sharing_setting_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_USB_SHARING_SETTING = 4388,

	/**
	 Input json string has invalid type of property : hid_device_class, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_HID_DEVICE_CLASS_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4389,

	/**
	 Input json string has invalid value of property : hid_device_class, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dlna for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_HID_DEVICE_CLASS_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DLNA = 4390,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_oneconnect for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT = 4391,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_oneconnect for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ONECONNECT = 4392,

	/**
	 Input json string has invalid type in : group, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_GROUP = 4393,

	/**
	 Input json string has invalid type in element of : group, should be struct_group_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_GROUP = 4394,

	/**
	 Input json string has invalid type in : rule, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_RULE = 4395,

	/**
	 Input json string has invalid type in element of : rule, should be struct_rule_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_RULE = 4396,

	/**
	 Input json string has invalid type in : user-name, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_USER_NAME = 4397,

	/**
	 Input json string has invalid type in : rule-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_RULE_LIST = 4398,

	/**
	 Input json string has invalid type in element of : rule-list, should be struct_rule_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_RULE_LIST = 4399,

	/**
	 Input json string has invalid type in : device, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DEVICE = 4400,

	/**
	 Input json string has invalid type in element of : device, should be struct_device_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DEVICE = 4401,

	/**
	 Input json string has invalid type in : device-information, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DEVICE_INFORMATION = 4402,

	/**
	 Input json string has invalid type in element of : device-information, should be struct_device_information_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DEVICE_INFORMATION = 4403,

	/**
	 Input json string has invalid type in : device-status, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DEVICE_STATUS = 4404,

	/**
	 Input json string has invalid type in element of : device-status, should be struct_device_status_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DEVICE_STATUS = 4405,

	/**
	 Input json string has invalid type of property : p_auto, please check out #struct_top_urn_zyxel_cpe_system_zyxel_system_language for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_P_AUTO_IN_STRUCT_TOP_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE = 4406,

	/**
	 Input json string has invalid value of property : p_auto, please check out #struct_top_urn_zyxel_cpe_system_zyxel_system_language for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_P_AUTO_IN_STRUCT_TOP_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE = 4407,

	/**
	 Input json string has invalid type of property : language, please check out #struct_top_urn_zyxel_cpe_system_zyxel_system_language for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LANGUAGE_IN_STRUCT_TOP_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE = 4408,

	/**
	 Input json string has invalid value of property : language, please check out #struct_top_urn_zyxel_cpe_system_zyxel_system_language for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LANGUAGE_IN_STRUCT_TOP_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LANGUAGE = 4409,

	/**
	 Input json string has invalid type in : history, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_HISTORY = 4410,

	/**
	 Input json string has invalid type in element of : history, should be struct_history_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_HISTORY = 4411,

	/**
	 down_limit did not meet the restriction: 1..1000, please check out #_struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_DOWN_LIMIT_RANGE_INCORRECT = 4412,

	/**
	 Input json string has invalid type of property : down_limit, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DOWN_LIMIT_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4413,

	/**
	 Input json string has invalid value of property : down_limit, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DOWN_LIMIT_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4414,

	/**
	 up_limit did not meet the restriction: 1..1000, please check out #_struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH_UP_LIMIT_RANGE_INCORRECT = 4415,

	/**
	 Input json string has invalid type of property : up_limit, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_UP_LIMIT_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4416,

	/**
	 Input json string has invalid value of property : up_limit, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_UP_LIMIT_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4417,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4418,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4419,

	/**
	 Input json string has invalid type of property : auto_update, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AUTO_UPDATE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4420,

	/**
	 Input json string has invalid value of property : auto_update, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_bandwidth for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AUTO_UPDATE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_BANDWIDTH = 4421,

	/**
	 Input json string has invalid type of property : category, please check out #struct_notification_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CATEGORY_IN_STRUCT_NOTIFICATION_SETTING_ELEMENT = 4422,

	/**
	 Input json string has invalid value of property : category, please check out #struct_notification_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CATEGORY_IN_STRUCT_NOTIFICATION_SETTING_ELEMENT = 4423,

	/**
	 Input json string has invalid type of property : index, please check out #struct_notification_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_NOTIFICATION_SETTING_ELEMENT = 4424,

	/**
	 Input json string has invalid value of property : index, please check out #struct_notification_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_NOTIFICATION_SETTING_ELEMENT = 4425,

	/**
	 Input json string has invalid type of property : method, please check out #struct_notification_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_METHOD_IN_STRUCT_NOTIFICATION_SETTING_ELEMENT = 4426,

	/**
	 Input json string has invalid value of property : method, please check out #struct_notification_setting_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_METHOD_IN_STRUCT_NOTIFICATION_SETTING_ELEMENT = 4427,

	/**
	 Input json string has invalid type of property : email, please check out #struct_dst_email_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EMAIL_IN_STRUCT_DST_EMAIL_ELEMENT = 4428,

	/**
	 Input json string has invalid value of property : email, please check out #struct_dst_email_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EMAIL_IN_STRUCT_DST_EMAIL_ELEMENT = 4429,

	/**
	 Input json string has invalid type of property : content, please check out #struct_notification_content_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CONTENT_IN_STRUCT_NOTIFICATION_CONTENT_ELEMENT = 4430,

	/**
	 Input json string has invalid value of property : content, please check out #struct_notification_content_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CONTENT_IN_STRUCT_NOTIFICATION_CONTENT_ELEMENT = 4431,

	/**
	 Input json string has invalid type of property : type, please check out #struct_notification_content_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_NOTIFICATION_CONTENT_ELEMENT = 4432,

	/**
	 Input json string has invalid value of property : type, please check out #struct_notification_content_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_NOTIFICATION_CONTENT_ELEMENT = 4433,

	/**
	 Input json string has invalid type of property : subject, please check out #struct_notification_content_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUBJECT_IN_STRUCT_NOTIFICATION_CONTENT_ELEMENT = 4434,

	/**
	 Input json string has invalid value of property : subject, please check out #struct_notification_content_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUBJECT_IN_STRUCT_NOTIFICATION_CONTENT_ELEMENT = 4435,

	/**
	 Input json string has invalid type of property : mail_username, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAIL_USERNAME_IN_STRUCT_EMAIL_SETTING = 4436,

	/**
	 Input json string has invalid value of property : mail_username, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAIL_USERNAME_IN_STRUCT_EMAIL_SETTING = 4437,

	/**
	 Input json string has invalid type of property : mail_account, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAIL_ACCOUNT_IN_STRUCT_EMAIL_SETTING = 4438,

	/**
	 Input json string has invalid value of property : mail_account, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAIL_ACCOUNT_IN_STRUCT_EMAIL_SETTING = 4439,

	/**
	 Input json string has invalid type of property : mail_password, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAIL_PASSWORD_IN_STRUCT_EMAIL_SETTING = 4440,

	/**
	 Input json string has invalid value of property : mail_password, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAIL_PASSWORD_IN_STRUCT_EMAIL_SETTING = 4441,

	/**
	 Input json string has invalid type in : dst-email, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DST_EMAIL = 4442,

	/**
	 Input json string has invalid type in element of : dst-email, should be struct_dst_email_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DST_EMAIL = 4443,

	/**
	 Input json string has invalid type of property : mail_server, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAIL_SERVER_IN_STRUCT_EMAIL_SETTING = 4444,

	/**
	 Input json string has invalid value of property : mail_server, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAIL_SERVER_IN_STRUCT_EMAIL_SETTING = 4445,

	/**
	 Input json string has invalid type in : notification-content, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_NOTIFICATION_CONTENT = 4446,

	/**
	 Input json string has invalid type in element of : notification-content, should be struct_notification_content_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_NOTIFICATION_CONTENT = 4447,

	/**
	 Input json string has invalid type of property : mail_server_port, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAIL_SERVER_PORT_IN_STRUCT_EMAIL_SETTING = 4448,

	/**
	 Input json string has invalid value of property : mail_server_port, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAIL_SERVER_PORT_IN_STRUCT_EMAIL_SETTING = 4449,

	/**
	 Input json string has invalid type in : notification-setting, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_NOTIFICATION_SETTING = 4450,

	/**
	 Input json string has invalid type in element of : notification-setting, should be struct_notification_setting_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_NOTIFICATION_SETTING = 4451,

	/**
	 Input json string has invalid type in : struct_apn_setting, please check out #struct_apn_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_APN_SETTING = 4452,

	/**
	 Input json string has invalid type in : struct_email_setting, please check out #struct_email_setting for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_EMAIL_SETTING = 4453,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4454,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4455,

	/**
	 Input json string has invalid type of property : option, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPTION_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4456,

	/**
	 Input json string has invalid value of property : option, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPTION_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4457,

	/**
	 Input json string has invalid type of property : passthrough_client, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSTHROUGH_CLIENT_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4458,

	/**
	 Input json string has invalid value of property : passthrough_client, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSTHROUGH_CLIENT_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4459,

	/**
	 Input json string has invalid type of property : value, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALUE_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4460,

	/**
	 Input json string has invalid value of property : value, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALUE_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4461,

	/**
	 Input json string has invalid type of property : tag, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TAG_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4462,

	/**
	 Input json string has invalid value of property : tag, please check out #struct_dhcp_server_pool_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TAG_IN_STRUCT_DHCP_SERVER_POOL_OPTION_ELEMENT = 4463,

	/**
	 Input json string has invalid type of property : tag, please check out #struct_dhcpv6_server_pool_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TAG_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_OPTION_ELEMENT = 4464,

	/**
	 Input json string has invalid value of property : tag, please check out #struct_dhcpv6_server_pool_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TAG_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_OPTION_ELEMENT = 4465,

	/**
	 Input json string has invalid type of property : option, please check out #struct_dhcpv6_server_pool_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_OPTION_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_OPTION_ELEMENT = 4466,

	/**
	 Input json string has invalid value of property : option, please check out #struct_dhcpv6_server_pool_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_OPTION_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_OPTION_ELEMENT = 4467,

	/**
	 Input json string has invalid type of property : value, please check out #struct_dhcpv6_server_pool_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALUE_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_OPTION_ELEMENT = 4468,

	/**
	 Input json string has invalid value of property : value, please check out #struct_dhcpv6_server_pool_client_option_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALUE_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_OPTION_ELEMENT = 4469,

	/**
	 Input json string has invalid type of property : client_id, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLIENT_ID_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4470,

	/**
	 Input json string has invalid value of property : client_id, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLIENT_ID_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4471,

	/**
	 Input json string has invalid type of property : prefix, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFIX_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4472,

	/**
	 Input json string has invalid value of property : prefix, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFIX_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4473,

	/**
	 Input json string has invalid type of property : valid_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALID_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4474,

	/**
	 Input json string has invalid value of property : valid_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALID_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4475,

	/**
	 Input json string has invalid type of property : preferred_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFERRED_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4476,

	/**
	 Input json string has invalid value of property : preferred_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_prefix_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFERRED_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX_ELEMENT = 4477,

	/**
	 Input json string has invalid type of property : client_id, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLIENT_ID_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4478,

	/**
	 Input json string has invalid value of property : client_id, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLIENT_ID_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4479,

	/**
	 Input json string has invalid type of property : valid_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VALID_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4480,

	/**
	 Input json string has invalid value of property : valid_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VALID_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4481,

	/**
	 Input json string has invalid type of property : source_address, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_ADDRESS_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4482,

	/**
	 Input json string has invalid value of property : source_address, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_ADDRESS_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4483,

	/**
	 Input json string has invalid type of property : preferred_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PREFERRED_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4484,

	/**
	 Input json string has invalid value of property : preferred_life_time, please check out #struct_dhcpv6_server_pool_client_ipv6_address_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PREFERRED_LIFE_TIME_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS_ELEMENT = 4485,

	/**
	 Input json string has invalid type in : dhcpv6-server-pool-client-option, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCPV6_SERVER_POOL_CLIENT_OPTION = 4486,

	/**
	 Input json string has invalid type in element of : dhcpv6-server-pool-client-option, should be struct_dhcpv6_server_pool_client_option_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCPV6_SERVER_POOL_CLIENT_OPTION = 4487,

	/**
	 Input json string has invalid type of property : source_address, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_ADDRESS_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4488,

	/**
	 Input json string has invalid value of property : source_address, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_ADDRESS_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4489,

	/**
	 Input json string has invalid type in : dhcpv6-server-pool-client-ipv6-prefix, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX = 4490,

	/**
	 Input json string has invalid type in element of : dhcpv6-server-pool-client-ipv6-prefix, should be struct_dhcpv6_server_pool_client_ipv6_prefix_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCPV6_SERVER_POOL_CLIENT_IPV6_PREFIX = 4491,

	/**
	 Input json string has invalid type in : dhcpv6-server-pool-client-ipv6-address, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS = 4492,

	/**
	 Input json string has invalid type in element of : dhcpv6-server-pool-client-ipv6-address, should be struct_dhcpv6_server_pool_client_ipv6_address_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCPV6_SERVER_POOL_CLIENT_IPV6_ADDRESS = 4493,

	/**
	 Input json string has invalid type of property : client_id, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CLIENT_ID_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4494,

	/**
	 Input json string has invalid value of property : client_id, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CLIENT_ID_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4495,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4496,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4497,

	/**
	 Input json string has invalid type of property : active, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACTIVE_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4498,

	/**
	 Input json string has invalid value of property : active, please check out #struct_dhcpv6_server_pool_client_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACTIVE_IN_STRUCT_DHCPV6_SERVER_POOL_CLIENT_ELEMENT = 4499,

	/**
	 Input json string has invalid type in : dhcp-server-pool-option, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_POOL_OPTION = 4500,

	/**
	 Input json string has invalid type in element of : dhcp-server-pool-option, should be struct_dhcp_server_pool_option_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_POOL_OPTION = 4501,

	/**
	 Input json string has invalid type of property : duid, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DUID_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4502,

	/**
	 Input json string has invalid value of property : duid, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DUID_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4503,

	/**
	 Input json string has invalid type of property : iapd_add_length, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IAPD_ADD_LENGTH_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4504,

	/**
	 Input json string has invalid value of property : iapd_add_length, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IAPD_ADD_LENGTH_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4505,

	/**
	 Input json string has invalid type in : dhcpv6-server-pool-client, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCPV6_SERVER_POOL_CLIENT = 4506,

	/**
	 Input json string has invalid type in element of : dhcpv6-server-pool-client, should be struct_dhcpv6_server_pool_client_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCPV6_SERVER_POOL_CLIENT = 4507,

	/**
	 Input json string has invalid type of property : iana_manual_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IANA_MANUAL_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4508,

	/**
	 Input json string has invalid value of property : iana_manual_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IANA_MANUAL_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4509,

	/**
	 Input json string has invalid type of property : source_address, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_ADDRESS_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4510,

	/**
	 Input json string has invalid value of property : source_address, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_ADDRESS_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4511,

	/**
	 Input json string has invalid type of property : iapd_manual_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IAPD_MANUAL_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4512,

	/**
	 Input json string has invalid value of property : iapd_manual_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IAPD_MANUAL_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4513,

	/**
	 Input json string has invalid type of property : iana_enable, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IANA_ENABLE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4514,

	/**
	 Input json string has invalid value of property : iana_enable, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IANA_ENABLE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4515,

	/**
	 Input json string has invalid type of property : duid_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DUID_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4516,

	/**
	 Input json string has invalid value of property : duid_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DUID_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4517,

	/**
	 Input json string has invalid type of property : vendor_class_id, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VENDOR_CLASS_ID_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4518,

	/**
	 Input json string has invalid value of property : vendor_class_id, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VENDOR_CLASS_ID_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4519,

	/**
	 Input json string has invalid type of property : iana_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IANA_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4520,

	/**
	 Input json string has invalid value of property : iana_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IANA_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4521,

	/**
	 Input json string has invalid type of property : status, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4522,

	/**
	 Input json string has invalid value of property : status, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4523,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4524,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4525,

	/**
	 Input json string has invalid type of property : vendor_class_id_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_VENDOR_CLASS_ID_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4526,

	/**
	 Input json string has invalid value of property : vendor_class_id_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_VENDOR_CLASS_ID_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4527,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4528,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4529,

	/**
	 Input json string has invalid type of property : iapd_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IAPD_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4530,

	/**
	 Input json string has invalid value of property : iapd_prefixes, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IAPD_PREFIXES_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4531,

	/**
	 Input json string has invalid type of property : user_class_id_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USER_CLASS_ID_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4532,

	/**
	 Input json string has invalid value of property : user_class_id_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USER_CLASS_ID_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4533,

	/**
	 Input json string has invalid type of property : iapd_enable, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IAPD_ENABLE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4534,

	/**
	 Input json string has invalid value of property : iapd_enable, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IAPD_ENABLE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4535,

	/**
	 Input json string has invalid type of property : name, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4536,

	/**
	 Input json string has invalid value of property : name, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4537,

	/**
	 Input json string has invalid type of property : user_class_id, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USER_CLASS_ID_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4538,

	/**
	 Input json string has invalid value of property : user_class_id, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USER_CLASS_ID_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4539,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4540,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4541,

	/**
	 Input json string has invalid type of property : source_address_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_ADDRESS_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4542,

	/**
	 Input json string has invalid value of property : source_address_exclude, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_ADDRESS_EXCLUDE_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4543,

	/**
	 Input json string has invalid type of property : source_address_mask, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_ADDRESS_MASK_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4544,

	/**
	 Input json string has invalid value of property : source_address_mask, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_ADDRESS_MASK_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4545,

	/**
	 Input json string has invalid type of property : order, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ORDER_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4546,

	/**
	 Input json string has invalid value of property : order, please check out #struct_dhcpv6_server_pool_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ORDER_IN_STRUCT_DHCPV6_SERVER_POOL_ELEMENT = 4547,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dhcpv6_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER = 4548,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_dhcpv6_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCPV6_SERVER = 4549,

	/**
	 Input json string has invalid type in : dhcpv6-server-pool, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCPV6_SERVER_POOL = 4550,

	/**
	 Input json string has invalid type in element of : dhcpv6-server-pool, should be struct_dhcpv6_server_pool_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCPV6_SERVER_POOL = 4551,

	/**
	 Input json string has invalid type in : dhcp-server-client-ipv4-address, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_CLIENT_IPV4_ADDRESS = 4552,

	/**
	 Input json string has invalid type in element of : dhcp-server-client-ipv4-address, should be struct_dhcp_server_client_ipv4_address_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_CLIENT_IPV4_ADDRESS = 4553,

	/**
	 Input json string has invalid type in : dhcp-server-client-option, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_CLIENT_OPTION = 4554,

	/**
	 Input json string has invalid type in element of : dhcp-server-client-option, should be struct_dhcp_server_client_option_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_CLIENT_OPTION = 4555,

	/**
	 Input json string has invalid type in : dhcp-server-client, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_CLIENT = 4556,

	/**
	 Input json string has invalid type in element of : dhcp-server-client, should be struct_dhcp_server_client_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_CLIENT = 4557,

	/**
	 Input json string has invalid type in : dhcp-server-option, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_OPTION = 4558,

	/**
	 Input json string has invalid type in element of : dhcp-server-option, should be struct_dhcp_server_option_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_OPTION = 4559,

	/**
	 Input json string has invalid type in : dhcp-server-static-address, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_STATIC_ADDRESS = 4560,

	/**
	 Input json string has invalid type in element of : dhcp-server-static-address, should be struct_dhcp_server_static_address_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_STATIC_ADDRESS = 4561,

	/**
	 Input json string has invalid type in : dhcp-server-pool, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DHCP_SERVER_POOL = 4562,

	/**
	 Input json string has invalid type in element of : dhcp-server-pool, should be struct_dhcp_server_pool_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DHCP_SERVER_POOL = 4563,

	/**
	 Input json string has invalid type in : static-ip-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STATIC_IP_LIST = 4564,

	/**
	 Input json string has invalid type in element of : static-ip-list, should be struct_static_ip_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_STATIC_IP_LIST = 4565,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4566,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4567,

	/**
	 Input json string has invalid type of property : dest_port_end, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4568,

	/**
	 Input json string has invalid value of property : dest_port_end, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4569,

	/**
	 Input json string has invalid type of property : dest_ip_address, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4570,

	/**
	 Input json string has invalid value of property : dest_ip_address, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4571,

	/**
	 Input json string has invalid type of property : source_port_start, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4572,

	/**
	 Input json string has invalid value of property : source_port_start, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4573,

	/**
	 Input json string has invalid type of property : rule_index, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RULE_INDEX_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4574,

	/**
	 Input json string has invalid value of property : rule_index, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RULE_INDEX_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4575,

	/**
	 Input json string has invalid type of property : source_port_end, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4576,

	/**
	 Input json string has invalid value of property : source_port_end, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_PORT_END_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4577,

	/**
	 Input json string has invalid type of property : source_ip_address, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SOURCE_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4578,

	/**
	 Input json string has invalid value of property : source_ip_address, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SOURCE_IP_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4579,

	/**
	 Input json string has invalid type of property : service_name, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_NAME_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4580,

	/**
	 Input json string has invalid value of property : service_name, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_NAME_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4581,

	/**
	 Input json string has invalid type of property : dest_port_start, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4582,

	/**
	 Input json string has invalid value of property : dest_port_start, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_PORT_START_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4583,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4584,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_filter_rule_element_filter_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_FILTER_RULE_ELEMENT_FILTER_RULE = 4585,

	/**
	 Input json string has invalid type of property : enable_simple_security, please check out #struct_firewall_urn_zyxel_cpe_applications_zyxel_applications_ipv6_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_SIMPLE_SECURITY_IN_STRUCT_FIREWALL_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL = 4586,

	/**
	 Input json string has invalid value of property : enable_simple_security, please check out #struct_firewall_urn_zyxel_cpe_applications_zyxel_applications_ipv6_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_SIMPLE_SECURITY_IN_STRUCT_FIREWALL_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL = 4587,

	/**
	 Input json string has invalid type in : filter-rule, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_FILTER_RULE = 4588,

	/**
	 Input json string has invalid type in element of : filter-rule, should be struct_filter_rule_element_filter_rule.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_FILTER_RULE = 4589,

	/**
	 Input json string has invalid type of property : target, please check out #struct_firewall_urn_zyxel_cpe_applications_zyxel_applications_ipv6_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TARGET_IN_STRUCT_FIREWALL_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL = 4590,

	/**
	 Input json string has invalid value of property : target, please check out #struct_firewall_urn_zyxel_cpe_applications_zyxel_applications_ipv6_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TARGET_IN_STRUCT_FIREWALL_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL = 4591,

	/**
	 Input json string has invalid type of property : enable_firewall_rule, please check out #struct_firewall_urn_zyxel_cpe_applications_zyxel_applications_ipv6_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_FIREWALL_RULE_IN_STRUCT_FIREWALL_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL = 4592,

	/**
	 Input json string has invalid value of property : enable_firewall_rule, please check out #struct_firewall_urn_zyxel_cpe_applications_zyxel_applications_ipv6_firewall for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_FIREWALL_RULE_IN_STRUCT_FIREWALL_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV6_FIREWALL = 4593,

	/**
	 Input json string has invalid type of property : account_name, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCOUNT_NAME_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4594,

	/**
	 Input json string has invalid value of property : account_name, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCOUNT_NAME_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4595,

	/**
	 Input json string has invalid type of property : account_enable, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCOUNT_ENABLE_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4596,

	/**
	 Input json string has invalid value of property : account_enable, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCOUNT_ENABLE_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4597,

	/**
	 Input json string has invalid type of property : usb_down_bw, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB_DOWN_BW_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4598,

	/**
	 Input json string has invalid value of property : usb_down_bw, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB_DOWN_BW_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4599,

	/**
	 Input json string has invalid type of property : usb2_access_level, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB2_ACCESS_LEVEL_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4600,

	/**
	 Input json string has invalid value of property : usb2_access_level, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB2_ACCESS_LEVEL_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4601,

	/**
	 Input json string has invalid type of property : usb1_access_level, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB1_ACCESS_LEVEL_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4602,

	/**
	 Input json string has invalid value of property : usb1_access_level, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB1_ACCESS_LEVEL_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4603,

	/**
	 Input json string has invalid type of property : usb_up_bw, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB_UP_BW_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4604,

	/**
	 Input json string has invalid value of property : usb_up_bw, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB_UP_BW_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4605,

	/**
	 Input json string has invalid type of property : password, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4606,

	/**
	 Input json string has invalid value of property : password, please check out #struct_ftp_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_FTP_ACCOUNT_ELEMENT = 4607,

	/**
	 Input json string has invalid type in : ftp-account, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_FTP_ACCOUNT = 4608,

	/**
	 Input json string has invalid type in element of : ftp-account, should be struct_ftp_account_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_FTP_ACCOUNT = 4609,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ftp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER = 4610,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ftp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER = 4611,

	/**
	 Input json string has invalid type of property : port, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ftp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PORT_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER = 4612,

	/**
	 Input json string has invalid value of property : port, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_ftp_server for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PORT_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_FTP_SERVER = 4613,

	/**
	 Input json string has invalid type in : if-homeplug:end-station-macs, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IF_HOMEPLUG_END_STATION_MACS = 4614,

	/**
	 Input json string has invalid type of property : if_homeplug_tx_phy_rate, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_TX_PHY_RATE_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4615,

	/**
	 Input json string has invalid value of property : if_homeplug_tx_phy_rate, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_TX_PHY_RATE_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4616,

	/**
	 Input json string has invalid type of property : if_homeplug_rx_phy_rate, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_RX_PHY_RATE_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4617,

	/**
	 Input json string has invalid value of property : if_homeplug_rx_phy_rate, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_RX_PHY_RATE_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4618,

	/**
	 Input json string has invalid type of property : if_homeplug_dak, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_DAK_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4619,

	/**
	 Input json string has invalid value of property : if_homeplug_dak, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_DAK_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4620,

	/**
	 Input json string has invalid type of property : if_homeplug_avg_attenuation, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_AVG_ATTENUATION_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4621,

	/**
	 Input json string has invalid value of property : if_homeplug_avg_attenuation, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_AVG_ATTENUATION_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4622,

	/**
	 Input json string has invalid type of property : if_homeplug_active, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_ACTIVE_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4623,

	/**
	 Input json string has invalid value of property : if_homeplug_active, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_ACTIVE_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4624,

	/**
	 Input json string has invalid type of property : if_homeplug_mac_address, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_MAC_ADDRESS_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4625,

	/**
	 Input json string has invalid value of property : if_homeplug_mac_address, please check out #struct_if_homeplug_associated_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_MAC_ADDRESS_IN_STRUCT_IF_HOMEPLUG_ASSOCIATED_DEVICE_ELEMENT = 4626,

	/**
	 Input json string has invalid type in : if-homeplug:snr-per-tone, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IF_HOMEPLUG_SNR_PER_TONE = 4627,

	/**
	 Input json string has invalid type in element of : if-homeplug:snr-per-tone, should be zapi_uint32.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_IF_HOMEPLUG_SNR_PER_TONE = 4628,

	/**
	 Input json string has invalid type in : ip:neighbor, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IP_NEIGHBOR = 4629,

	/**
	 Input json string has invalid type in element of : ip:neighbor, should be struct_ip_neighbor_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_IP_NEIGHBOR = 4630,

	/**
	 Input json string has invalid type in : ip:address, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IP_ADDRESS = 4631,

	/**
	 Input json string has invalid type in element of : ip:address, should be struct_ip_address_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_IP_ADDRESS = 4632,

	/**
	 Input json string has invalid type in : if-homeplug:associated-device, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IF_HOMEPLUG_ASSOCIATED_DEVICE = 4633,

	/**
	 Input json string has invalid type in element of : if-homeplug:associated-device, should be struct_if_homeplug_associated_device_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_IF_HOMEPLUG_ASSOCIATED_DEVICE = 4634,

	/**
	 Input json string has invalid type in : lower-layer-if, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_LOWER_LAYER_IF = 4635,

	/**
	 Input json string has invalid type in : if-ssid:client-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IF_SSID_CLIENT_LIST = 4636,

	/**
	 Input json string has invalid type in element of : if-ssid:client-list, should be struct_if_ssid_client_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_IF_SSID_CLIENT_LIST = 4637,

	/**
	 Input json string has invalid type of property : if_usb_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_USB_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 4638,

	/**
	 Input json string has invalid value of property : if_usb_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_USB_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 4639,

	/**
	 Input json string has invalid type of property : if_usb_upstream, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_USB_UPSTREAM_IN_STRUCT_INTERFACE_ELEMENT = 4640,

	/**
	 Input json string has invalid value of property : if_usb_upstream, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_USB_UPSTREAM_IN_STRUCT_INTERFACE_ELEMENT = 4641,

	/**
	 Input json string has invalid type in : higher-layer-if, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_HIGHER_LAYER_IF = 4642,

	/**
	 Input json string has invalid type of property : if_homeplug_upstream, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_UPSTREAM_IN_STRUCT_INTERFACE_ELEMENT = 4643,

	/**
	 Input json string has invalid value of property : if_homeplug_upstream, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_UPSTREAM_IN_STRUCT_INTERFACE_ELEMENT = 4644,

	/**
	 Input json string has invalid type of property : if_usb_mac_bit_rate, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_USB_MAC_BIT_RATE_IN_STRUCT_INTERFACE_ELEMENT = 4645,

	/**
	 Input json string has invalid value of property : if_usb_mac_bit_rate, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_USB_MAC_BIT_RATE_IN_STRUCT_INTERFACE_ELEMENT = 4646,

	/**
	 Input json string has invalid type of property : if_homeplug_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 4647,

	/**
	 Input json string has invalid value of property : if_homeplug_status, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_STATUS_IN_STRUCT_INTERFACE_ELEMENT = 4648,

	/**
	 Input json string has invalid type of property : if_homeplug_firmware_version, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_FIRMWARE_VERSION_IN_STRUCT_INTERFACE_ELEMENT = 4649,

	/**
	 Input json string has invalid value of property : if_homeplug_firmware_version, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_FIRMWARE_VERSION_IN_STRUCT_INTERFACE_ELEMENT = 4650,

	/**
	 Input json string has invalid type of property : if_usb_port, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_USB_PORT_IN_STRUCT_INTERFACE_ELEMENT = 4651,

	/**
	 Input json string has invalid value of property : if_usb_port, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_USB_PORT_IN_STRUCT_INTERFACE_ELEMENT = 4652,

	/**
	 Input json string has invalid type in : if-homeplug:other-networks-present, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IF_HOMEPLUG_OTHER_NETWORKS_PRESENT = 4653,

	/**
	 Input json string has invalid type of property : if_homeplug_max_bit_rate, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_MAX_BIT_RATE_IN_STRUCT_INTERFACE_ELEMENT = 4654,

	/**
	 Input json string has invalid value of property : if_homeplug_max_bit_rate, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_MAX_BIT_RATE_IN_STRUCT_INTERFACE_ELEMENT = 4655,

	/**
	 Input json string has invalid type of property : if_homeplug_version, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_VERSION_IN_STRUCT_INTERFACE_ELEMENT = 4656,

	/**
	 Input json string has invalid value of property : if_homeplug_version, please check out #struct_interface_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_VERSION_IN_STRUCT_INTERFACE_ELEMENT = 4657,

	/**
	 Input json string has invalid type in : interface, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_INTERFACE = 4658,

	/**
	 Input json string has invalid type in element of : interface, should be struct_interface_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_INTERFACE = 4659,

	/**
	 Input json string has invalid type of property : if_homeplug_force_cco, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_FORCE_CCO_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4660,

	/**
	 Input json string has invalid value of property : if_homeplug_force_cco, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_FORCE_CCO_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4661,

	/**
	 if_vlan_vlan_id did not meet the restriction: 1..4094, please check out #_struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_STRUCT_INTERFACE_ELEMENT_INTERFACE_IF_VLAN_VLAN_ID_RANGE_INCORRECT = 4662,

	/**
	 Input json string has invalid type of property : if_vlan_vlan_id, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_VLAN_VLAN_ID_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4663,

	/**
	 Input json string has invalid value of property : if_vlan_vlan_id, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_VLAN_VLAN_ID_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4664,

	/**
	 Input json string has invalid type of property : if_vlan_vlan_tagging, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_VLAN_VLAN_TAGGING_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4665,

	/**
	 Input json string has invalid value of property : if_vlan_vlan_tagging, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_VLAN_VLAN_TAGGING_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4666,

	/**
	 Input json string has invalid type of property : if_homeplug_logical_network, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_LOGICAL_NETWORK_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4667,

	/**
	 Input json string has invalid value of property : if_homeplug_logical_network, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_LOGICAL_NETWORK_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4668,

	/**
	 Input json string has invalid type in : if-bridge:network-if, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IF_BRIDGE_NETWORK_IF = 4669,

	/**
	 Input json string has invalid type of property : if_homeplug_network_password, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_HOMEPLUG_NETWORK_PASSWORD_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4670,

	/**
	 Input json string has invalid value of property : if_homeplug_network_password, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_HOMEPLUG_NETWORK_PASSWORD_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4671,

	/**
	 Input json string has invalid type of property : if_vlan_base_interface, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_VLAN_BASE_INTERFACE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4672,

	/**
	 Input json string has invalid value of property : if_vlan_base_interface, please check out #struct_interface_element_interface for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_VLAN_BASE_INTERFACE_IN_STRUCT_INTERFACE_ELEMENT_INTERFACE = 4673,

	/**
	 Input json string has invalid type of property : index, please check out #struct_log_element_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_LOG_ELEMENT_LOG = 4674,

	/**
	 Input json string has invalid value of property : index, please check out #struct_log_element_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_LOG_ELEMENT_LOG = 4675,

	/**
	 Input json string has invalid type of property : message, please check out #struct_log_element_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MESSAGE_IN_STRUCT_LOG_ELEMENT_LOG = 4676,

	/**
	 Input json string has invalid value of property : message, please check out #struct_log_element_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MESSAGE_IN_STRUCT_LOG_ELEMENT_LOG = 4677,

	/**
	 Input json string has invalid type of property : type, please check out #struct_log_element_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_LOG_ELEMENT_LOG = 4678,

	/**
	 Input json string has invalid value of property : type, please check out #struct_log_element_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_LOG_ELEMENT_LOG = 4679,

	/**
	 Input json string has invalid type in : log, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_LOG = 4680,

	/**
	 Input json string has invalid type in element of : log, should be struct_log_element_log.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_LOG = 4681,

	/**
	 Input json string has invalid type in : struct_output_refresh, please check out #struct_output_refresh for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_REFRESH = 4682,

	/**
	 Input json string has invalid type of property : index, please check out #struct_input_remove_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_INPUT_REMOVE_RULE = 4683,

	/**
	 Input json string has invalid value of property : index, please check out #struct_input_remove_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_INPUT_REMOVE_RULE = 4684,

	/**
	 Input json string has invalid type in : struct_input_remove_rule, please check out #struct_input_remove_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_REMOVE_RULE = 4685,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4686,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4687,

	/**
	 Input json string has invalid type of property : service, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4688,

	/**
	 Input json string has invalid value of property : service, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4689,

	/**
	 Input json string has invalid type of property : internal_port, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERNAL_PORT_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4690,

	/**
	 Input json string has invalid value of property : internal_port, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERNAL_PORT_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4691,

	/**
	 Input json string has invalid type of property : local_ip, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LOCAL_IP_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4692,

	/**
	 Input json string has invalid value of property : local_ip, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LOCAL_IP_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4693,

	/**
	 service_index did not meet the restriction: 0..12, please check out #_struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_STRUCT_PORT_FORWARD_RULES_ELEMENT_SERVICE_INDEX_RANGE_INCORRECT = 4694,

	/**
	 Input json string has invalid type of property : service_index, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_INDEX_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4695,

	/**
	 Input json string has invalid value of property : service_index, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_INDEX_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4696,

	/**
	 Input json string has invalid type of property : external_port, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXTERNAL_PORT_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4697,

	/**
	 Input json string has invalid value of property : external_port, please check out #struct_port_forward_rules_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXTERNAL_PORT_IN_STRUCT_PORT_FORWARD_RULES_ELEMENT = 4698,

	/**
	 Input json string has invalid type in : port-forward-rules, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PORT_FORWARD_RULES = 4699,

	/**
	 Input json string has invalid type in element of : port-forward-rules, should be struct_port_forward_rules_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_PORT_FORWARD_RULES = 4700,

	/**
	 Input json string has invalid type of property : change_to_server, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_nat_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHANGE_TO_SERVER_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL = 4701,

	/**
	 Input json string has invalid value of property : change_to_server, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_nat_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHANGE_TO_SERVER_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL = 4702,

	/**
	 Input json string has invalid type of property : change_to_server_ip, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_nat_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_CHANGE_TO_SERVER_IP_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL = 4703,

	/**
	 Input json string has invalid value of property : change_to_server_ip, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_nat_general for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_CHANGE_TO_SERVER_IP_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT_GENERAL = 4704,

	/**
	 Input json string has invalid type of property : protocol, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PROTOCOL_IN_STRUCT_INPUT_ADD_RULE = 4705,

	/**
	 Input json string has invalid value of property : protocol, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PROTOCOL_IN_STRUCT_INPUT_ADD_RULE = 4706,

	/**
	 Input json string has invalid type of property : service, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_IN_STRUCT_INPUT_ADD_RULE = 4707,

	/**
	 Input json string has invalid value of property : service, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_IN_STRUCT_INPUT_ADD_RULE = 4708,

	/**
	 Input json string has invalid type of property : internal_port, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERNAL_PORT_IN_STRUCT_INPUT_ADD_RULE = 4709,

	/**
	 Input json string has invalid value of property : internal_port, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERNAL_PORT_IN_STRUCT_INPUT_ADD_RULE = 4710,

	/**
	 Input json string has invalid type of property : local_ip, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_LOCAL_IP_IN_STRUCT_INPUT_ADD_RULE = 4711,

	/**
	 Input json string has invalid value of property : local_ip, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_LOCAL_IP_IN_STRUCT_INPUT_ADD_RULE = 4712,

	/**
	 service_index did not meet the restriction: 0..32, please check out #_struct_input_add_rule for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_ADD_RULE_SERVICE_INDEX_RANGE_INCORRECT = 4713,

	/**
	 Input json string has invalid type of property : service_index, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SERVICE_INDEX_IN_STRUCT_INPUT_ADD_RULE = 4714,

	/**
	 Input json string has invalid value of property : service_index, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SERVICE_INDEX_IN_STRUCT_INPUT_ADD_RULE = 4715,

	/**
	 Input json string has invalid type of property : external_port, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXTERNAL_PORT_IN_STRUCT_INPUT_ADD_RULE = 4716,

	/**
	 Input json string has invalid value of property : external_port, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXTERNAL_PORT_IN_STRUCT_INPUT_ADD_RULE = 4717,

	/**
	 Input json string has invalid type in : struct_input_add_rule, please check out #struct_input_add_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_ADD_RULE = 4718,

	/**
	 Input json string has invalid type of property : system_port, please check out #struct_output_get_system_port for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SYSTEM_PORT_IN_STRUCT_OUTPUT_GET_SYSTEM_PORT = 4719,

	/**
	 Input json string has invalid value of property : system_port, please check out #struct_output_get_system_port for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SYSTEM_PORT_IN_STRUCT_OUTPUT_GET_SYSTEM_PORT = 4720,

	/**
	 Input json string has invalid type in : struct_output_get_system_port, please check out #struct_output_get_system_port for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_SYSTEM_PORT = 4721,

	/**
	 Input json string has invalid type in : site-survey-result, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SITE_SURVEY_RESULT = 4722,

	/**
	 Input json string has invalid type in element of : site-survey-result, should be struct_site_survey_result_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_SITE_SURVEY_RESULT = 4723,

	/**
	 Input json string has invalid type of property : status, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_TABLE_ELEMENT = 4724,

	/**
	 Input json string has invalid value of property : status, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_TABLE_ELEMENT = 4725,

	/**
	 Input json string has invalid type of property : index, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_TABLE_ELEMENT = 4726,

	/**
	 Input json string has invalid value of property : index, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_TABLE_ELEMENT = 4727,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_TABLE_ELEMENT = 4728,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_TABLE_ELEMENT = 4729,

	/**
	 Input json string has invalid type of property : dest_ip_prefix, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_IP_PREFIX_IN_STRUCT_TABLE_ELEMENT = 4730,

	/**
	 Input json string has invalid value of property : dest_ip_prefix, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_IP_PREFIX_IN_STRUCT_TABLE_ELEMENT = 4731,

	/**
	 Input json string has invalid type of property : expiration_time, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXPIRATION_TIME_IN_STRUCT_TABLE_ELEMENT = 4732,

	/**
	 Input json string has invalid value of property : expiration_time, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXPIRATION_TIME_IN_STRUCT_TABLE_ELEMENT = 4733,

	/**
	 alias did not meet the restriction: 1..255, please check out #_struct_table_element for more information.
	 */
	ZapiErrorCode_STRUCT_TABLE_ELEMENT_ALIAS_LENGTH_INCORRECT = 4734,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_TABLE_ELEMENT = 4735,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_TABLE_ELEMENT = 4736,

	/**
	 Input json string has invalid type of property : forwarding_policy, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FORWARDING_POLICY_IN_STRUCT_TABLE_ELEMENT = 4737,

	/**
	 Input json string has invalid value of property : forwarding_policy, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FORWARDING_POLICY_IN_STRUCT_TABLE_ELEMENT = 4738,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_TABLE_ELEMENT = 4739,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_TABLE_ELEMENT = 4740,

	/**
	 Input json string has invalid type of property : next_hop, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NEXT_HOP_IN_STRUCT_TABLE_ELEMENT = 4741,

	/**
	 Input json string has invalid value of property : next_hop, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NEXT_HOP_IN_STRUCT_TABLE_ELEMENT = 4742,

	/**
	 Input json string has invalid type of property : forwarding_metric, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FORWARDING_METRIC_IN_STRUCT_TABLE_ELEMENT = 4743,

	/**
	 Input json string has invalid value of property : forwarding_metric, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FORWARDING_METRIC_IN_STRUCT_TABLE_ELEMENT = 4744,

	/**
	 Input json string has invalid type of property : origin, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ORIGIN_IN_STRUCT_TABLE_ELEMENT = 4745,

	/**
	 Input json string has invalid value of property : origin, please check out #struct_table_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ORIGIN_IN_STRUCT_TABLE_ELEMENT = 4746,

	/**
	 Input json string has invalid type in : table, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_TABLE = 4747,

	/**
	 Input json string has invalid type in element of : table, should be struct_table_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_TABLE = 4748,

	/**
	 Input json string has invalid type of property : status, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4749,

	/**
	 Input json string has invalid value of property : status, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4750,

	/**
	 Input json string has invalid type of property : index, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_TABLE_ELEMENT_TABLE = 4751,

	/**
	 Input json string has invalid value of property : index, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_TABLE_ELEMENT_TABLE = 4752,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_TABLE_ELEMENT_TABLE = 4753,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_TABLE_ELEMENT_TABLE = 4754,

	/**
	 Input json string has invalid type of property : gateway_ip_address, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GATEWAY_IP_ADDRESS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4755,

	/**
	 Input json string has invalid value of property : gateway_ip_address, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GATEWAY_IP_ADDRESS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4756,

	/**
	 Input json string has invalid type of property : dest_ip_address, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_IP_ADDRESS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4757,

	/**
	 Input json string has invalid value of property : dest_ip_address, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_IP_ADDRESS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4758,

	/**
	 Input json string has invalid type of property : static_route, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATIC_ROUTE_IN_STRUCT_TABLE_ELEMENT_TABLE = 4759,

	/**
	 Input json string has invalid value of property : static_route, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATIC_ROUTE_IN_STRUCT_TABLE_ELEMENT_TABLE = 4760,

	/**
	 alias did not meet the restriction: 1..255, please check out #_struct_table_element_table for more information.
	 */
	ZapiErrorCode_STRUCT_TABLE_ELEMENT_TABLE_ALIAS_LENGTH_INCORRECT = 4761,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4762,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_TABLE_ELEMENT_TABLE = 4763,

	/**
	 Input json string has invalid type of property : forwarding_policy, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FORWARDING_POLICY_IN_STRUCT_TABLE_ELEMENT_TABLE = 4764,

	/**
	 Input json string has invalid value of property : forwarding_policy, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FORWARDING_POLICY_IN_STRUCT_TABLE_ELEMENT_TABLE = 4765,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_TABLE_ELEMENT_TABLE = 4766,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_TABLE_ELEMENT_TABLE = 4767,

	/**
	 Input json string has invalid type of property : forwarding_metric, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FORWARDING_METRIC_IN_STRUCT_TABLE_ELEMENT_TABLE = 4768,

	/**
	 Input json string has invalid value of property : forwarding_metric, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FORWARDING_METRIC_IN_STRUCT_TABLE_ELEMENT_TABLE = 4769,

	/**
	 Input json string has invalid type of property : dest_subnet_mask, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DEST_SUBNET_MASK_IN_STRUCT_TABLE_ELEMENT_TABLE = 4770,

	/**
	 Input json string has invalid value of property : dest_subnet_mask, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DEST_SUBNET_MASK_IN_STRUCT_TABLE_ELEMENT_TABLE = 4771,

	/**
	 Input json string has invalid type of property : origin, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ORIGIN_IN_STRUCT_TABLE_ELEMENT_TABLE = 4772,

	/**
	 Input json string has invalid value of property : origin, please check out #struct_table_element_table for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ORIGIN_IN_STRUCT_TABLE_ELEMENT_TABLE = 4773,

	/**
	 Input json string has invalid type of property : status, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STATUS_IN_STRUCT_SETTINGS_ELEMENT = 4774,

	/**
	 Input json string has invalid value of property : status, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STATUS_IN_STRUCT_SETTINGS_ELEMENT = 4775,

	/**
	 Input json string has invalid type of property : index, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_SETTINGS_ELEMENT = 4776,

	/**
	 Input json string has invalid value of property : index, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_SETTINGS_ELEMENT = 4777,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_SETTINGS_ELEMENT = 4778,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_SETTINGS_ELEMENT = 4779,

	/**
	 Input json string has invalid type of property : send_ra, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SEND_RA_IN_STRUCT_SETTINGS_ELEMENT = 4780,

	/**
	 Input json string has invalid value of property : send_ra, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SEND_RA_IN_STRUCT_SETTINGS_ELEMENT = 4781,

	/**
	 Input json string has invalid type of property : accept_ra, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCEPT_RA_IN_STRUCT_SETTINGS_ELEMENT = 4782,

	/**
	 Input json string has invalid value of property : accept_ra, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCEPT_RA_IN_STRUCT_SETTINGS_ELEMENT = 4783,

	/**
	 alias did not meet the restriction: 1..255, please check out #_struct_settings_element for more information.
	 */
	ZapiErrorCode_STRUCT_SETTINGS_ELEMENT_ALIAS_LENGTH_INCORRECT = 4784,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_SETTINGS_ELEMENT = 4785,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_SETTINGS_ELEMENT = 4786,

	/**
	 Input json string has invalid type of property : interface, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INTERFACE_IN_STRUCT_SETTINGS_ELEMENT = 4787,

	/**
	 Input json string has invalid value of property : interface, please check out #struct_settings_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INTERFACE_IN_STRUCT_SETTINGS_ELEMENT = 4788,

	/**
	 Input json string has invalid type of property : supported_modes, please check out #struct_rip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUPPORTED_MODES_IN_STRUCT_RIP = 4789,

	/**
	 Input json string has invalid value of property : supported_modes, please check out #struct_rip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUPPORTED_MODES_IN_STRUCT_RIP = 4790,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_rip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_RIP = 4791,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_rip for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_RIP = 4792,

	/**
	 Input json string has invalid type in : settings, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SETTINGS = 4793,

	/**
	 Input json string has invalid type in element of : settings, should be struct_settings_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_SETTINGS = 4794,

	/**
	 Input json string has invalid type in : filter, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_FILTER = 4795,

	/**
	 Input json string has invalid type in element of : filter, should be struct_config_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_FILTER = 4796,

	/**
	 Input json string has invalid type in : config, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_CONFIG = 4797,

	/**
	 Input json string has invalid type in element of : config, should be struct_config_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_CONFIG = 4798,

	/**
	 Input json string has invalid type in : data, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DATA = 4799,

	/**
	 Input json string has invalid type in element of : data, should be struct_config_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DATA = 4800,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_device_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_DEVICE_LIST_ELEMENT = 4801,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_device_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_DEVICE_LIST_ELEMENT = 4802,

	/**
	 Input json string has invalid type of property : dak, please check out #struct_device_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DAK_IN_STRUCT_DEVICE_LIST_ELEMENT = 4803,

	/**
	 Input json string has invalid value of property : dak, please check out #struct_device_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DAK_IN_STRUCT_DEVICE_LIST_ELEMENT = 4804,

	/**
	 Input json string has invalid type of property : write_type, please check out #struct_input_write_nmk_to_devices for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WRITE_TYPE_IN_STRUCT_INPUT_WRITE_NMK_TO_DEVICES = 4805,

	/**
	 Input json string has invalid value of property : write_type, please check out #struct_input_write_nmk_to_devices for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WRITE_TYPE_IN_STRUCT_INPUT_WRITE_NMK_TO_DEVICES = 4806,

	/**
	 Input json string has invalid type in : device-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DEVICE_LIST = 4807,

	/**
	 Input json string has invalid type in element of : device-list, should be struct_device_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DEVICE_LIST = 4808,

	/**
	 Input json string has invalid type of property : network_password, please check out #struct_input_write_nmk_to_devices for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NETWORK_PASSWORD_IN_STRUCT_INPUT_WRITE_NMK_TO_DEVICES = 4809,

	/**
	 Input json string has invalid value of property : network_password, please check out #struct_input_write_nmk_to_devices for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NETWORK_PASSWORD_IN_STRUCT_INPUT_WRITE_NMK_TO_DEVICES = 4810,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_device_list_element_device_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_DEVICE_LIST_ELEMENT_DEVICE_LIST = 4811,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_device_list_element_device_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_DEVICE_LIST_ELEMENT_DEVICE_LIST = 4812,

	/**
	 Input json string has invalid type of property : result, please check out #struct_device_list_element_device_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RESULT_IN_STRUCT_DEVICE_LIST_ELEMENT_DEVICE_LIST = 4813,

	/**
	 Input json string has invalid value of property : result, please check out #struct_device_list_element_device_list for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RESULT_IN_STRUCT_DEVICE_LIST_ELEMENT_DEVICE_LIST = 4814,

	/**
	 Input json string has invalid type in : struct_input_write_nmk_to_devices, please check out #struct_input_write_nmk_to_devices for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_WRITE_NMK_TO_DEVICES = 4815,

	/**
	 Input json string has invalid type in : struct_output_write_nmk_to_devices, please check out #struct_output_write_nmk_to_devices for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_WRITE_NMK_TO_DEVICES = 4816,

	/**
	 Input json string has invalid type of property : mac_address, please check out #struct_input_save_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDRESS_IN_STRUCT_INPUT_SAVE_DAK = 4817,

	/**
	 Input json string has invalid value of property : mac_address, please check out #struct_input_save_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDRESS_IN_STRUCT_INPUT_SAVE_DAK = 4818,

	/**
	 Input json string has invalid type of property : dak, please check out #struct_input_save_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DAK_IN_STRUCT_INPUT_SAVE_DAK = 4819,

	/**
	 Input json string has invalid value of property : dak, please check out #struct_input_save_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DAK_IN_STRUCT_INPUT_SAVE_DAK = 4820,

	/**
	 Input json string has invalid type in : struct_input_save_dak, please check out #struct_input_save_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SAVE_DAK = 4821,

	/**
	 Input json string has invalid type of property : dak, please check out #struct_input_modify_local_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DAK_IN_STRUCT_INPUT_MODIFY_LOCAL_DAK = 4822,

	/**
	 Input json string has invalid value of property : dak, please check out #struct_input_modify_local_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DAK_IN_STRUCT_INPUT_MODIFY_LOCAL_DAK = 4823,

	/**
	 Input json string has invalid type in : struct_input_modify_local_dak, please check out #struct_input_modify_local_dak for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_MODIFY_LOCAL_DAK = 4824,

	/**
	 Input json string has invalid type in : wifi-interface-mapping, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_WIFI_INTERFACE_MAPPING = 4825,

	/**
	 Input json string has invalid type in element of : wifi-interface-mapping, should be struct_wifi_interface_mapping_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_WIFI_INTERFACE_MAPPING = 4826,

	/**
	 Input json string has invalid type in : ipv6rd-interface-setting, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_IPV6RD_INTERFACE_SETTING = 4827,

	/**
	 Input json string has invalid type in element of : ipv6rd-interface-setting, should be struct_ipv6rd_interface_setting_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_IPV6RD_INTERFACE_SETTING = 4828,

	/**
	 Input json string has invalid type of property : available, please check out #struct_usb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AVAILABLE_IN_STRUCT_USB_ELEMENT = 4829,

	/**
	 Input json string has invalid value of property : available, please check out #struct_usb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AVAILABLE_IN_STRUCT_USB_ELEMENT = 4830,

	/**
	 Input json string has invalid type of property : index, please check out #struct_usb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_USB_ELEMENT = 4831,

	/**
	 Input json string has invalid value of property : index, please check out #struct_usb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_USB_ELEMENT = 4832,

	/**
	 Input json string has invalid type of property : used, please check out #struct_usb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USED_IN_STRUCT_USB_ELEMENT = 4833,

	/**
	 Input json string has invalid value of property : used, please check out #struct_usb_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USED_IN_STRUCT_USB_ELEMENT = 4834,

	/**
	 Input json string has invalid type in : usb, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_USB = 4835,

	/**
	 Input json string has invalid type in element of : usb, should be struct_usb_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_USB = 4836,

	/**
	 Input json string has invalid type of property : account_name, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCOUNT_NAME_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4837,

	/**
	 Input json string has invalid value of property : account_name, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCOUNT_NAME_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4838,

	/**
	 Input json string has invalid type of property : account_enable, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCOUNT_ENABLE_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4839,

	/**
	 Input json string has invalid value of property : account_enable, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCOUNT_ENABLE_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4840,

	/**
	 Input json string has invalid type of property : usb2_access_level, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB2_ACCESS_LEVEL_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4841,

	/**
	 Input json string has invalid value of property : usb2_access_level, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB2_ACCESS_LEVEL_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4842,

	/**
	 Input json string has invalid type of property : usb1_access_level, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_USB1_ACCESS_LEVEL_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4843,

	/**
	 Input json string has invalid value of property : usb1_access_level, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_USB1_ACCESS_LEVEL_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4844,

	/**
	 Input json string has invalid type of property : password, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_PASSWORD_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4845,

	/**
	 Input json string has invalid value of property : password, please check out #struct_samba_account_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_PASSWORD_IN_STRUCT_SAMBA_ACCOUNT_ELEMENT = 4846,

	/**
	 Input json string has invalid type of property : samba_name, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SAMBA_NAME_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4847,

	/**
	 Input json string has invalid value of property : samba_name, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SAMBA_NAME_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4848,

	/**
	 Input json string has invalid type in : samba-account, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SAMBA_ACCOUNT = 4849,

	/**
	 Input json string has invalid type in element of : samba-account, should be struct_samba_account_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_SAMBA_ACCOUNT = 4850,

	/**
	 Input json string has invalid type of property : samba_work_group, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SAMBA_WORK_GROUP_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4851,

	/**
	 Input json string has invalid value of property : samba_work_group, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SAMBA_WORK_GROUP_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4852,

	/**
	 Input json string has invalid type of property : account_mode, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ACCOUNT_MODE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4853,

	/**
	 Input json string has invalid value of property : account_mode, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ACCOUNT_MODE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4854,

	/**
	 Input json string has invalid type of property : description, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DESCRIPTION_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4855,

	/**
	 Input json string has invalid value of property : description, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DESCRIPTION_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4856,

	/**
	 Input json string has invalid type of property : enable, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4857,

	/**
	 Input json string has invalid value of property : enable, please check out #struct_top_urn_zyxel_cpe_applications_zyxel_applications_samba for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLE_IN_STRUCT_TOP_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SAMBA = 4858,

	/**
	 Input json string has invalid type of property : mac_addr, please check out #struct_mac_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MAC_ADDR_IN_STRUCT_MAC_ELEMENT = 4859,

	/**
	 Input json string has invalid value of property : mac_addr, please check out #struct_mac_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MAC_ADDR_IN_STRUCT_MAC_ELEMENT = 4860,

	/**
	 Input json string has invalid type of property : desc, please check out #struct_mac_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_DESC_IN_STRUCT_MAC_ELEMENT = 4861,

	/**
	 Input json string has invalid value of property : desc, please check out #struct_mac_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_DESC_IN_STRUCT_MAC_ELEMENT = 4862,

	/**
	 Input json string has invalid type of property : all_interfaces_in_this_radio, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALL_INTERFACES_IN_THIS_RADIO_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4863,

	/**
	 Input json string has invalid value of property : all_interfaces_in_this_radio, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALL_INTERFACES_IN_THIS_RADIO_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4864,

	/**
	 Input json string has invalid type of property : if_name, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_IF_NAME_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4865,

	/**
	 Input json string has invalid value of property : if_name, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_IF_NAME_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4866,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4867,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4868,

	/**
	 Input json string has invalid type of property : guest_included, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_GUEST_INCLUDED_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4869,

	/**
	 Input json string has invalid value of property : guest_included, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_GUEST_INCLUDED_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4870,

	/**
	 Input json string has invalid type of property : filter_action, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FILTER_ACTION_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4871,

	/**
	 Input json string has invalid value of property : filter_action, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FILTER_ACTION_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4872,

	/**
	 Input json string has invalid type of property : band, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BAND_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4873,

	/**
	 Input json string has invalid value of property : band, please check out #struct_macfilter_profile_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BAND_IN_STRUCT_MACFILTER_PROFILE_ELEMENT = 4874,

	/**
	 Input json string has invalid type in : mac, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_MAC = 4875,

	/**
	 Input json string has invalid type in element of : mac, should be struct_mac_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_MAC = 4876,

	/**
	 Input json string has invalid type in : macfilter-profile, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_MACFILTER_PROFILE = 4877,

	/**
	 Input json string has invalid type in element of : macfilter-profile, should be struct_macfilter_profile_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_MACFILTER_PROFILE = 4878,

	/**
	 Input json string has invalid type in : service-rules, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SERVICE_RULES = 4879,

	/**
	 Input json string has invalid type in element of : service-rules, should be struct_service_rules_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_SERVICE_RULES = 4880,

	/**
	 Input json string has invalid type in : keyword-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_KEYWORD_LIST = 4881,

	/**
	 Input json string has invalid type in element of : keyword-list, should be struct_keyword_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_KEYWORD_LIST = 4882,

	/**
	 Input json string has invalid type in : device-mac-selected-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DEVICE_MAC_SELECTED_LIST = 4883,

	/**
	 Input json string has invalid type in element of : device-mac-selected-list, should be struct_device_mac_selected_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DEVICE_MAC_SELECTED_LIST = 4884,

	/**
	 Input json string has invalid type in : profiles, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROFILES = 4885,

	/**
	 Input json string has invalid type in element of : profiles, should be struct_profiles_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_PROFILES = 4886,

	/**
	 Input json string has invalid type in : devices, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DEVICES = 4887,

	/**
	 Input json string has invalid type in element of : devices, should be struct_devices_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DEVICES = 4888,

	/**
	 Input json string has invalid type in : static-dhcp-table, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STATIC_DHCP_TABLE = 4889,

	/**
	 Input json string has invalid type in element of : static-dhcp-table, should be struct_static_dhcp_table_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_STATIC_DHCP_TABLE = 4890,

	/**
	 Input json string has invalid type in : network, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_NETWORK = 4891,

	/**
	 Input json string has invalid type in element of : network, should be struct_network_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_NETWORK = 4892,

	/**
	 Input json string has invalid type in : server, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SERVER = 4893,

	/**
	 Input json string has invalid type in element of : server, should be struct_server_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_SERVER = 4894,

	/**
	 Input json string has invalid type in : authorized-key, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_AUTHORIZED_KEY = 4895,

	/**
	 Input json string has invalid type in element of : authorized-key, should be struct_authorized_key_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_AUTHORIZED_KEY = 4896,

	/**
	 Input json string has invalid type in : user-authentication-order, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_USER_AUTHENTICATION_ORDER = 4897,

	/**
	 Input json string has invalid type in : user, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_USER = 4898,

	/**
	 Input json string has invalid type in element of : user, should be struct_user_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_USER = 4899,

	/**
	 Input json string has invalid type in : mac-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_MAC_LIST = 4900,

	/**
	 Input json string has invalid type in element of : mac-list, should be struct_mac_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_MAC_LIST = 4901,

	/**
	 Input json string has invalid type in : remote-access, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_REMOTE_ACCESS = 4902,

	/**
	 Input json string has invalid type in element of : remote-access, should be struct_remote_access_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_REMOTE_ACCESS = 4903,

	/**
	 Input json string has invalid type in : search, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_SEARCH = 4904,

	/**
	 Input json string has invalid type in : printer, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PRINTER = 4905,

	/**
	 Input json string has invalid type in element of : printer, should be struct_printer_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_PRINTER = 4906,

	/**
	 Input json string has invalid type of property : index, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_USB_PORTS_ELEMENT = 4907,

	/**
	 Input json string has invalid value of property : index, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_USB_PORTS_ELEMENT = 4908,

	/**
	 Input json string has invalid type of property : name, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_USB_PORTS_ELEMENT = 4909,

	/**
	 Input json string has invalid value of property : name, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_USB_PORTS_ELEMENT = 4910,

	/**
	 Input json string has invalid type of property : power, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_POWER_IN_STRUCT_USB_PORTS_ELEMENT = 4911,

	/**
	 Input json string has invalid value of property : power, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_POWER_IN_STRUCT_USB_PORTS_ELEMENT = 4912,

	/**
	 Input json string has invalid type of property : type, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_USB_PORTS_ELEMENT = 4913,

	/**
	 Input json string has invalid value of property : type, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_USB_PORTS_ELEMENT = 4914,

	/**
	 Input json string has invalid type of property : standard, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_STANDARD_IN_STRUCT_USB_PORTS_ELEMENT = 4915,

	/**
	 Input json string has invalid value of property : standard, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_STANDARD_IN_STRUCT_USB_PORTS_ELEMENT = 4916,

	/**
	 alias did not meet the restriction: 1..255, please check out #_struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_STRUCT_USB_PORTS_ELEMENT_ALIAS_LENGTH_INCORRECT = 4917,

	/**
	 Input json string has invalid type of property : alias, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ALIAS_IN_STRUCT_USB_PORTS_ELEMENT = 4918,

	/**
	 Input json string has invalid value of property : alias, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ALIAS_IN_STRUCT_USB_PORTS_ELEMENT = 4919,

	/**
	 Input json string has invalid type of property : rate, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RATE_IN_STRUCT_USB_PORTS_ELEMENT = 4920,

	/**
	 Input json string has invalid value of property : rate, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RATE_IN_STRUCT_USB_PORTS_ELEMENT = 4921,

	/**
	 Input json string has invalid type of property : receptacle, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RECEPTACLE_IN_STRUCT_USB_PORTS_ELEMENT = 4922,

	/**
	 Input json string has invalid value of property : receptacle, please check out #struct_usb_ports_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RECEPTACLE_IN_STRUCT_USB_PORTS_ELEMENT = 4923,

	/**
	 Input json string has invalid type in : usb-ports, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_USB_PORTS = 4924,

	/**
	 Input json string has invalid type in element of : usb-ports, should be struct_usb_ports_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_USB_PORTS = 4925,

	/**
	 Input json string has invalid type of property : seconds, please check out #struct_reamining_time_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SECONDS_IN_STRUCT_REAMINING_TIME_ELEMENT = 4926,

	/**
	 Input json string has invalid value of property : seconds, please check out #struct_reamining_time_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SECONDS_IN_STRUCT_REAMINING_TIME_ELEMENT = 4927,

	/**
	 Input json string has invalid type of property : name, please check out #struct_reamining_time_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_REAMINING_TIME_ELEMENT = 4928,

	/**
	 Input json string has invalid value of property : name, please check out #struct_reamining_time_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_REAMINING_TIME_ELEMENT = 4929,

	/**
	 Input json string has invalid type in : reamining-time, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_REAMINING_TIME = 4930,

	/**
	 Input json string has invalid type in element of : reamining-time, should be struct_reamining_time_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_REAMINING_TIME = 4931,

	/**
	 Input json string has invalid type of property : band, please check out #struct_remaining_time_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BAND_IN_STRUCT_REMAINING_TIME_LIST_ELEMENT = 4932,

	/**
	 Input json string has invalid value of property : band, please check out #struct_remaining_time_list_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BAND_IN_STRUCT_REMAINING_TIME_LIST_ELEMENT = 4933,

	/**
	 Input json string has invalid type in : remaining-time-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_REMAINING_TIME_LIST = 4934,

	/**
	 Input json string has invalid type in element of : remaining-time-list, should be struct_remaining_time_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_REMAINING_TIME_LIST = 4935,

	/**
	 Input json string has invalid type in : struct_output_get_remaining_time, please check out #struct_output_get_remaining_time for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_REMAINING_TIME = 4936,

	/**
	 Input json string has invalid type of property : weekday, please check out #struct_daily_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_WEEKDAY_IN_STRUCT_DAILY_SCHEDULE_ELEMENT = 4937,

	/**
	 Input json string has invalid value of property : weekday, please check out #struct_daily_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_WEEKDAY_IN_STRUCT_DAILY_SCHEDULE_ELEMENT = 4938,

	/**
	 Input json string has invalid type of property : times, please check out #struct_daily_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIMES_IN_STRUCT_DAILY_SCHEDULE_ELEMENT = 4939,

	/**
	 Input json string has invalid value of property : times, please check out #struct_daily_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIMES_IN_STRUCT_DAILY_SCHEDULE_ELEMENT = 4940,

	/**
	 Input json string has invalid type of property : band, please check out #struct_wifi_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BAND_IN_STRUCT_WIFI_SCHEDULE_ELEMENT = 4941,

	/**
	 Input json string has invalid value of property : band, please check out #struct_wifi_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BAND_IN_STRUCT_WIFI_SCHEDULE_ELEMENT = 4942,

	/**
	 Input json string has invalid type of property : enabled, please check out #struct_wifi_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_ENABLED_IN_STRUCT_WIFI_SCHEDULE_ELEMENT = 4943,

	/**
	 Input json string has invalid value of property : enabled, please check out #struct_wifi_schedule_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_ENABLED_IN_STRUCT_WIFI_SCHEDULE_ELEMENT = 4944,

	/**
	 Input json string has invalid type in : daily-schedule, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_DAILY_SCHEDULE = 4945,

	/**
	 Input json string has invalid type in element of : daily-schedule, should be struct_daily_schedule_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_DAILY_SCHEDULE = 4946,

	/**
	 Input json string has invalid type in : wifi-schedule, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_WIFI_SCHEDULE = 4947,

	/**
	 Input json string has invalid type in element of : wifi-schedule, should be struct_wifi_schedule_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_WIFI_SCHEDULE = 4948,

	/**
	 Input json string has invalid type of property : band, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_BAND_IN_STRUCT_INPUT_SET_RULE = 4949,

	/**
	 Input json string has invalid value of property : band, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_BAND_IN_STRUCT_INPUT_SET_RULE = 4950,

	/**
	 Input json string has invalid type of property : name, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NAME_IN_STRUCT_INPUT_SET_RULE = 4951,

	/**
	 Input json string has invalid value of property : name, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NAME_IN_STRUCT_INPUT_SET_RULE = 4952,

	/**
	 time did not meet the restriction: ["^([0-1]?[0-9]|[2][0-3]):([0-1]?[0-9]|[0-5][0-9])?$"], please check out #_struct_input_set_rule for more information.
	 */
	ZapiErrorCode_STRUCT_INPUT_SET_RULE_TIME_PATTERN_INCORRECT = 4953,

	/**
	 Input json string has invalid type of property : time, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TIME_IN_STRUCT_INPUT_SET_RULE = 4954,

	/**
	 Input json string has invalid value of property : time, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TIME_IN_STRUCT_INPUT_SET_RULE = 4955,

	/**
	 Input json string has invalid type in : struct_input_set_rule, please check out #struct_input_set_rule for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_SET_RULE = 4956,

	/**
	 Input json string has invalid type in : neighbor-list, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_NEIGHBOR_LIST = 4957,

	/**
	 Input json string has invalid type in element of : neighbor-list, should be struct_neighbor_list_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_NEIGHBOR_LIST = 4958,

	/**
	 Input json string has invalid type in : rgb, should be an array.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_RGB = 4959,

	/**
	 Input json string has invalid type in element of : rgb, should be struct_rgb_element.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_ELEMENT_TYPE_RGB = 4960,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: get-log #1
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_GET_LOG_1 = 4961,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: get-log #2
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_GET_LOG_2 = 4962,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: get-log #3
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_GET_LOG_3 = 4963,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: get-log #4
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_GET_LOG_4 = 4964,

	/**
	 Error specificly occured during the execution of namespace: urn:zyxel:cpe:system:zyxel-system-log, root: get-log #5
	 */
	ZapiErrorCode_EXECUTE_ERROR_IN_ENUM_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG_GET_LOG_5 = 4965,

	/**
	 Input string is not a valid enum string of: enum_support_band, please check out #_enum_support_band for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_SUPPORT_BAND = 4966,

	/**
	 Input string is not a valid enum string of: enum_type_log_element_log, please check out #_enum_type_log_element_log for more information.
	 */
	ZapiErrorCode_STRING_NOT_IN_ENUM_TYPE_LOG_ELEMENT_LOG = 4967,

	/**
	 Input json string has invalid type of property : rx_data, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_RX_DATA_IN_STRUCT_WIFI_STATUS = 4968,

	/**
	 Input json string has invalid value of property : rx_data, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_RX_DATA_IN_STRUCT_WIFI_STATUS = 4969,

	/**
	 Input json string has invalid type of property : support_band, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_SUPPORT_BAND_IN_STRUCT_WIFI_STATUS = 4970,

	/**
	 Input json string has invalid value of property : support_band, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_SUPPORT_BAND_IN_STRUCT_WIFI_STATUS = 4971,

	/**
	 Input json string has invalid type of property : tx_data, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TX_DATA_IN_STRUCT_WIFI_STATUS = 4972,

	/**
	 Input json string has invalid value of property : tx_data, please check out #struct_wifi_status for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TX_DATA_IN_STRUCT_WIFI_STATUS = 4973,

	/**
	 Input json string has invalid type of property : extra_info, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_EXTRA_INFO_IN_STRUCT_DEVICE_ELEMENT = 4974,

	/**
	 Input json string has invalid value of property : extra_info, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_EXTRA_INFO_IN_STRUCT_DEVICE_ELEMENT = 4975,

	/**
	 Input json string has invalid type of property : neighbor, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_NEIGHBOR_IN_STRUCT_DEVICE_ELEMENT = 4976,

	/**
	 Input json string has invalid value of property : neighbor, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_NEIGHBOR_IN_STRUCT_DEVICE_ELEMENT = 4977,

	/**
	 Input json string has invalid type of property : al_mac, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_AL_MAC_IN_STRUCT_DEVICE_ELEMENT = 4978,

	/**
	 Input json string has invalid value of property : al_mac, please check out #struct_device_element for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_AL_MAC_IN_STRUCT_DEVICE_ELEMENT = 4979,

	/**
	 Input json string has invalid type of property : index, please check out #struct_log_element_log_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_INDEX_IN_STRUCT_LOG_ELEMENT_LOG_OUTPUT = 4980,

	/**
	 Input json string has invalid value of property : index, please check out #struct_log_element_log_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_INDEX_IN_STRUCT_LOG_ELEMENT_LOG_OUTPUT = 4981,

	/**
	 Input json string has invalid type of property : message, please check out #struct_log_element_log_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_MESSAGE_IN_STRUCT_LOG_ELEMENT_LOG_OUTPUT = 4982,

	/**
	 Input json string has invalid value of property : message, please check out #struct_log_element_log_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_MESSAGE_IN_STRUCT_LOG_ELEMENT_LOG_OUTPUT = 4983,

	/**
	 Input json string has invalid type of property : type, please check out #struct_log_element_log_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TYPE_IN_STRUCT_LOG_ELEMENT_LOG_OUTPUT = 4984,

	/**
	 Input json string has invalid value of property : type, please check out #struct_log_element_log_output for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TYPE_IN_STRUCT_LOG_ELEMENT_LOG_OUTPUT = 4985,

	/**
	 Input json string has invalid type in : struct_output_get_log_urn_zyxel_cpe_system_zyxel_system_log, please check out #struct_output_get_log_urn_zyxel_cpe_system_zyxel_system_log for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_OUTPUT_GET_LOG_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LOG = 4986,

	/**
	 Input json string has invalid type of property : firmware, please check out #struct_input_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_FIRMWARE_IN_STRUCT_INPUT_UPLOAD = 4987,

	/**
	 Input json string has invalid value of property : firmware, please check out #struct_input_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_FIRMWARE_IN_STRUCT_INPUT_UPLOAD = 4988,

	/**
	 Input json string has invalid type in : struct_input_upload, please check out #struct_input_upload for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_STRUCT_INPUT_UPLOAD = 4989,

	/**
	 Cannot set the root object or property, since it is read only.
	 */
	ZapiErrorCode_OBJECT_IS_READ_ONLY = 4990,

	/**
	 Properties with mandatory or key element should always be set.
	 */
	ZapiErrorCode_KEY_ELEMENTS_MANDATORY_MUST_BE_SET = 4991,

	/**
	 Indicates that on Realtek vendor specific boards, the apmib was failed to init.
	 */
	ZapiErrorCode_APMIB_INIT_FAILED = 4992,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INET_IPV4_ADDRESS_PATTERN_INCORRECT = 4993,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INET_IPV4_ADDRESS_NO_ZONE_PATTERN_INCORRECT = 4994,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INET_IPV6_ADDRESS_NO_ZONE_PATTERN_INCORRECT = 4995,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_UINT8_RANGE_INCORRECT = 4996,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_YANG_DOTTED_QUAD_PATTERN_INCORRECT = 4997,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_YANG_MAC_ADDRESS_PATTERN_INCORRECT = 4998,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_UINT16_RANGE_INCORRECT = 4999,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_LEAFREF_RANGE_INCORRECT = 5000,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_MATCHALL_STRING_TYPE_PATTERN_INCORRECT = 5001,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_GROUP_NAME_TYPE_PATTERN_INCORRECT = 5002,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_GROUP_NAME_TYPE_LENGTH_INCORRECT = 5003,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_STRING_LENGTH_INCORRECT = 5004,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INET_IPV6_ADDRESS_PATTERN_INCORRECT = 5005,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_STRING_PATTERN_INCORRECT = 5006,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_DECIMAL64_RANGE_INCORRECT = 5007,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_YANG_DATE_AND_TIME_PATTERN_INCORRECT = 5008,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_YANG_HEX_STRING_PATTERN_INCORRECT = 5009,

	/**
	 Input json string has invalid type of property : tag, please check out #struct_output_transfer_certificate for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_TAG_IN_STRUCT_OUTPUT_TRANSFER_CERTIFICATE = 5010,

	/**
	 Input json string has invalid value of property : tag, please check out #struct_output_transfer_certificate for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_TAG_IN_STRUCT_OUTPUT_TRANSFER_CERTIFICATE = 5011,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_YANG_PHYS_ADDRESS_PATTERN_INCORRECT = 5012,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_UINT32_RANGE_INCORRECT = 5013,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INT32_RANGE_INCORRECT = 5014,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_WIFI_TYPES_CHANNEL_2G_RANGE_INCORRECT = 5015,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_ZYXEL_TYPE_PORT_NUMBER_RANGE_INCORRECT = 5016,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_XML_LANG_PATTERN_INCORRECT = 5017,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_XML_LANG_LENGTH_INCORRECT = 5018,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_LEAFREF_PATTERN_INCORRECT = 5019,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INT16_RANGE_INCORRECT = 5020,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INET_DOMAIN_NAME_PATTERN_INCORRECT = 5021,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_INET_DOMAIN_NAME_LENGTH_INCORRECT = 5022,

	/**
	 Value did not meet the restriction.
	 */
	ZapiErrorCode_IANACH_CRYPT_HASH_PATTERN_INCORRECT = 5023,

	/**
	 Input json string has invalid type of property : represent_mac, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_PROPERTY_REPRESENT_MAC_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 5024,

	/**
	 Input json string has invalid value of property : represent_mac, please check out #struct_device_element_device for more information.
	 */
	ZapiErrorCode_FROM_JSON_INVALID_TYPE_VALUE_REPRESENT_MAC_IN_STRUCT_DEVICE_ELEMENT_DEVICE = 5025,

};

