//  ZapiDataModelEnum.h
//  Zapi
//  
//  Created by Zyxel Zapi code generate tool on 2017/07/25.
//  Copyright © 2017 Zyxel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZapiErrorCode.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark - Enum

/**
 Namespace of current data model.
 
  Used in the following data model: 
 
- 
 
 */
typedef NS_ENUM(NSUInteger, EnumNamespace) {

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-nat__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-nat
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_NAT,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-wan-profile__, Namespace of urn:zyxel:cpe:system:zyxel-system-wan-profile
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WAN_PROFILE,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-opmode__, Namespace of urn:zyxel:cpe:system:zyxel-system-opmode
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_OPMODE,

	/**
	 As in YANG: __urn:ietf:params:xml:ns:yang:ietf-netconf-acm__, Namespace of urn:ietf:params:xml:ns:yang:ietf-netconf-acm
	 */
	EnumNamespace_URN_IETF_PARAMS_XML_NS_YANG_IETF_NETCONF_ACM,

	/**
	 As in YANG: __urn:zyxel:cpe:interface:zyxel-interface-radio__, Namespace of urn:zyxel:cpe:interface:zyxel-interface-radio
	 */
	EnumNamespace_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_RADIO,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-network-device__, Namespace of urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_NETWORK_DEVICE,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-easy123__, Namespace of urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_EASY123,

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-server-control__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-server-control
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_SERVER_CONTROL,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-speed-test__, Namespace of urn:zyxel:cpe:system:zyxel-system-speed-test
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_SPEED_TEST,

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-dhcp-server__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-dhcp-server
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_DHCP_SERVER,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-firmware-upgrade__, Namespace of urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_FIRMWARE_UPGRADE,

	/**
	 As in YANG: __urn:zyxel:cpe:application:zyxel-tic-tac-toe__, Namespace of urn:zyxel:cpe:application:zyxel-tic-tac-toe
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATION_ZYXEL_TIC_TAC_TOE,

	/**
	 As in YANG: __urn:zyxel:cpe:interface:zyxel-interface-apply__, Namespace of urn:zyxel:cpe:interface:zyxel-interface-apply
	 */
	EnumNamespace_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_APPLY,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate__, Namespace of urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM_CERTIFICATE,

	/**
	 As in YANG: __urn:ietf:params:xml:ns:yang:ietf-interfaces__, Namespace of urn:ietf:params:xml:ns:yang:ietf-interfaces
	 */
	EnumNamespace_URN_IETF_PARAMS_XML_NS_YANG_IETF_INTERFACES,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy__, Namespace of urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_BLUETOOTH_LOW_ENERGY,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-cloud__, Namespace of urn:zyxel:cpe:system:zyxel-system-cloud
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CLOUD,

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_IPV4_FIREWALL,

	/**
	 As in YANG: __urn:zyxel:cpe:interface:zyxel-interface-ssid__, Namespace of urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumNamespace_URN_ZYXEL_CPE_INTERFACE_ZYXEL_INTERFACE_SSID,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-capability__, Namespace of urn:zyxel:cpe:system:zyxel-system-capability
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_CAPABILITY,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-wifi-system-log__, Namespace of urn:zyxel:cpe:system:zyxel-wifi-system-log
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_WIFI_SYSTEM_LOG,

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-parental-control__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_PARENTAL_CONTROL,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-lan-profile__, Namespace of urn:zyxel:cpe:system:zyxel-system-lan-profile
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_LAN_PROFILE,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system__, Namespace of urn:zyxel:cpe:system:zyxel-system
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM,

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-upnp__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-upnp
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_UPNP,

	/**
	 As in YANG: __urn:zyxel:cpe:system:zyxel-system-wifi-system__, Namespace of urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumNamespace_URN_ZYXEL_CPE_SYSTEM_ZYXEL_SYSTEM_WIFI_SYSTEM,

	/**
	 As in YANG: __urn:zyxel:cpe:applications:zyxel-applications-echo-server__, Namespace of urn:zyxel:cpe:applications:zyxel-applications-echo-server
	 */
	EnumNamespace_URN_ZYXEL_CPE_APPLICATIONS_ZYXEL_APPLICATIONS_ECHO_SERVER,
};

/**
 Namespace of current data model.
 
  Used in the following data model: 
 
- 
 
 */
typedef NS_ENUM(NSUInteger, EnumRoot) {

	/**
	 As in YANG: __nat__, Root of nat under namespace: urn:zyxel:cpe:applications:zyxel-applications-nat
	 */
	EnumRoot_NAT,

	/**
	 As in YANG: __wan__, Root of wan under namespace: urn:zyxel:cpe:system:zyxel-system-wan-profile
	 */
	EnumRoot_WAN,

	/**
	 As in YANG: __top__, Root of top under namespace: urn:zyxel:cpe:system:zyxel-system-opmode, urn:zyxel:cpe:applications:zyxel-applications-oneconnect, urn:zyxel:cpe:system:zyxel-system-language, urn:zyxel:cpe:applications:zyxel-applications-bandwidth, urn:zyxel:cpe:applications:zyxel-applications-dhcpv6-server, urn:zyxel:cpe:applications:zyxel-applications-dhcp-server, urn:zyxel:cpe:applications:zyxel-applications-ftp-server, urn:zyxel:cpe:system:zyxel-system-log, urn:zyxel:cpe:applications:zyxel-applications-nat-general, urn:zyxel:cpe:applications:zyxel-applications-samba, urn:zyxel:cpe:system:zyxel-wifi-system-log, urn:zyxel:cpe:applications:zyxel-applications-parental-control, urn:zyxel:cpe:applications:zyxel-applications-upnp
	 */
	EnumRoot_TOP,

	/**
	 As in YANG: __nacm__, Root of nacm under namespace: urn:ietf:params:xml:ns:yang:ietf-netconf-acm
	 */
	EnumRoot_NACM,

	/**
	 As in YANG: __get-channel-list__, Root of get-channel-list under namespace: urn:zyxel:cpe:interface:zyxel-interface-radio
	 */
	EnumRoot_GET_CHANNEL_LIST,

	/**
	 As in YANG: __network-devices__, Root of network-devices under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_NETWORK_DEVICES,

	/**
	 As in YANG: __remove-device-customized-data__, Root of remove-device-customized-data under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_REMOVE_DEVICE_CUSTOMIZED_DATA,

	/**
	 As in YANG: __set-host-type__, Root of set-host-type under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_SET_HOST_TYPE,

	/**
	 As in YANG: __set-host-name__, Root of set-host-name under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_SET_HOST_NAME,

	/**
	 As in YANG: __device-information__, Root of device-information under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_DEVICE_INFORMATION,

	/**
	 As in YANG: __device-status__, Root of device-status under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_DEVICE_STATUS,

	/**
	 As in YANG: __set-device-name__, Root of set-device-name under namespace: urn:zyxel:cpe:system:zyxel-system-network-device
	 */
	EnumRoot_SET_DEVICE_NAME,

	/**
	 As in YANG: __access-easy123__, Root of access-easy123 under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_ACCESS_EASY123,

	/**
	 As in YANG: __set-wifi__, Root of set-wifi under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_SET_WIFI,

	/**
	 As in YANG: __is-default-password__, Root of is-default-password under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_IS_DEFAULT_PASSWORD,

	/**
	 As in YANG: __access-internet-status__, Root of access-internet-status under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_ACCESS_INTERNET_STATUS,

	/**
	 As in YANG: __is-wan-port-connected__, Root of is-wan-port-connected under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_IS_WAN_PORT_CONNECTED,

	/**
	 As in YANG: __get-wifi-configuration__, Root of get-wifi-configuration under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_GET_WIFI_CONFIGURATION,

	/**
	 As in YANG: __is-wifi-button-on__, Root of is-wifi-button-on under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_IS_WIFI_BUTTON_ON,

	/**
	 As in YANG: __detect-wan-proto__, Root of detect-wan-proto under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_DETECT_WAN_PROTO,

	/**
	 As in YANG: __ever-easy123__, Root of ever-easy123 under namespace: urn:zyxel:cpe:system:zyxel-system-easy123
	 */
	EnumRoot_EVER_EASY123,

	/**
	 As in YANG: __server-control__, Root of server-control under namespace: urn:zyxel:cpe:applications:zyxel-applications-server-control
	 */
	EnumRoot_SERVER_CONTROL,

	/**
	 As in YANG: __get-history__, Root of get-history under namespace: urn:zyxel:cpe:system:zyxel-system-speed-test
	 */
	EnumRoot_GET_HISTORY,

	/**
	 As in YANG: __speed-test__, Root of speed-test under namespace: urn:zyxel:cpe:system:zyxel-system-speed-test
	 */
	EnumRoot_SPEED_TEST,

	/**
	 As in YANG: __test-result__, Root of test-result under namespace: urn:zyxel:cpe:system:zyxel-system-speed-test
	 */
	EnumRoot_TEST_RESULT,

	/**
	 As in YANG: __clean-history__, Root of clean-history under namespace: urn:zyxel:cpe:system:zyxel-system-speed-test
	 */
	EnumRoot_CLEAN_HISTORY,

	/**
	 As in YANG: __add-static-ip__, Root of add-static-ip under namespace: urn:zyxel:cpe:applications:zyxel-applications-dhcp-server
	 */
	EnumRoot_ADD_STATIC_IP,

	/**
	 As in YANG: __on-line-cancel__, Root of on-line-cancel under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_ON_LINE_CANCEL,

	/**
	 As in YANG: __on-line-check__, Root of on-line-check under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_ON_LINE_CHECK,

	/**
	 As in YANG: __upgrade-after-upload__, Root of upgrade-after-upload under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_UPGRADE_AFTER_UPLOAD,

	/**
	 As in YANG: __on-line-download__, Root of on-line-download under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_ON_LINE_DOWNLOAD,

	/**
	 As in YANG: __upload__, Root of upload under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_UPLOAD,

	/**
	 As in YANG: __on-line-upgrade__, Root of on-line-upgrade under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_ON_LINE_UPGRADE,

	/**
	 As in YANG: __on-line-download-status__, Root of on-line-download-status under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_ON_LINE_DOWNLOAD_STATUS,

	/**
	 As in YANG: __upgrade-status__, Root of upgrade-status under namespace: urn:zyxel:cpe:system:zyxel-system-firmware-upgrade
	 */
	EnumRoot_UPGRADE_STATUS,

	/**
	 As in YANG: __tic-tac-toe__, Root of tic-tac-toe under namespace: urn:zyxel:cpe:application:zyxel-tic-tac-toe
	 */
	EnumRoot_TIC_TAC_TOE,

	/**
	 As in YANG: __apply-wifi-interface-setting__, Root of apply-wifi-interface-setting under namespace: urn:zyxel:cpe:interface:zyxel-interface-apply
	 */
	EnumRoot_APPLY_WIFI_INTERFACE_SETTING,

	/**
	 As in YANG: __transfer-certificate__, Root of transfer-certificate under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate
	 */
	EnumRoot_TRANSFER_CERTIFICATE,

	/**
	 As in YANG: __get-private-key-path__, Root of get-private-key-path under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system-certificate
	 */
	EnumRoot_GET_PRIVATE_KEY_PATH,

	/**
	 As in YANG: __interfaces-state__, Root of interfaces-state under namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces
	 */
	EnumRoot_INTERFACES_STATE,

	/**
	 As in YANG: __interfaces__, Root of interfaces under namespace: urn:ietf:params:xml:ns:yang:ietf-interfaces
	 */
	EnumRoot_INTERFACES,

	/**
	 As in YANG: __ble-state__, Root of ble-state under namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy
	 */
	EnumRoot_BLE_STATE,

	/**
	 As in YANG: __action-for-ble__, Root of action-for-ble under namespace: urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy
	 */
	EnumRoot_ACTION_FOR_BLE,

	/**
	 As in YANG: __pair-unpair__, Root of pair-unpair under namespace: urn:zyxel:cpe:system:zyxel-system-cloud
	 */
	EnumRoot_PAIR_UNPAIR,

	/**
	 As in YANG: __firewall__, Root of firewall under namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall
	 */
	EnumRoot_FIREWALL,

	/**
	 As in YANG: __unblock__, Root of unblock under namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumRoot_UNBLOCK,

	/**
	 As in YANG: __block__, Root of block under namespace: urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall, urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumRoot_BLOCK,

	/**
	 As in YANG: __generate-pin-code__, Root of generate-pin-code under namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumRoot_GENERATE_PIN_CODE,

	/**
	 As in YANG: __site-survey__, Root of site-survey under namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumRoot_SITE_SURVEY,

	/**
	 As in YANG: __press-start-button__, Root of press-start-button under namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumRoot_PRESS_START_BUTTON,

	/**
	 As in YANG: __press-push-button__, Root of press-push-button under namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumRoot_PRESS_PUSH_BUTTON,

	/**
	 As in YANG: __clear-setting__, Root of clear-setting under namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumRoot_CLEAR_SETTING,

	/**
	 As in YANG: __wps-button-pin-status__, Root of wps-button-pin-status under namespace: urn:zyxel:cpe:interface:zyxel-interface-ssid
	 */
	EnumRoot_WPS_BUTTON_PIN_STATUS,

	/**
	 As in YANG: __capability__, Root of capability under namespace: urn:zyxel:cpe:system:zyxel-system-capability
	 */
	EnumRoot_CAPABILITY,

	/**
	 As in YANG: __dump-file__, Root of dump-file under namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log
	 */
	EnumRoot_DUMP_FILE,

	/**
	 As in YANG: __clear__, Root of clear under namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log
	 */
	EnumRoot_CLEAR,

	/**
	 As in YANG: __get-log__, Root of get-log under namespace: urn:zyxel:cpe:system:zyxel-wifi-system-log
	 */
	EnumRoot_GET_LOG,

	/**
	 As in YANG: __bonus__, Root of bonus under namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumRoot_BONUS,

	/**
	 As in YANG: __add-device__, Root of add-device under namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumRoot_ADD_DEVICE,

	/**
	 As in YANG: __remove-device__, Root of remove-device under namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumRoot_REMOVE_DEVICE,

	/**
	 As in YANG: __delete-profile__, Root of delete-profile under namespace: urn:zyxel:cpe:applications:zyxel-applications-parental-control
	 */
	EnumRoot_DELETE_PROFILE,

	/**
	 As in YANG: __lan__, Root of lan under namespace: urn:zyxel:cpe:system:zyxel-system-lan-profile
	 */
	EnumRoot_LAN,

	/**
	 As in YANG: __set-current-datetime__, Root of set-current-datetime under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SET_CURRENT_DATETIME,

	/**
	 As in YANG: __system-shutdown__, Root of system-shutdown under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_SHUTDOWN,

	/**
	 As in YANG: __system-config-restore__, Root of system-config-restore under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_CONFIG_RESTORE,

	/**
	 As in YANG: __system-factory-password__, Root of system-factory-password under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_FACTORY_PASSWORD,

	/**
	 As in YANG: __system-config-upload__, Root of system-config-upload under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_CONFIG_UPLOAD,

	/**
	 As in YANG: __system-config-backup__, Root of system-config-backup under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_CONFIG_BACKUP,

	/**
	 As in YANG: __system__, Root of system under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM,

	/**
	 As in YANG: __system-state__, Root of system-state under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_STATE,

	/**
	 As in YANG: __system-wake-on-lan__, Root of system-wake-on-lan under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_WAKE_ON_LAN,

	/**
	 As in YANG: __api-version__, Root of api-version under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_API_VERSION,

	/**
	 As in YANG: __system-restart__, Root of system-restart under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_RESTART,

	/**
	 As in YANG: __current-band-width__, Root of current-band-width under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_CURRENT_BAND_WIDTH,

	/**
	 As in YANG: __system-reset-to-default__, Root of system-reset-to-default under namespace: urn:zyxel:cpe:system:zyxel-system
	 */
	EnumRoot_SYSTEM_RESET_TO_DEFAULT,

	/**
	 As in YANG: __system-devices-state__, Root of system-devices-state under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_SYSTEM_DEVICES_STATE,

	/**
	 As in YANG: __switch-led__, Root of switch-led under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_SWITCH_LED,

	/**
	 As in YANG: __authorize-device__, Root of authorize-device under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_AUTHORIZE_DEVICE,

	/**
	 As in YANG: __finish-setup__, Root of finish-setup under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_FINISH_SETUP,

	/**
	 As in YANG: __unauthorize-device__, Root of unauthorize-device under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_UNAUTHORIZE_DEVICE,

	/**
	 As in YANG: __reset-wifi-system__, Root of reset-wifi-system under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_RESET_WIFI_SYSTEM,

	/**
	 As in YANG: __naming__, Root of naming under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_NAMING,

	/**
	 As in YANG: __retrive-device-information__, Root of retrive-device-information under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_RETRIVE_DEVICE_INFORMATION,

	/**
	 As in YANG: __restart__, Root of restart under namespace: urn:zyxel:cpe:system:zyxel-system-wifi-system
	 */
	EnumRoot_RESTART,

	/**
	 As in YANG: __get-mac__, Root of get-mac under namespace: urn:zyxel:cpe:applications:zyxel-applications-echo-server
	 */
	EnumRoot_GET_MAC,
};

/**
 Zapi filter type, used for selector & filter.
 
  Used in the following data model: 
 
- 
 
 */
typedef NS_ENUM(NSUInteger, EnumZapiFilterType) {

	/**
	 As in YANG: __None__, default not set, as in key & value not exist.
	 */
	EnumZapiFilterType_NONE,

	/**
	 As in YANG: __Value is set__, will output its JSON key / value pair.
	 */
	EnumZapiFilterType_VALUE_IS_SET,

	/**
	 As in YANG: __Mark as filter__, will output its JSON key, but without value.
	 */
	EnumZapiFilterType_MARK_AS_FILTER,
};

/**
 reference TR181 Device.NAT.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-nat -> nat -> nat-interface-setting -> nat-interface-setting-element -> status
 
 */
typedef NS_ENUM(NSUInteger, EnumStatusNatInterfaceSettingElement) {

	/**
	 As in YANG: __Disabled__, Disabled
	 */
	EnumStatusNatInterfaceSettingElement_DISABLED,

	/**
	 As in YANG: __Enabled__, Enabled
	 */
	EnumStatusNatInterfaceSettingElement_ENABLED,

	/**
	 As in YANG: __Enabled_NATForcedDisabled__, Enabled_NATForcedDisabled
	 */
	EnumStatusNatInterfaceSettingElement_ENABLED_NATFORCEDDISABLED,

	/**
	 As in YANG: __Enabled_PortMappingDisabled__, Enabled_PortMappingDisabled
	 */
	EnumStatusNatInterfaceSettingElement_ENABLED_PORTMAPPINGDISABLED,

	/**
	 As in YANG: __Error_Misconfigured__, Error_Misconfigured
	 */
	EnumStatusNatInterfaceSettingElement_ERROR_MISCONFIGURED,

	/**
	 As in YANG: __Error__, Error
	 */
	EnumStatusNatInterfaceSettingElement_ERROR,
};

/**
 reference Device.NAT.PortMapping.{i}.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-nat -> nat -> nat-port-mapping -> nat-port-mapping-element -> status
- urn:zyxel:cpe:applications:zyxel-applications-dhcp-server -> top -> dhcp-server-pool -> dhcp-server-pool-element -> status
 
 */
typedef NS_ENUM(NSUInteger, EnumStatus) {

	/**
	 As in YANG: __Disabled__, Disabled
	 */
	EnumStatus_DISABLED,

	/**
	 As in YANG: __Enabled__, Enabled
	 */
	EnumStatus_ENABLED,

	/**
	 As in YANG: __Error_Misconfigured__, Error_Misconfigured
	 */
	EnumStatus_ERROR_MISCONFIGURED,

	/**
	 As in YANG: __Error__, Error
	 */
	EnumStatus_ERROR,
};

/**
 automatically configured by DHCPC or manually configured.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-tunneling -> sixrd-profile -> auto_6rd
 
 */
typedef NS_ENUM(NSUInteger, EnumAuto6rd) {

	/**
	 As in YANG: __auto__, Auto.
	 */
	EnumAuto6rd_AUTO,

	/**
	 As in YANG: __static__, Static.
	 */
	EnumAuto6rd_STATIC,
};

/**
 Tunneling type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-tunneling -> tunneling-type
 
 */
typedef NS_ENUM(NSUInteger, EnumTunnelingType) {

	/**
	 As in YANG: __None__, None.
	 */
	EnumTunnelingType_NONE,

	/**
	 As in YANG: __6RD__, 6RD.
	 */
	EnumTunnelingType_6RD,

	/**
	 As in YANG: __6to4__, 6to4.
	 */
	EnumTunnelingType_6TO4,

	/**
	 As in YANG: __6in4__, 6in4.
	 */
	EnumTunnelingType_6IN4,
};

/**
 DNS server define type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-dns-server -> first-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-dns-server -> second-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-dns-server -> third-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv4-dns-server -> first-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv4-dns-server -> second-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv4-dns-server -> third-dns-server -> dns-server
 
 */
typedef NS_ENUM(NSUInteger, EnumDnsServer) {

	/**
	 As in YANG: __Obtain from ISP__, Obtain from ISP.
	 */
	EnumDnsServer_OBTAIN_FROM_ISP,

	/**
	 As in YANG: __User-Defined__, User defined.
	 */
	EnumDnsServer_USER_DEFINED,

	/**
	 As in YANG: __None__, None
	 */
	EnumDnsServer_NONE,
};

/**
 The support wan encapsulation list of this device.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> support-encapsulation -> support-encapsulation-element
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> wan-encapsulation
 
 */
typedef NS_ENUM(NSUInteger, EnumSupportEncapsulationElement) {

	/**
	 As in YANG: __IPoE__, IPoE.
	 */
	EnumSupportEncapsulationElement_IPOE,

	/**
	 As in YANG: __PPPoE__, PPPoE.
	 */
	EnumSupportEncapsulationElement_PPPOE,

	/**
	 As in YANG: __PPTP__, PPTP.
	 */
	EnumSupportEncapsulationElement_PPTP,
};

/**
 The type for setting WAN mac address.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> wan-mac -> wan-mac-setting
 
 */
typedef NS_ENUM(NSUInteger, EnumWanMacSetting) {

	/**
	 As in YANG: __Default-MAC__, Factory default MAC.
	 */
	EnumWanMacSetting_DEFAULT_MAC,

	/**
	 As in YANG: __Clone-computer-MAC__, Clone the computer's MAC address - IP Address.
	 */
	EnumWanMacSetting_CLONE_COMPUTER_MAC,

	/**
	 As in YANG: __Set-WAN-MAC__, Set WAN MAC Address.
	 */
	EnumWanMacSetting_SET_WAN_MAC,
};

/**
 Multicast setup.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> multicast-setup
 
 */
typedef NS_ENUM(NSUInteger, EnumMulticastSetup) {

	/**
	 As in YANG: __None__, None
	 */
	EnumMulticastSetup_NONE,

	/**
	 As in YANG: __IGMPv1/v2__, IGMPv1/v2
	 */
	EnumMulticastSetup_IGMPV1_V2,
};

/**
 The optoin for obtaining an IPv6 address from DHCPv6 server.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-address -> dhcp -> option
 
 */
typedef NS_ENUM(NSUInteger, EnumOption) {

	/**
	 As in YANG: __DUID-LL__, DUID Based on Link-layer Address.
	 */
	EnumOption_DUID_LL,

	/**
	 As in YANG: __DUID-LLT__, DUID Based on Link-layer Address Plus Time.
	 */
	EnumOption_DUID_LLT,
};

/**
 WAN IPv6 assignment address type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv6-address -> ip-address-setting
 
 */
typedef NS_ENUM(NSUInteger, EnumIpAddressSetting) {

	/**
	 As in YANG: __DHCP__, DHCP.
	 */
	EnumIpAddressSetting_DHCP,

	/**
	 As in YANG: __Static IP__, Static IP.
	 */
	EnumIpAddressSetting_STATIC_IP,

	/**
	 As in YANG: __Link local only__, Link local only.
	 */
	EnumIpAddressSetting_LINK_LOCAL_ONLY,
};

/**
 The type for setting WAN IP address.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> wan-ip-assignment -> wan-ip-setting
 
 */
typedef NS_ENUM(NSUInteger, EnumWanIpSetting) {

	/**
	 As in YANG: __From-ISP__, Get automatically from ISP.
	 */
	EnumWanIpSetting_FROM_ISP,

	/**
	 As in YANG: __Fixed-IP__, Use Fixed IP Address.
	 */
	EnumWanIpSetting_FIXED_IP,
};

/**
 IP address setting.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ip-address -> ip-address-setting
 
 */
typedef NS_ENUM(NSUInteger, EnumIpAddressSettingIpAddress) {

	/**
	 As in YANG: __DHCP Client__, DHCP client.
	 */
	EnumIpAddressSettingIpAddress_DHCP_CLIENT,

	/**
	 As in YANG: __Static IP__, Static IP Address.
	 */
	EnumIpAddressSettingIpAddress_STATIC_IP,
};

/**
 Encryption type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> pptp-setting -> encryption
 
 */
typedef NS_ENUM(NSUInteger, EnumEncryption) {

	/**
	 As in YANG: __Auto__, Auto.
	 */
	EnumEncryption_AUTO,

	/**
	 As in YANG: __None__, None.
	 */
	EnumEncryption_NONE,

	/**
	 As in YANG: __40__, 40.
	 */
	EnumEncryption_40,

	/**
	 As in YANG: __128__, 128.
	 */
	EnumEncryption_128,
};

/**
 IPv4/IPv6
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wan-profile -> wan -> wan-settings -> wan-settings-element -> ipv4-ipv6
 
 */
typedef NS_ENUM(NSUInteger, EnumIpv4Ipv6) {

	/**
	 As in YANG: __IPv4 Only__, IPv4 Only.
	 */
	EnumIpv4Ipv6_IPV4_ONLY,

	/**
	 As in YANG: __Dual Stack__, Dual Stack.
	 */
	EnumIpv4Ipv6_DUAL_STACK,

	/**
	 As in YANG: __IPv6 Only__, IPv6 Only.
	 */
	EnumIpv4Ipv6_IPV6_ONLY,
};

/**
 The operation mode.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-opmode -> top -> opmode
 
 */
typedef NS_ENUM(NSUInteger, EnumOpmode) {

	/**
	 As in YANG: __Router__, Router
	 */
	EnumOpmode_ROUTER,

	/**
	 As in YANG: __Access_Point__, Access Point
	 */
	EnumOpmode_ACCESS_POINT,

	/**
	 As in YANG: __Universal_Repeater__, Universal Repeater
	 */
	EnumOpmode_UNIVERSAL_REPEATER,

	/**
	 As in YANG: __WISP__, WISP
	 */
	EnumOpmode_WISP,

	/**
	 As in YANG: __WISP_Universal_Repeater__, WISP Universal Repeater
	 */
	EnumOpmode_WISP_UNIVERSAL_REPEATER,
};

/**
 This enumeration is code generated for setting/getting the union of: 0, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> group -> group-element -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemGroupElement) {

	/**
	 As in YANG: __union_of_matchall-string-type__, Representing that current union item of `0` is `union_of_matchall-string-type`.
	 */
	EnumCurrentUnionItemGroupElement_UNION_OF_MATCHALL_STRING_TYPE,

	/**
	 As in YANG: __union_of_group-name-type__, Representing that current union item of `0` is `union_of_group-name-type`.
	 */
	EnumCurrentUnionItemGroupElement_UNION_OF_GROUP_NAME_TYPE,
};

/**
 This enumeration is code generated for setting/getting the union of: access-operations, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> rule -> rule-element -> access-operations -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemAccessOperations) {

	/**
	 As in YANG: __union_of_matchall-string-type__, Representing that current union item of `access-operations` is `union_of_matchall-string-type`.
	 */
	EnumCurrentUnionItemAccessOperations_UNION_OF_MATCHALL_STRING_TYPE,

	/**
	 As in YANG: __union_of_access-operations-type__, Representing that current union item of `access-operations` is `union_of_access-operations-type`.
	 */
	EnumCurrentUnionItemAccessOperations_UNION_OF_ACCESS_OPERATIONS_TYPE,
};

/**
 This enumeration is code generated for setting/getting the union of: notification-name, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> rule -> rule-element -> rule-type -> case_notification -> notification-name -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemNotificationName) {

	/**
	 As in YANG: __union_of_matchall-string-type__, Representing that current union item of `notification-name` is `union_of_matchall-string-type`.
	 */
	EnumCurrentUnionItemNotificationName_UNION_OF_MATCHALL_STRING_TYPE,

	/**
	 As in YANG: __union_of_string__, Representing that current union item of `notification-name` is `union_of_string`.
	 */
	EnumCurrentUnionItemNotificationName_UNION_OF_STRING,
};

/**
 This enumeration is code generated for setting/getting the union of: rpc-name, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> rule -> rule-element -> rule-type -> case_protocol-operation -> rpc-name -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemRpcName) {

	/**
	 As in YANG: __union_of_matchall-string-type__, Representing that current union item of `rpc-name` is `union_of_matchall-string-type`.
	 */
	EnumCurrentUnionItemRpcName_UNION_OF_MATCHALL_STRING_TYPE,

	/**
	 As in YANG: __union_of_string__, Representing that current union item of `rpc-name` is `union_of_string`.
	 */
	EnumCurrentUnionItemRpcName_UNION_OF_STRING,
};

/**
 This enumeration is code generated for setting/getting the choice of: rule-type, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> rule -> rule-element -> rule-type -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseRuleType) {

	/**
	 As in YANG: __case_notification__, Representing that current case of choice `rule-type` is `case_notification`.
	 */
	EnumCurrentCaseRuleType_CASE_NOTIFICATION,

	/**
	 As in YANG: __case_protocol-operation__, Representing that current case of choice `rule-type` is `case_protocol-operation`.
	 */
	EnumCurrentCaseRuleType_CASE_PROTOCOL_OPERATION,

	/**
	 As in YANG: __case_data-node__, Representing that current case of choice `rule-type` is `case_data-node`.
	 */
	EnumCurrentCaseRuleType_CASE_DATA_NODE,
};

/**
 The access control action associated with therule.  If a rule is determined to match aparticular request, then this object is usedto determine whether to permit or deny therequest.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> rule -> rule-element -> action
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> read-default
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> write-default
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> exec-default
 
 */
typedef NS_ENUM(NSUInteger, EnumActionType) {

	/**
	 As in YANG: __permit__, Requested action is permitted.
	 */
	EnumActionType_PERMIT,

	/**
	 As in YANG: __deny__, Requested action is denied.
	 */
	EnumActionType_DENY,
};

/**
 This enumeration is code generated for setting/getting the union of: module-name, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-netconf-acm -> nacm -> rule-list -> rule-list-element -> rule -> rule-element -> module-name -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemModuleName) {

	/**
	 As in YANG: __union_of_matchall-string-type__, Representing that current union item of `module-name` is `union_of_matchall-string-type`.
	 */
	EnumCurrentUnionItemModuleName_UNION_OF_MATCHALL_STRING_TYPE,

	/**
	 As in YANG: __union_of_string__, Representing that current union item of `module-name` is `union_of_string`.
	 */
	EnumCurrentUnionItemModuleName_UNION_OF_STRING,
};

/**
 The radio band.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:interface:zyxel-interface-radio -> get-channel-list -> input -> band
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-radio:operating-frequency-band
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-radio:operating-frequency-band
- urn:zyxel:cpe:interface:zyxel-interface-ssid -> site-survey -> output -> site-survey-result -> site-survey-result-element -> radio
- urn:zyxel:cpe:system:zyxel-system-capability -> capability -> interfaces -> wifi-interface-mapping -> wifi-interface-mapping-element -> radio
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesRadioBand) {

	/**
	 As in YANG: __2.4GHz__, 2.4GHz
	 */
	EnumWifiTypesRadioBand_2_4GHZ,

	/**
	 As in YANG: __5GHz__, 5GHz
	 */
	EnumWifiTypesRadioBand_5GHZ,
};

/**
 The selected bandwidth.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:interface:zyxel-interface-radio -> get-channel-list -> input -> bandwidth
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-radio:operating-channel-bandwidth
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesChannelBandwidth) {

	/**
	 As in YANG: __20__, 20
	 */
	EnumWifiTypesChannelBandwidth_20,

	/**
	 As in YANG: __40__, 40
	 */
	EnumWifiTypesChannelBandwidth_40,

	/**
	 As in YANG: __80__, 80
	 */
	EnumWifiTypesChannelBandwidth_80,

	/**
	 As in YANG: __80_80__, 80_80
	 */
	EnumWifiTypesChannelBandwidth_80_80,

	/**
	 As in YANG: __160__, 160
	 */
	EnumWifiTypesChannelBandwidth_160,

	/**
	 As in YANG: __Auto__, Auto
	 */
	EnumWifiTypesChannelBandwidth_AUTO,
};

/**
 network device type
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-network-device -> network-devices -> device -> device-element -> device-type
 
 */
typedef NS_ENUM(NSUInteger, EnumDeviceType) {

	/**
	 As in YANG: __unknown__, Unknown type
	 */
	EnumDeviceType_UNKNOWN,

	/**
	 As in YANG: __l2-device__, device support IEEE1905.1
	 */
	EnumDeviceType_L2_DEVICE,

	/**
	 As in YANG: __pure-l2__, device support pure layer2 protocol such as switch and pure powerline.
	 */
	EnumDeviceType_PURE_L2,

	/**
	 As in YANG: __z-wave__, z-wave device
	 */
	EnumDeviceType_Z_WAVE,

	/**
	 As in YANG: __zigbee__, zigbee device
	 */
	EnumDeviceType_ZIGBEE,

	/**
	 As in YANG: __client__, normal client host
	 */
	EnumDeviceType_CLIENT,
};

/**
 the radio device is linked
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-network-device -> network-devices -> device -> device-element -> wifi-status -> radio
 
 */
typedef NS_ENUM(NSUInteger, EnumRadio) {

	/**
	 As in YANG: __unknown__, unknown radio type
	 */
	EnumRadio_UNKNOWN,

	/**
	 As in YANG: __2.4GHz__, 2.4GHz
	 */
	EnumRadio_2_4GHZ,

	/**
	 As in YANG: __5GHz__, 5GHz
	 */
	EnumRadio_5GHZ,
};

/**
 network device connection type
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-network-device -> network-devices -> device -> device-element -> connection-type
 
 */
typedef NS_ENUM(NSUInteger, EnumConnectionType) {

	/**
	 As in YANG: __unknown__, unknown connection type
	 */
	EnumConnectionType_UNKNOWN,

	/**
	 As in YANG: __wifi__, device use wifi to connect with network
	 */
	EnumConnectionType_WIFI,

	/**
	 As in YANG: __powerline__, device use powerline to connect with network
	 */
	EnumConnectionType_POWERLINE,

	/**
	 As in YANG: __zwave__, device use zwave to connect with network
	 */
	EnumConnectionType_ZWAVE,

	/**
	 As in YANG: __zigbee__, device use zigbee to connect with networ
	 */
	EnumConnectionType_ZIGBEE,

	/**
	 As in YANG: __ethernet__, device use ethernet to connect with networ
	 */
	EnumConnectionType_ETHERNET,
};

/**
 This enumeration is code generated for setting/getting the choice of: device-function, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-network-device -> device-information -> device-information -> device-information-element -> device-function -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseDeviceFunction) {

	/**
	 As in YANG: __case_l2-device__, Representing that current case of choice `device-function` is `case_l2-device`.
	 */
	EnumCurrentCaseDeviceFunction_CASE_L2_DEVICE,
};

/**
 This enumeration is code generated for setting/getting the choice of: connecting-type, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-network-device -> device-status -> device-status -> device-status-element -> connecting-type -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseConnectingType) {

	/**
	 As in YANG: __case_zwave__, Representing that current case of choice `connecting-type` is `case_zwave`.
	 */
	EnumCurrentCaseConnectingType_CASE_ZWAVE,

	/**
	 As in YANG: __case_wifi__, Representing that current case of choice `connecting-type` is `case_wifi`.
	 */
	EnumCurrentCaseConnectingType_CASE_WIFI,
};

/**
 This enumeration is code generated for setting/getting the choice of: psk, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-easy123 -> set-wifi -> input -> psk -> current-case
- urn:zyxel:cpe:system:zyxel-system-easy123 -> get-wifi-configuration -> output -> psk -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCasePsk) {

	/**
	 As in YANG: __case_key-passphrase__, Representing that current case of choice `psk` is `case_key-passphrase`.
	 */
	EnumCurrentCasePsk_CASE_KEY_PASSPHRASE,

	/**
	 As in YANG: __case_presharedkey__, Representing that current case of choice `psk` is `case_presharedkey`.
	 */
	EnumCurrentCasePsk_CASE_PRESHAREDKEY,
};

/**
 The setting is applied to main or guest network.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-easy123 -> set-wifi -> input -> network
- urn:zyxel:cpe:system:zyxel-system-easy123 -> get-wifi-configuration -> input -> network
 
 */
typedef NS_ENUM(NSUInteger, EnumNetworkType) {

	/**
	 As in YANG: __Main__, Main WiFi configuration.
	 */
	EnumNetworkType_MAIN,

	/**
	 As in YANG: __Guest__, Guest WiFi configuration.
	 */
	EnumNetworkType_GUEST,

	/**
	 As in YANG: __Backhaul__, Backhaul WiFi configuration.
	 */
	EnumNetworkType_BACKHAUL,
};

/**
 The protocol.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-easy123 -> detect-wan-proto -> output -> proto
 
 */
typedef NS_ENUM(NSUInteger, EnumProto) {

	/**
	 As in YANG: __PPPoE__, PPPoE service is available on wan port.
	 */
	EnumProto_PPPOE,

	/**
	 As in YANG: __IPoE__, IPoE service is available on wan port.
	 */
	EnumProto_IPOE,
};

/**
 Action to the server service.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-server-control -> server-control -> input -> action
 
 */
typedef NS_ENUM(NSUInteger, EnumActionMode) {

	/**
	 As in YANG: __Start__, Start the server service.
	 */
	EnumActionMode_START,

	/**
	 As in YANG: __Stop__, Stop the server service.
	 */
	EnumActionMode_STOP,

	/**
	 As in YANG: __Restart__, Restart the server service.
	 */
	EnumActionMode_RESTART,
};

/**
 The server service name.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-server-control -> server-control -> input -> service
 
 */
typedef NS_ENUM(NSUInteger, EnumServiceType) {

	/**
	 As in YANG: __Echo-Server__, Echo server.
	 */
	EnumServiceType_ECHO_SERVER,

	/**
	 As in YANG: __FW-FTP__, FTP server for downloading firmware.
	 */
	EnumServiceType_FW_FTP,

	/**
	 As in YANG: __XMPP-Agent__, FTP server for downloading firmware.
	 */
	EnumServiceType_XMPP_AGENT,
};

/**
 The current status of the test.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-speed-test -> get-history -> output -> status
 
 */
typedef NS_ENUM(NSUInteger, EnumStatusOutputGetHistory) {

	/**
	 As in YANG: __Running__, There is a test running currently.
	 */
	EnumStatusOutputGetHistory_RUNNING,

	/**
	 As in YANG: __Done__, The is no test running currently.
	 */
	EnumStatusOutputGetHistory_DONE,
};

/**
 The target of the test.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-speed-test -> get-history -> output -> history -> history-element -> target
- urn:zyxel:cpe:system:zyxel-system-speed-test -> speed-test -> input -> target
 
 */
typedef NS_ENUM(NSUInteger, EnumTarget) {

	/**
	 As in YANG: __Internet__, The peer side is internet.
	 */
	EnumTarget_INTERNET,

	/**
	 As in YANG: __Gateway__, The peer side is gateway.
	 */
	EnumTarget_GATEWAY,
};

/**
 The response of the test request.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-speed-test -> speed-test -> output -> response
 
 */
typedef NS_ENUM(NSUInteger, EnumResponse) {

	/**
	 As in YANG: __OK__, The will start the test.
	 */
	EnumResponse_OK,

	/**
	 As in YANG: __FAIL-ON-GOING__, The system is executing test now, it cannot accept anotherrequest.
	 */
	EnumResponse_FAIL_ON_GOING,

	/**
	 As in YANG: __FAIL-OTHERS__, The system is not able to do the test for some reasons.
	 */
	EnumResponse_FAIL_OTHERS,
};

/**
 The current status of the test.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-speed-test -> test-result -> output -> status
 
 */
typedef NS_ENUM(NSUInteger, EnumStatusOutputTestResult) {

	/**
	 As in YANG: __Running__, The test is still running.
	 */
	EnumStatusOutputTestResult_RUNNING,

	/**
	 As in YANG: __Done__, The test is done.
	 */
	EnumStatusOutputTestResult_DONE,
};

/**
 This enumeration is code generated for setting/getting the union of: lease-time-remaining, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-dhcp-server -> top -> dhcp-server-pool -> dhcp-server-pool-element -> dhcp-server-client -> dhcp-server-client-element -> dhcp-server-client-ipv4-address -> dhcp-server-client-ipv4-address-element -> lease-time-remaining -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemLeaseTimeRemaining) {

	/**
	 As in YANG: __union_of_yang:date-and-time__, Representing that current union item of `lease-time-remaining` is `union_of_yang:date-and-time`.
	 */
	EnumCurrentUnionItemLeaseTimeRemaining_UNION_OF_YANG_DATE_AND_TIME,

	/**
	 As in YANG: __union_of_int32__, Representing that current union item of `lease-time-remaining` is `union_of_int32`.
	 */
	EnumCurrentUnionItemLeaseTimeRemaining_UNION_OF_INT32,
};

/**
 VendorClassID pattern match criterion. Enumeration of:ExactPrefixSuffixSubstringFor example, if VendorClassID is Example then an Option 60 value of Example-device will match with VendorClassIDModevalues of Prefix or Substring, but not with Exact or Suffix.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-dhcp-server -> top -> dhcp-server-pool -> dhcp-server-pool-element -> vendor-class-id-mode
 
 */
typedef NS_ENUM(NSUInteger, EnumVendorClassIdMode) {

	/**
	 As in YANG: __Exact__, Exact
	 */
	EnumVendorClassIdMode_EXACT,

	/**
	 As in YANG: __Prefix__, Prefix
	 */
	EnumVendorClassIdMode_PREFIX,

	/**
	 As in YANG: __Suffix__, Suffix
	 */
	EnumVendorClassIdMode_SUFFIX,

	/**
	 As in YANG: __Substring__, Substring
	 */
	EnumVendorClassIdMode_SUBSTRING,
};

/**
 The status of firmeare download.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-firmware-upgrade -> on-line-download-status -> output -> result
 
 */
typedef NS_ENUM(NSUInteger, EnumResult) {

	/**
	 As in YANG: __success__, The firmware is downloaded successfully.
	 */
	EnumResult_SUCCESS,

	/**
	 As in YANG: __fail__, It is fail to download the firmware.
	 */
	EnumResult_FAIL,

	/**
	 As in YANG: __processing__, The firmware is downloading.
	 */
	EnumResult_PROCESSING,
};

/**
 The status of firmware upgrade.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-firmware-upgrade -> upgrade-status -> output -> status
 
 */
typedef NS_ENUM(NSUInteger, EnumStatusOutput) {

	/**
	 As in YANG: __Downloading__, The firmware is downloading.
	 */
	EnumStatusOutput_DOWNLOADING,

	/**
	 As in YANG: __Writing__, The firmware is writing to storage or flash.
	 */
	EnumStatusOutput_WRITING,

	/**
	 As in YANG: __Syncing__, The firmware is syncing to extenders.
	 */
	EnumStatusOutput_SYNCING,

	/**
	 As in YANG: __Rebooting__, The device is going to reboot.
	 */
	EnumStatusOutput_REBOOTING,

	/**
	 As in YANG: __Done__, The firmware is upgraded and rebooted.
	 */
	EnumStatusOutput_DONE,

	/**
	 As in YANG: __Fail__, The firmware is not upgraded successfully.
	 */
	EnumStatusOutput_FAIL,
};

/**
 Status of current game.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> game-status
 
 */
typedef NS_ENUM(NSUInteger, EnumGameStatus) {

	/**
	 As in YANG: __Waiting for start__, The game is not started yet, currently waiting for start.
	 */
	EnumGameStatus_WAITING_FOR_START,

	/**
	 As in YANG: __Playing__, The game is currently playing.
	 */
	EnumGameStatus_PLAYING,

	/**
	 As in YANG: __Player-won__, The game has finished by the result won by player.
	 */
	EnumGameStatus_PLAYER_WON,

	/**
	 As in YANG: __Boss-won__, The game has finished by the result won by boss.
	 */
	EnumGameStatus_BOSS_WON,
};

/**
 Square of Row 1, Col 1 in grid.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-3-col-1
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-3-col-3
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-3-col-2
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-1-col-3
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-1-col-2
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-1-col-1
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-2-col-1
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-2-col-2
- urn:zyxel:cpe:application:zyxel-tic-tac-toe -> tic-tac-toe -> grid -> row-2-col-3
 
 */
typedef NS_ENUM(NSUInteger, EnumSquareStatus) {

	/**
	 As in YANG: __empty__, The square is currently empty.
	 */
	EnumSquareStatus_EMPTY,

	/**
	 As in YANG: __player__, The square is taken by player.
	 */
	EnumSquareStatus_PLAYER,

	/**
	 As in YANG: __boss__, The square is taken by boss.
	 */
	EnumSquareStatus_BOSS,
};

/**
 The duplex mode available to this connection.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-ethernet:ethernet -> if-ethernet:duplex
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-ethernet:ethernet -> if-ethernet:transmission-params -> case_if-ethernet:manual -> if-ethernet:duplex
 
 */
typedef NS_ENUM(NSUInteger, EnumIfEthernetDuplex) {

	/**
	 As in YANG: __half__, Half duplex.
	 */
	EnumIfEthernetDuplex_HALF,

	/**
	 As in YANG: __full__, Full duplex.
	 */
	EnumIfEthernetDuplex_FULL,
};

/**
 Describes the PPP encryption protocol.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-ppp:encryption-protocol
 
 */
typedef NS_ENUM(NSUInteger, EnumIfPppEncryptionProtocol) {

	/**
	 As in YANG: __None__, None.
	 */
	EnumIfPppEncryptionProtocol_NONE,

	/**
	 As in YANG: __MPP__, MPP.
	 */
	EnumIfPppEncryptionProtocol_MPP,
};

/**
 Describes the PPP authentication protocol.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-ppp:authentication-protocol
 
 */
typedef NS_ENUM(NSUInteger, EnumIfPppAuthenticationProtocol) {

	/**
	 As in YANG: __PAP__, PAP.
	 */
	EnumIfPppAuthenticationProtocol_PAP,

	/**
	 As in YANG: __CHAP__, CHAP.
	 */
	EnumIfPppAuthenticationProtocol_CHAP,

	/**
	 As in YANG: __MS-CHAP__, MS-CHAP.
	 */
	EnumIfPppAuthenticationProtocol_MS_CHAP,
};

/**
 The current operational state of the interface.This leaf has the same semantics as ifOperStatus.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> oper-status
 
 */
typedef NS_ENUM(NSUInteger, EnumOperStatus) {

	/**
	 As in YANG: __up__, Ready to pass packets.
	 */
	EnumOperStatus_UP,

	/**
	 As in YANG: __down__, The interface does not pass any packets.
	 */
	EnumOperStatus_DOWN,

	/**
	 As in YANG: __testing__, In some test mode.  No operational packets canbe passed.
	 */
	EnumOperStatus_TESTING,

	/**
	 As in YANG: __unknown__, Status cannot be determined for some reason.
	 */
	EnumOperStatus_UNKNOWN,

	/**
	 As in YANG: __dormant__, Waiting for some external event.
	 */
	EnumOperStatus_DORMANT,

	/**
	 As in YANG: __not-present__, Some component (typically hardware) is missing.
	 */
	EnumOperStatus_NOT_PRESENT,

	/**
	 As in YANG: __lower-layer-down__, Down due to state of lower-layer interface(s).
	 */
	EnumOperStatus_LOWER_LAYER_DOWN,
};

/**
 Current status of this connection.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-ppp:connection-status
 
 */
typedef NS_ENUM(NSUInteger, EnumIfPppConnectionStatus) {

	/**
	 As in YANG: __Unconfigured__, Unconfigured.
	 */
	EnumIfPppConnectionStatus_UNCONFIGURED,

	/**
	 As in YANG: __Connecting__, Connecting.
	 */
	EnumIfPppConnectionStatus_CONNECTING,

	/**
	 As in YANG: __Authenticating__, Authenticating.
	 */
	EnumIfPppConnectionStatus_AUTHENTICATING,

	/**
	 As in YANG: __Connected__, Connected.
	 */
	EnumIfPppConnectionStatus_CONNECTED,

	/**
	 As in YANG: __PendingDisconnect__, PendingDisconnect.
	 */
	EnumIfPppConnectionStatus_PENDINGDISCONNECT,

	/**
	 As in YANG: __Disconnecting__, Disconnecting.
	 */
	EnumIfPppConnectionStatus_DISCONNECTING,

	/**
	 As in YANG: __Disconnected__, Disconnected.
	 */
	EnumIfPppConnectionStatus_DISCONNECTED,
};

/**
 The origin of this address.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv4 -> ip:address -> ip:address-element -> ip:origin
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv6 -> ip:address -> ip:address-element -> ip:origin
 
 */
typedef NS_ENUM(NSUInteger, EnumIpAddressOrigin) {

	/**
	 As in YANG: __other__, None of the following.
	 */
	EnumIpAddressOrigin_OTHER,

	/**
	 As in YANG: __static__, Indicates that the address has been staticallyconfigured - for example, using NETCONF or a Command LineInterface.
	 */
	EnumIpAddressOrigin_STATIC,

	/**
	 As in YANG: __dhcp__, Indicates an address that has been assigned to thissystem by a DHCP server.
	 */
	EnumIpAddressOrigin_DHCP,

	/**
	 As in YANG: __link-layer__, Indicates an address created by IPv6 statelessautoconfiguration that embeds a link-layer address in itsinterface identifier.
	 */
	EnumIpAddressOrigin_LINK_LAYER,

	/**
	 As in YANG: __random__, Indicates an address chosen by the system atrandom, e.g., an IPv4 address within 169.254/16, anRFC 4941 temporary address, or an RFC 7217 semanticallyopaque address.
	 */
	EnumIpAddressOrigin_RANDOM,
};

/**
 This enumeration is code generated for setting/getting the choice of: ip:subnet, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv4 -> ip:address -> ip:address-element -> ip:subnet -> current-case
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> ip:ipv4 -> ip:address -> ip:address-element -> ip:subnet -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCase) {

	/**
	 As in YANG: __case_ip:prefix-length__, Representing that current case of choice `ip:subnet` is `case_ip:prefix-length`.
	 */
	EnumCurrentCase_CASE_IP_PREFIX_LENGTH,

	/**
	 As in YANG: __case_ip:netmask__, Representing that current case of choice `ip:subnet` is `case_ip:netmask`.
	 */
	EnumCurrentCase_CASE_IP_NETMASK,
};

/**
 The origin of this neighbor entry.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv4 -> ip:neighbor -> ip:neighbor-element -> ip:origin
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv6 -> ip:neighbor -> ip:neighbor-element -> ip:origin
 
 */
typedef NS_ENUM(NSUInteger, EnumNeighborOrigin) {

	/**
	 As in YANG: __other__, None of the following.
	 */
	EnumNeighborOrigin_OTHER,

	/**
	 As in YANG: __static__, Indicates that the mapping has been staticallyconfigured - for example, using NETCONF or a Command LineInterface.
	 */
	EnumNeighborOrigin_STATIC,

	/**
	 As in YANG: __dynamic__, Indicates that the mapping has been dynamically resolvedusing, e.g., IPv4 ARP or the IPv6 Neighbor Discoveryprotocol.
	 */
	EnumNeighborOrigin_DYNAMIC,
};

/**
 The status of an address.  Most of the states correspondto states from the IPv6 Stateless AddressAutoconfiguration protocol.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv6 -> ip:address -> ip:address-element -> ip:status
 
 */
typedef NS_ENUM(NSUInteger, EnumIpStatus) {

	/**
	 As in YANG: __preferred__, This is a valid address that can appear as thedestination or source address of a packet.
	 */
	EnumIpStatus_PREFERRED,

	/**
	 As in YANG: __deprecated__, This is a valid but deprecated address that shouldno longer be used as a source address in newcommunications, but packets addressed to such anaddress are processed as expected.
	 */
	EnumIpStatus_DEPRECATED,

	/**
	 As in YANG: __invalid__, This isn't a valid address, and it shouldn't appearas the destination or source address of a packet.
	 */
	EnumIpStatus_INVALID,

	/**
	 As in YANG: __inaccessible__, The address is not accessible because the interfaceto which this address is assigned is notoperational.
	 */
	EnumIpStatus_INACCESSIBLE,

	/**
	 As in YANG: __unknown__, The status cannot be determined for some reason.
	 */
	EnumIpStatus_UNKNOWN,

	/**
	 As in YANG: __tentative__, The uniqueness of the address on the link is beingverified.  Addresses in this state should not beused for general communication and should only beused to determine the uniqueness of the address.
	 */
	EnumIpStatus_TENTATIVE,

	/**
	 As in YANG: __duplicate__, The address has been determined to be non-unique onthe link and so must not be used.
	 */
	EnumIpStatus_DUPLICATE,

	/**
	 As in YANG: __optimistic__, The address is available for use, subject torestrictions, while its uniqueness on a link isbeing verified.
	 */
	EnumIpStatus_OPTIMISTIC,
};

/**
 The Neighbor Unreachability Detection state of thisentry.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> ip:ipv6 -> ip:neighbor -> ip:neighbor-element -> ip:state
 
 */
typedef NS_ENUM(NSUInteger, EnumIpState) {

	/**
	 As in YANG: __incomplete__, Address resolution is in progress, and the link-layeraddress of the neighbor has not yet beendetermined.
	 */
	EnumIpState_INCOMPLETE,

	/**
	 As in YANG: __reachable__, Roughly speaking, the neighbor is known to have beenreachable recently (within tens of seconds ago).
	 */
	EnumIpState_REACHABLE,

	/**
	 As in YANG: __stale__, The neighbor is no longer known to be reachable, butuntil traffic is sent to the neighbor no attemptshould be made to verify its reachability.
	 */
	EnumIpState_STALE,

	/**
	 As in YANG: __delay__, The neighbor is no longer known to be reachable, andtraffic has recently been sent to the neighbor.Rather than probe the neighbor immediately, however,delay sending probes for a short while in order togive upper-layer protocols a chance to providereachability confirmation.
	 */
	EnumIpState_DELAY,

	/**
	 As in YANG: __probe__, The neighbor is no longer known to be reachable, andunicast Neighbor Solicitation probes are being sentto verify reachability.
	 */
	EnumIpState_PROBE,
};

/**
 The desired state of the interface.This leaf has the same read semantics as ifAdminStatus.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> admin-status
 
 */
typedef NS_ENUM(NSUInteger, EnumAdminStatus) {

	/**
	 As in YANG: __up__, Ready to pass packets.
	 */
	EnumAdminStatus_UP,

	/**
	 As in YANG: __down__, Not ready to pass packets and not in some test mode.
	 */
	EnumAdminStatus_DOWN,

	/**
	 As in YANG: __testing__, In some test mode.
	 */
	EnumAdminStatus_TESTING,
};

/**
 WPS configure status.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-ssid:wps-configured
 
 */
typedef NS_ENUM(NSUInteger, EnumIfSsidWpsConfigured) {

	/**
	 As in YANG: __Configured__, Indicates that the VAP settings cannot be configured by theexternal registrar and retains the present configuration.
	 */
	EnumIfSsidWpsConfigured_CONFIGURED,

	/**
	 As in YANG: __Unconfigured__, Indicates that the VAP settings are configured by WPS, after whichthe state changes to Configured.
	 */
	EnumIfSsidWpsConfigured_UNCONFIGURED,
};

/**
 Describes the PPP compression protocol.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces-state -> interface -> interface-element -> if-ppp:compression-protocol
 
 */
typedef NS_ENUM(NSUInteger, EnumIfPppCompressionProtocol) {

	/**
	 As in YANG: __None__, None.
	 */
	EnumIfPppCompressionProtocol_NONE,

	/**
	 As in YANG: __Van Jacobson ([RFC1332])__, Van Jacobson ([RFC1332]).
	 */
	EnumIfPppCompressionProtocol_VAN_JACOBSON___RFC1332__,

	/**
	 As in YANG: __STAC LZS ([RFC1974])__, STAC LZS ([RFC1974].
	 */
	EnumIfPppCompressionProtocol_STAC_LZS___RFC1974__,
};

/**
 Manually Set the speed.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-ethernet:ethernet -> if-ethernet:transmission-params -> case_if-ethernet:manual -> if-ethernet:speed
 
 */
typedef NS_ENUM(NSUInteger, EnumIfEthernetSpeed) {

	/**
	 As in YANG: __10Mb__, 10Mb.
	 */
	EnumIfEthernetSpeed_10MB,

	/**
	 As in YANG: __100Mb__, 100Mb.
	 */
	EnumIfEthernetSpeed_100MB,

	/**
	 As in YANG: __1Gb__, 1Gb.
	 */
	EnumIfEthernetSpeed_1GB,

	/**
	 As in YANG: __10Gb__, 10Gb.
	 */
	EnumIfEthernetSpeed_10GB,
};

/**
 This enumeration is code generated for setting/getting the choice of: if-ethernet:transmission-params, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-ethernet:ethernet -> if-ethernet:transmission-params -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseIfEthernetTransmissionParams) {

	/**
	 As in YANG: __case_if-ethernet:auto__, Representing that current case of choice `if-ethernet:transmission-params` is `case_if-ethernet:auto`.
	 */
	EnumCurrentCaseIfEthernetTransmissionParams_CASE_IF_ETHERNET_AUTO,

	/**
	 As in YANG: __case_if-ethernet:manual__, Representing that current case of choice `if-ethernet:transmission-params` is `case_if-ethernet:manual`.
	 */
	EnumCurrentCaseIfEthernetTransmissionParams_CASE_IF_ETHERNET_MANUAL,
};

/**
 The setting of output power.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-radio:transmit-power
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesTransmitPower) {

	/**
	 As in YANG: __10__, 10%
	 */
	EnumWifiTypesTransmitPower_10,

	/**
	 As in YANG: __25__, 25%
	 */
	EnumWifiTypesTransmitPower_25,

	/**
	 As in YANG: __50__, 50%
	 */
	EnumWifiTypesTransmitPower_50,

	/**
	 As in YANG: __75__, 75%
	 */
	EnumWifiTypesTransmitPower_75,

	/**
	 As in YANG: __90__, 90%
	 */
	EnumWifiTypesTransmitPower_90,

	/**
	 As in YANG: __100__, 100%
	 */
	EnumWifiTypesTransmitPower_100,
};

/**
 The operation mode of this radio like 802.11b/g/n for 2.4GHz,802.11a/n/ac for 5GHz.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-radio:operating-standard
- urn:zyxel:cpe:interface:zyxel-interface-ssid -> site-survey -> output -> site-survey-result -> site-survey-result-element -> mode
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesMode) {

	/**
	 As in YANG: __802.11b__, 802.11b
	 */
	EnumWifiTypesMode_802_11B,

	/**
	 As in YANG: __802.11g__, 802.11g
	 */
	EnumWifiTypesMode_802_11G,

	/**
	 As in YANG: __802.11b/g__, 802.11b/g
	 */
	EnumWifiTypesMode_802_11B_G,

	/**
	 As in YANG: __802.11n__, 802.11n
	 */
	EnumWifiTypesMode_802_11N,

	/**
	 As in YANG: __802.11g/n__, 802.11g/n
	 */
	EnumWifiTypesMode_802_11G_N,

	/**
	 As in YANG: __802.11b/g/n__, 802.11b/g/n
	 */
	EnumWifiTypesMode_802_11B_G_N,

	/**
	 As in YANG: __802.11a__, 802.11a
	 */
	EnumWifiTypesMode_802_11A,

	/**
	 As in YANG: __802.11a/n__, 802.11a/n
	 */
	EnumWifiTypesMode_802_11A_N,

	/**
	 As in YANG: __802.11a/n/ac__, 802.11a/n/ac
	 */
	EnumWifiTypesMode_802_11A_N_AC,
};

/**
 The security mode of this ssid.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-ssid:security
- urn:zyxel:cpe:interface:zyxel-interface-ssid -> site-survey -> output -> site-survey-result -> site-survey-result-element -> security
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesSecurityMode) {

	/**
	 As in YANG: __NONE__, NONE
	 */
	EnumWifiTypesSecurityMode_NONE,

	/**
	 As in YANG: __WEP-64__, WEP-64
	 */
	EnumWifiTypesSecurityMode_WEP_64,

	/**
	 As in YANG: __WEP-128__, WEP-128
	 */
	EnumWifiTypesSecurityMode_WEP_128,

	/**
	 As in YANG: __WPA-Personal__, WPA-Personal
	 */
	EnumWifiTypesSecurityMode_WPA_PERSONAL,

	/**
	 As in YANG: __WPA2-Personal__, WPA2-Personal
	 */
	EnumWifiTypesSecurityMode_WPA2_PERSONAL,

	/**
	 As in YANG: __WPA-WPA2-Personal__, WPA-WPA2-Personal
	 */
	EnumWifiTypesSecurityMode_WPA_WPA2_PERSONAL,

	/**
	 As in YANG: __WPA-Enterprise__, WPA-Enterprise
	 */
	EnumWifiTypesSecurityMode_WPA_ENTERPRISE,

	/**
	 As in YANG: __WPA2-Enterprise__, WPA2-Enterprise
	 */
	EnumWifiTypesSecurityMode_WPA2_ENTERPRISE,

	/**
	 As in YANG: __WPA-WPA2-Enterprise__, WPA-WPA2-Enterprise
	 */
	EnumWifiTypesSecurityMode_WPA_WPA2_ENTERPRISE,
};

/**
 The mode of this interface. Station, Access Point or others.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-ssid:ssid-mode
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesSsidMode) {

	/**
	 As in YANG: __station__, Station
	 */
	EnumWifiTypesSsidMode_STATION,

	/**
	 As in YANG: __ap__, Access point
	 */
	EnumWifiTypesSsidMode_AP,
};

/**
 Controls whether linkUp/linkDown SNMP notificationsshould be generated for this interface.If this node is not configured, the value 'enabled' isoperationally used by the server for interfaces that donot operate on top of any other interface (i.e., there areno 'lower-layer-if' entries), and 'disabled' otherwise.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> link-up-down-trap-enable
 
 */
typedef NS_ENUM(NSUInteger, EnumLinkUpDownTrapEnable) {

	/**
	 As in YANG: __enabled__
	 */
	EnumLinkUpDownTrapEnable_ENABLED,

	/**
	 As in YANG: __disabled__
	 */
	EnumLinkUpDownTrapEnable_DISABLED,
};

/**
 This enumeration is code generated for setting/getting the choice of: if-ssid:psk, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-ssid:psk-setting -> if-ssid:psk -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseIfSsidPsk) {

	/**
	 As in YANG: __case_if-ssid:key-passphrase__, Representing that current case of choice `if-ssid:psk` is `case_if-ssid:key-passphrase`.
	 */
	EnumCurrentCaseIfSsidPsk_CASE_IF_SSID_KEY_PASSPHRASE,

	/**
	 As in YANG: __case_if-ssid:presharedkey__, Representing that current case of choice `if-ssid:psk` is `case_if-ssid:presharedkey`.
	 */
	EnumCurrentCaseIfSsidPsk_CASE_IF_SSID_PRESHAREDKEY,
};

/**
 EnumWifiTypesChannel5g
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-radio:channel -> union_of_wifi-types:channel-5g
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesChannel5g) {

	/**
	 As in YANG: __36__, Channel 36
	 */
	EnumWifiTypesChannel5g_36,

	/**
	 As in YANG: __40__, Channel 40
	 */
	EnumWifiTypesChannel5g_40,

	/**
	 As in YANG: __44__, Channel 44
	 */
	EnumWifiTypesChannel5g_44,

	/**
	 As in YANG: __48__, Channel 48
	 */
	EnumWifiTypesChannel5g_48,

	/**
	 As in YANG: __52__, Channel 52
	 */
	EnumWifiTypesChannel5g_52,

	/**
	 As in YANG: __56__, Channel 56
	 */
	EnumWifiTypesChannel5g_56,

	/**
	 As in YANG: __60__, Channel 60
	 */
	EnumWifiTypesChannel5g_60,

	/**
	 As in YANG: __64__, Channel 64
	 */
	EnumWifiTypesChannel5g_64,

	/**
	 As in YANG: __100__, Channel 100
	 */
	EnumWifiTypesChannel5g_100,

	/**
	 As in YANG: __104__, Channel 104
	 */
	EnumWifiTypesChannel5g_104,

	/**
	 As in YANG: __108__, Channel 108
	 */
	EnumWifiTypesChannel5g_108,

	/**
	 As in YANG: __112__, Channel 112
	 */
	EnumWifiTypesChannel5g_112,

	/**
	 As in YANG: __116__, Channel 116
	 */
	EnumWifiTypesChannel5g_116,

	/**
	 As in YANG: __120__, Channel 120
	 */
	EnumWifiTypesChannel5g_120,

	/**
	 As in YANG: __124__, Channel 124
	 */
	EnumWifiTypesChannel5g_124,

	/**
	 As in YANG: __128__, Channel 128
	 */
	EnumWifiTypesChannel5g_128,

	/**
	 As in YANG: __132__, Channel 132
	 */
	EnumWifiTypesChannel5g_132,

	/**
	 As in YANG: __136__, Channel 136
	 */
	EnumWifiTypesChannel5g_136,

	/**
	 As in YANG: __140__, Channel 140
	 */
	EnumWifiTypesChannel5g_140,

	/**
	 As in YANG: __144__, Channel 144
	 */
	EnumWifiTypesChannel5g_144,

	/**
	 As in YANG: __149__, Channel 149
	 */
	EnumWifiTypesChannel5g_149,

	/**
	 As in YANG: __153__, Channel 153
	 */
	EnumWifiTypesChannel5g_153,

	/**
	 As in YANG: __157__, Channel 157
	 */
	EnumWifiTypesChannel5g_157,

	/**
	 As in YANG: __161__, Channel 161
	 */
	EnumWifiTypesChannel5g_161,

	/**
	 As in YANG: __165__, Channel 165
	 */
	EnumWifiTypesChannel5g_165,
};

/**
 This enumeration is code generated for setting/getting the union of: if-radio:channel, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:ietf:params:xml:ns:yang:ietf-interfaces -> interfaces -> interface -> interface-element -> if-radio:channel -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemIfRadioChannel) {

	/**
	 As in YANG: __union_of_wifi-types:channel-2g__, Representing that current union item of `if-radio:channel` is `union_of_wifi-types:channel-2g`.
	 */
	EnumCurrentUnionItemIfRadioChannel_UNION_OF_WIFI_TYPES_CHANNEL_2G,

	/**
	 As in YANG: __union_of_wifi-types:channel-5g__, Representing that current union item of `if-radio:channel` is `union_of_wifi-types:channel-5g`.
	 */
	EnumCurrentUnionItemIfRadioChannel_UNION_OF_WIFI_TYPES_CHANNEL_5G,
};

/**
 Current state of BLE.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy -> ble-state -> output -> state
- urn:zyxel:cpe:system:zyxel-system-bluetooth-low-energy -> action-for-ble -> input -> action
 
 */
typedef NS_ENUM(NSUInteger, EnumBleStatus) {

	/**
	 As in YANG: __BLE_OFF__, BLE is off (when getting ble-status), or turn off BLE(when action).
	 */
	EnumBleStatus_BLE_OFF,

	/**
	 As in YANG: __BLE_ON__, BLE is on (when getting ble-status), or turn on BLE(when action).
	 */
	EnumBleStatus_BLE_ON,
};

/**
 Action.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-cloud -> pair-unpair -> input -> action
 
 */
typedef NS_ENUM(NSUInteger, EnumAction) {

	/**
	 As in YANG: __Pair__, Pair device and cloud.
	 */
	EnumAction_PAIR,

	/**
	 As in YANG: __Unpair__, Unpair device and cloud.
	 */
	EnumAction_UNPAIR,
};

/**
 Default action for packets not matching any of the level rules.Enumeration of:- Drop (The firewall discards packets matching this rule)- Accept (The firewall forwards packets matching this rule)
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall -> firewall -> target
 
 */
typedef NS_ENUM(NSUInteger, EnumTargetFirewall) {

	/**
	 As in YANG: __Drop__, The firewall discards packets matching this rule.
	 */
	EnumTargetFirewall_DROP,

	/**
	 As in YANG: __Accept__, The firewall forwards packets matching this rule.
	 */
	EnumTargetFirewall_ACCEPT,
};

/**
 Respond to the ICMP request form the interface.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall -> firewall -> icmp-respond-to-ping-interface
 
 */
typedef NS_ENUM(NSUInteger, EnumIcmpRespondToPingInterface) {

	/**
	 As in YANG: __disable__, Disable.
	 */
	EnumIcmpRespondToPingInterface_DISABLE,

	/**
	 As in YANG: __lan__, LAN.
	 */
	EnumIcmpRespondToPingInterface_LAN,

	/**
	 As in YANG: __wan__, WAN.
	 */
	EnumIcmpRespondToPingInterface_WAN,

	/**
	 As in YANG: __both__, LAN&WAN.
	 */
	EnumIcmpRespondToPingInterface_BOTH,
};

/**
 The protocol for this rule.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-ipv4-firewall -> firewall -> filter-rule -> filter-rule-element -> protocol
 
 */
typedef NS_ENUM(NSUInteger, EnumProtocol) {

	/**
	 As in YANG: __TCP__, TCP
	 */
	EnumProtocol_TCP,

	/**
	 As in YANG: __UDP__, UDP
	 */
	EnumProtocol_UDP,

	/**
	 As in YANG: __ICMP__, ICMP
	 */
	EnumProtocol_ICMP,
};

/**
 WPS button PIN status.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:interface:zyxel-interface-ssid -> press-start-button -> output -> wps-status
- urn:zyxel:cpe:interface:zyxel-interface-ssid -> press-push-button -> output -> wps-status
- urn:zyxel:cpe:interface:zyxel-interface-ssid -> wps-button-pin-status -> output -> wps-status
 
 */
typedef NS_ENUM(NSUInteger, EnumWifiTypesWpsStatus) {

	/**
	 As in YANG: __0__, No result.
	 */
	EnumWifiTypesWpsStatus_0,

	/**
	 As in YANG: __1__, PIN error.
	 */
	EnumWifiTypesWpsStatus_1,

	/**
	 As in YANG: __2__, Overlap.
	 */
	EnumWifiTypesWpsStatus_2,

	/**
	 As in YANG: __3__, Time out.
	 */
	EnumWifiTypesWpsStatus_3,

	/**
	 As in YANG: __4__, Success.
	 */
	EnumWifiTypesWpsStatus_4,
};

/**
 Operation type of rpc.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> request-container -> rpc -> operation
 
 */
typedef NS_ENUM(NSUInteger, EnumOperationType) {

	/**
	 As in YANG: __get-config__, Retrieve all or part of a specified configuration.
	 */
	EnumOperationType_GET_CONFIG,

	/**
	 As in YANG: __edit-config__, The <edit-config> operation loads all or part of a specifiedconfiguration to the specified target configuration.
	 */
	EnumOperationType_EDIT_CONFIG,

	/**
	 As in YANG: __rpc__, rpc, for customizing operation throughout modules.
	 */
	EnumOperationType_RPC,
};

/**
 The configuration source type when edit-config for the operation.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> request-container -> rpc -> params -> target
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> request-container -> rpc -> params -> source
 
 */
typedef NS_ENUM(NSUInteger, EnumConfigSource) {

	/**
	 As in YANG: __running__, The running configuration is the config source.
	 */
	EnumConfigSource_RUNNING,

	/**
	 As in YANG: __candidate__, The candidate configuration is the config source.
	 */
	EnumConfigSource_CANDIDATE,

	/**
	 As in YANG: __startup__, The startup configuration is the config source.
	 */
	EnumConfigSource_STARTUP,

	/**
	 As in YANG: __url__, The URL-based configuration is the config source.
	 */
	EnumConfigSource_URL,
};

/**
 The error option when operation type is edit-config.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> request-container -> rpc -> params -> error-option
 
 */
typedef NS_ENUM(NSUInteger, EnumErrorOption) {

	/**
	 As in YANG: __stop-on-error__, Abort the <edit-config> operation on firsterror.  This is the default error-option.
	 */
	EnumErrorOption_STOP_ON_ERROR,

	/**
	 As in YANG: __continue-on-error__, Continue to process configuration data onerror; error is recorded, and negative response is generatedif any errors occur.
	 */
	EnumErrorOption_CONTINUE_ON_ERROR,

	/**
	 As in YANG: __rollback-on-error__, If an error condition occurs such that anerror severity <rpc-error> element is generated, the serverwill stop processing the <edit-config> operation and restorethe specified configuration to its complete state at thestart of this <edit-config> operation.  This option requiresthe server to support the :rollback-on-error capabilitydescribed in Section 8.5.
	 */
	EnumErrorOption_ROLLBACK_ON_ERROR,
};

/**
 The configuration filter type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> request-container -> rpc -> params -> filter -> filter-element -> type
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> request-container -> rpc -> params -> config -> config-element -> type
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> response-container -> rpc-reply -> data -> data-element -> type
 
 */
typedef NS_ENUM(NSUInteger, EnumFilterType) {

	/**
	 As in YANG: __subtree__, Subtree or XPath filter to use.
	 */
	EnumFilterType_SUBTREE,

	/**
	 As in YANG: __xpath__, NETCONF :xpath capability;If the server advertises the :xpathcapability for a session, then this feature mustalso be enabled for that session.  Otherwise,this feature must not be enabled.
	 */
	EnumFilterType_XPATH,
};

/**
 The type of error of this rpc-error.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> response-container -> rpc-reply -> rpc-error -> error-type
 
 */
typedef NS_ENUM(NSUInteger, EnumErrorType) {

	/**
	 As in YANG: __transport__, layer: Secure Transport
	 */
	EnumErrorType_TRANSPORT,

	/**
	 As in YANG: __rpc__, layer: Messages
	 */
	EnumErrorType_RPC,

	/**
	 As in YANG: __protocol__, layer: Operations
	 */
	EnumErrorType_PROTOCOL,

	/**
	 As in YANG: __application__, layer: Content
	 */
	EnumErrorType_APPLICATION,
};

/**
 Contains a string identifying the error severity, asdetermined by the device.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> response-container -> rpc-reply -> rpc-error -> error-severity
 
 */
typedef NS_ENUM(NSUInteger, EnumErrorSeverity) {

	/**
	 As in YANG: __error__, Error.
	 */
	EnumErrorSeverity_ERROR,

	/**
	 As in YANG: __warning__, Warning.
	 */
	EnumErrorSeverity_WARNING,
};

/**
 Operation type of top most rpc, not opertation type rpc.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:application:zyxel-zapi-request-response -> response-container -> rpc-reply -> result
 
 */
typedef NS_ENUM(NSUInteger, EnumReplyResult) {

	/**
	 As in YANG: __ok__, Request executed successfully.
	 */
	EnumReplyResult_OK,

	/**
	 As in YANG: __error__, Error occured while perform request.
	 */
	EnumReplyResult_ERROR,
};

/**
 The type of this interface.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-capability -> capability -> interfaces -> wifi-interface-mapping -> wifi-interface-mapping-element -> type
 
 */
typedef NS_ENUM(NSUInteger, EnumWfiiInterfaceType) {

	/**
	 As in YANG: __Main_AP__, Main AP.
	 */
	EnumWfiiInterfaceType_MAIN_AP,

	/**
	 As in YANG: __Guest_AP__, Guest AP.
	 */
	EnumWfiiInterfaceType_GUEST_AP,

	/**
	 As in YANG: __Backhaul_AP__, Backhaul AP.
	 */
	EnumWfiiInterfaceType_BACKHAUL_AP,

	/**
	 As in YANG: __Backhaul_STA__, Backhaul STA.
	 */
	EnumWfiiInterfaceType_BACKHAUL_STA,

	/**
	 As in YANG: __MESH__, MESH interface.
	 */
	EnumWfiiInterfaceType_MESH,

	/**
	 As in YANG: __MESH_AP__, MESH interface with AP function.
	 */
	EnumWfiiInterfaceType_MESH_AP,
};

/**
 The severity threshold for output log.EMERGENCY: 0ALERT:     1CRITICAL:  2ERROR:     3WARNING:   4NOTICE:    5INFO:      6DEBUG:     7
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-wifi-system-log -> get-log -> input -> severity
- urn:zyxel:cpe:system:zyxel-wifi-system-log -> get-log -> output -> log -> log-element -> severity
 
 */
typedef NS_ENUM(NSUInteger, EnumLogSeverity) {

	/**
	 As in YANG: __Emergency__, Log severity level is Emergency.
	 */
	EnumLogSeverity_EMERGENCY,

	/**
	 As in YANG: __Alert__, Log severity level is Alert.
	 */
	EnumLogSeverity_ALERT,

	/**
	 As in YANG: __Critical__, Log severity level is Critical.
	 */
	EnumLogSeverity_CRITICAL,

	/**
	 As in YANG: __Error__, Log severity level is Error.
	 */
	EnumLogSeverity_ERROR,

	/**
	 As in YANG: __Warning__, Log severity level is Warning.
	 */
	EnumLogSeverity_WARNING,

	/**
	 As in YANG: __Notice__, Log severity level is Notice.
	 */
	EnumLogSeverity_NOTICE,

	/**
	 As in YANG: __Info__, Log severity level is Info.
	 */
	EnumLogSeverity_INFO,

	/**
	 As in YANG: __Debug__, Log severity level is Debug.
	 */
	EnumLogSeverity_DEBUG,
};

/**
 The WiFi system log message type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-wifi-system-log -> get-log -> output -> log -> log-element -> type
 
 */
typedef NS_ENUM(NSUInteger, EnumType) {

	/**
	 As in YANG: __Connection__, Backhaul connection.
	 */
	EnumType_CONNECTION,

	/**
	 As in YANG: __Internet__, Internet connection.
	 */
	EnumType_INTERNET,

	/**
	 As in YANG: __Others__, Other log.
	 */
	EnumType_OTHERS,
};

/**
 The policy of the rule.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-parental-control -> top -> profiles -> profiles-element -> schedule
- urn:zyxel:cpe:applications:zyxel-applications-parental-control -> top -> profiles -> profiles-element -> immediate-block-state -> state
- urn:zyxel:cpe:applications:zyxel-applications-parental-control -> top -> profiles -> profiles-element -> content-filtering -> service-setting
 
 */
typedef NS_ENUM(NSUInteger, EnumSchedule) {

	/**
	 As in YANG: __Allow__, Allow.
	 */
	EnumSchedule_ALLOW,

	/**
	 As in YANG: __Block__, Block.
	 */
	EnumSchedule_BLOCK,
};

/**
 The device MAC is mutual exclusion to profile or not.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:applications:zyxel-applications-parental-control -> add-device -> input -> devices -> devices-element -> mode
 
 */
typedef NS_ENUM(NSUInteger, EnumMode) {

	/**
	 As in YANG: __Unique__, The mac is allowed to add into only one profile.
	 */
	EnumMode_UNIQUE,

	/**
	 As in YANG: __Union__, The mac is allowed to add into more than one profile.
	 */
	EnumMode_UNION,
};

/**
 DNS server define type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> case_Access_Point -> ipv4-dns-server -> second-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> case_Access_Point -> ipv4-dns-server -> first-dns-server -> dns-server
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> case_Access_Point -> ipv4-dns-server -> third-dns-server -> dns-server
 
 */
typedef NS_ENUM(NSUInteger, EnumDnsServerSecondDnsServer) {

	/**
	 As in YANG: __Obtain from ISP__, Obtain from ISP.
	 */
	EnumDnsServerSecondDnsServer_OBTAIN_FROM_ISP,

	/**
	 As in YANG: __User-Defined__, User defined.
	 */
	EnumDnsServerSecondDnsServer_USER_DEFINED,

	/**
	 As in YANG: __None__, None.
	 */
	EnumDnsServerSecondDnsServer_NONE,
};

/**
 IP address.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> case_Access_Point -> ip-address -> ip-address-setting
 
 */
typedef NS_ENUM(NSUInteger, EnumIpAddressSettingIpAddressCaseAccessPoint) {

	/**
	 As in YANG: __DHCP Client__, DHCP client.
	 */
	EnumIpAddressSettingIpAddressCaseAccessPoint_DHCP_CLIENT,

	/**
	 As in YANG: __Static IP__, Static IP.
	 */
	EnumIpAddressSettingIpAddressCaseAccessPoint_STATIC_IP,
};

/**
 LAN IPv6 assignment address type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> case_Router -> lan-ipv6-address-assignment -> assignment
 
 */
typedef NS_ENUM(NSUInteger, EnumAssignment) {

	/**
	 As in YANG: __DHCPv6-PD__, DHCPv6-PD.
	 */
	EnumAssignment_DHCPV6_PD,

	/**
	 As in YANG: __Static IP__, Static IP.
	 */
	EnumAssignment_STATIC_IP,

	/**
	 As in YANG: __Link Local__, Link local.
	 */
	EnumAssignment_LINK_LOCAL,

	/**
	 As in YANG: __ULA__, Unique local address.
	 */
	EnumAssignment_ULA,
};

/**
 Auto-configuration type.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> case_Router -> lan-ipv6-address-assignment -> enable-dhcpv6-pd -> autoconfiguration-type
 
 */
typedef NS_ENUM(NSUInteger, EnumAutoconfigurationType) {

	/**
	 As in YANG: __SLAAC + RDNSS__, SLAAC + RDNSS.
	 */
	EnumAutoconfigurationType_SLAAC___RDNSS,

	/**
	 As in YANG: __SLAAC + Stateless DHCPv6__, SLAAC + Stateless DHCPv6.
	 */
	EnumAutoconfigurationType_SLAAC___STATELESS_DHCPV6,

	/**
	 As in YANG: __Stateful DHCPv6__, Stateful DHCPv6.
	 */
	EnumAutoconfigurationType_STATEFUL_DHCPV6,
};

/**
 This enumeration is code generated for setting/getting the choice of: opmode, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-lan-profile -> lan -> network -> network-element -> opmode -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseOpmode) {

	/**
	 As in YANG: __case_Access_Point__, Representing that current case of choice `opmode` is `case_Access_Point`.
	 */
	EnumCurrentCaseOpmode_CASE_ACCESS_POINT,

	/**
	 As in YANG: __case_Router__, Representing that current case of choice `opmode` is `case_Router`.
	 */
	EnumCurrentCaseOpmode_CASE_ROUTER,
};

/**
 This enumeration is code generated for setting/getting the choice of: timezone, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> clock -> timezone -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseTimezone) {

	/**
	 As in YANG: __case_timezone-name__, Representing that current case of choice `timezone` is `case_timezone-name`.
	 */
	EnumCurrentCaseTimezone_CASE_TIMEZONE_NAME,

	/**
	 As in YANG: __case_timezone-utc-offset__, Representing that current case of choice `timezone` is `case_timezone-utc-offset`.
	 */
	EnumCurrentCaseTimezone_CASE_TIMEZONE_UTC_OFFSET,
};

/**
 mode for time setting manually or sync with ntp
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> clock -> mode
 
 */
typedef NS_ENUM(NSUInteger, EnumModeClock) {

	/**
	 As in YANG: __manual__, Manual.
	 */
	EnumModeClock_MANUAL,

	/**
	 As in YANG: __ntp__, NTP.
	 */
	EnumModeClock_NTP,
};

/**
 The desired association type for this NTP server.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> ntp -> server -> server-element -> association-type
 
 */
typedef NS_ENUM(NSUInteger, EnumAssociationType) {

	/**
	 As in YANG: __server__, Use client association mode.  This devicewill not provide synchronization to theconfigured NTP server.
	 */
	EnumAssociationType_SERVER,

	/**
	 As in YANG: __peer__, Use symmetric active association mode.This device may provide synchronizationto the configured NTP server.
	 */
	EnumAssociationType_PEER,

	/**
	 As in YANG: __pool__, Use client association mode with one ormore of the NTP servers found by DNSresolution of the domain name given bythe 'address' leaf.  This device will notprovide synchronization to the servers.
	 */
	EnumAssociationType_POOL,
};

/**
 This enumeration is code generated for setting/getting the union of: address, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> ntp -> server -> server-element -> transport -> case_udp -> udp -> address -> current-union-item
- urn:zyxel:cpe:system:zyxel-system -> system -> radius -> server -> server-element -> transport -> case_udp -> udp -> address -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItem) {

	/**
	 As in YANG: __union_of_inet:domain-name__, Representing that current union item of `address` is `union_of_inet:domain-name`.
	 */
	EnumCurrentUnionItem_UNION_OF_INET_DOMAIN_NAME,

	/**
	 As in YANG: __union_of_inet:ipv4-address__, Representing that current union item of `address` is `union_of_inet:ipv4-address`.
	 */
	EnumCurrentUnionItem_UNION_OF_INET_IPV4_ADDRESS,

	/**
	 As in YANG: __union_of_inet:ipv6-address__, Representing that current union item of `address` is `union_of_inet:ipv6-address`.
	 */
	EnumCurrentUnionItem_UNION_OF_INET_IPV6_ADDRESS,
};

/**
 This enumeration is code generated for setting/getting the choice of: transport, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> ntp -> server -> server-element -> transport -> current-case
- urn:zyxel:cpe:system:zyxel-system -> system -> radius -> server -> server-element -> transport -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseTransport) {

	/**
	 As in YANG: __case_udp__, Representing that current case of choice `transport` is `case_udp`.
	 */
	EnumCurrentCaseTransport_CASE_UDP,
};

/**
 remote access protocol
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> remote-management -> remote-access -> remote-access-element -> protocol
 
 */
typedef NS_ENUM(NSUInteger, EnumProtocolRemoteAccessElement) {

	/**
	 As in YANG: __http__, http for remote access
	 */
	EnumProtocolRemoteAccessElement_HTTP,

	/**
	 As in YANG: __https__, https for remote access
	 */
	EnumProtocolRemoteAccessElement_HTTPS,

	/**
	 As in YANG: __telnet__, telnet for remote access
	 */
	EnumProtocolRemoteAccessElement_TELNET,

	/**
	 As in YANG: __ssh__, telnet for remote access
	 */
	EnumProtocolRemoteAccessElement_SSH,
};

/**
 interface
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> remote-management -> remote-access -> remote-access-element -> interface
 
 */
typedef NS_ENUM(NSUInteger, EnumInterface) {

	/**
	 As in YANG: __none__, none of interfaces
	 */
	EnumInterface_NONE,

	/**
	 As in YANG: __wan__, only for wan interface
	 */
	EnumInterface_WAN,

	/**
	 As in YANG: __lan__, only for lan interface
	 */
	EnumInterface_LAN,

	/**
	 As in YANG: __wan-lan__, for lan and wan interface
	 */
	EnumInterface_WAN_LAN,
};

/**
 This enumeration is code generated for setting/getting the union of: client-address, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> remote-management -> remote-access -> remote-access-element -> client-address -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemClientAddress) {

	/**
	 As in YANG: __union_of_inet:ipv4-address__, Representing that current union item of `client-address` is `union_of_inet:ipv4-address`.
	 */
	EnumCurrentUnionItemClientAddress_UNION_OF_INET_IPV4_ADDRESS,

	/**
	 As in YANG: __union_of_inet:ipv6-address__, Representing that current union item of `client-address` is `union_of_inet:ipv6-address`.
	 */
	EnumCurrentUnionItemClientAddress_UNION_OF_INET_IPV6_ADDRESS,
};

/**
 This enumeration is code generated for setting/getting the union of: address, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> dns-resolver -> server -> server-element -> transport -> case_udp-and-tcp -> udp-and-tcp -> address -> current-union-item
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentUnionItemAddress) {

	/**
	 As in YANG: __union_of_inet:ipv4-address__, Representing that current union item of `address` is `union_of_inet:ipv4-address`.
	 */
	EnumCurrentUnionItemAddress_UNION_OF_INET_IPV4_ADDRESS,

	/**
	 As in YANG: __union_of_inet:ipv6-address__, Representing that current union item of `address` is `union_of_inet:ipv6-address`.
	 */
	EnumCurrentUnionItemAddress_UNION_OF_INET_IPV6_ADDRESS,
};

/**
 This enumeration is code generated for setting/getting the choice of: transport, was not in original defined YANG data model.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system -> system -> dns-resolver -> server -> server-element -> transport -> current-case
 
 */
typedef NS_ENUM(NSUInteger, EnumCurrentCaseTransportServerElement) {

	/**
	 As in YANG: __case_udp-and-tcp__, Representing that current case of choice `transport` is `case_udp-and-tcp`.
	 */
	EnumCurrentCaseTransportServerElement_CASE_UDP_AND_TCP,
};

/**
 LED current status.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wifi-system -> system-devices-state -> device -> device-element -> led -> status
 
 */
typedef NS_ENUM(NSUInteger, EnumStatusLed) {

	/**
	 As in YANG: __On__, LED current state is on.
	 */
	EnumStatusLed_ON,

	/**
	 As in YANG: __Off__, LED current state is off.
	 */
	EnumStatusLed_OFF,

	/**
	 As in YANG: __Breathing__, LED current state is breathing.
	 */
	EnumStatusLed_BREATHING,
};

/**
 LED switch status.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wifi-system -> system-devices-state -> device -> device-element -> led -> switch
 
 */
typedef NS_ENUM(NSUInteger, EnumSwitch) {

	/**
	 As in YANG: __On__, LED switch is on.
	 */
	EnumSwitch_ON,

	/**
	 As in YANG: __Off__, LED switch is off.
	 */
	EnumSwitch_OFF,
};

/**
 The operation mode.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wifi-system -> system-devices-state -> device -> device-element -> role
 
 */
typedef NS_ENUM(NSUInteger, EnumOperationMode) {

	/**
	 As in YANG: __Router__, Router
	 */
	EnumOperationMode_ROUTER,

	/**
	 As in YANG: __Extender__, Extender
	 */
	EnumOperationMode_EXTENDER,
};

/**
 The device is online or offline
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wifi-system -> system-devices-state -> device -> device-element -> on-off-line
 
 */
typedef NS_ENUM(NSUInteger, EnumOnOffLine) {

	/**
	 As in YANG: __ON__, On Line
	 */
	EnumOnOffLine_ON,

	/**
	 As in YANG: __OFF__, Off Line
	 */
	EnumOnOffLine_OFF,
};

/**
 The device is authorizated to join the system or not.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wifi-system -> system-devices-state -> device -> device-element -> authorization
 
 */
typedef NS_ENUM(NSUInteger, EnumAuthorization) {

	/**
	 As in YANG: __Authorized__, Authorized to join the system.
	 */
	EnumAuthorization_AUTHORIZED,

	/**
	 As in YANG: __Unauthorized__, Not authorized to join the system.
	 */
	EnumAuthorization_UNAUTHORIZED,
};

/**
 LED parameters.
 
  Used in the following data model: 
 
- urn:zyxel:cpe:system:zyxel-system-wifi-system -> switch-led -> input -> led-switch
 
 */
typedef NS_ENUM(NSUInteger, EnumLedSwitch) {

	/**
	 As in YANG: __On__, Turn on LED.
	 */
	EnumLedSwitch_ON,

	/**
	 As in YANG: __Off__, Turn off LED.
	 */
	EnumLedSwitch_OFF,
};


////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma mark - ZapiDataModelEnum: Interface & Class Methods

/**
 ZapiDataModelEnum, for handling to & from with the Zapi enumerations.
 */
@interface ZapiDataModelEnum : NSObject

/**
 Convert from string to enum: EnumNamespace.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumNamespace.
 */
+ (EnumNamespace)toEnumNamespaceFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumNamespace.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumNamespace.
 */
+ (NSString *)toStringWithEnumNamespace:(EnumNamespace)enumerator;

/**
 Convert from string to enum: EnumRoot.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumRoot.
 */
+ (EnumRoot)toEnumRootFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumRoot.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumRoot.
 */
+ (NSString *)toStringWithEnumRoot:(EnumRoot)enumerator;

/**
 Convert from string to enum: EnumZapiFilterType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumZapiFilterType.
 */
+ (EnumZapiFilterType)toEnumZapiFilterTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumZapiFilterType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumZapiFilterType.
 */
+ (NSString *)toStringWithEnumZapiFilterType:(EnumZapiFilterType)enumerator;

/**
 Convert from string to enum: EnumStatusNatInterfaceSettingElement.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumStatusNatInterfaceSettingElement.
 */
+ (EnumStatusNatInterfaceSettingElement)toEnumStatusNatInterfaceSettingElementFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumStatusNatInterfaceSettingElement.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumStatusNatInterfaceSettingElement.
 */
+ (NSString *)toStringWithEnumStatusNatInterfaceSettingElement:(EnumStatusNatInterfaceSettingElement)enumerator;

/**
 Convert from string to enum: EnumStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumStatus.
 */
+ (EnumStatus)toEnumStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumStatus.
 */
+ (NSString *)toStringWithEnumStatus:(EnumStatus)enumerator;

/**
 Convert from string to enum: EnumAuto6rd.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAuto6rd.
 */
+ (EnumAuto6rd)toEnumAuto6rdFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAuto6rd.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAuto6rd.
 */
+ (NSString *)toStringWithEnumAuto6rd:(EnumAuto6rd)enumerator;

/**
 Convert from string to enum: EnumTunnelingType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumTunnelingType.
 */
+ (EnumTunnelingType)toEnumTunnelingTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumTunnelingType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumTunnelingType.
 */
+ (NSString *)toStringWithEnumTunnelingType:(EnumTunnelingType)enumerator;

/**
 Convert from string to enum: EnumDnsServer.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumDnsServer.
 */
+ (EnumDnsServer)toEnumDnsServerFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumDnsServer.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumDnsServer.
 */
+ (NSString *)toStringWithEnumDnsServer:(EnumDnsServer)enumerator;

/**
 Convert from string to enum: EnumSupportEncapsulationElement.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumSupportEncapsulationElement.
 */
+ (EnumSupportEncapsulationElement)toEnumSupportEncapsulationElementFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumSupportEncapsulationElement.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumSupportEncapsulationElement.
 */
+ (NSString *)toStringWithEnumSupportEncapsulationElement:(EnumSupportEncapsulationElement)enumerator;

/**
 Convert from string to enum: EnumWanMacSetting.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWanMacSetting.
 */
+ (EnumWanMacSetting)toEnumWanMacSettingFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWanMacSetting.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWanMacSetting.
 */
+ (NSString *)toStringWithEnumWanMacSetting:(EnumWanMacSetting)enumerator;

/**
 Convert from string to enum: EnumMulticastSetup.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumMulticastSetup.
 */
+ (EnumMulticastSetup)toEnumMulticastSetupFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumMulticastSetup.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumMulticastSetup.
 */
+ (NSString *)toStringWithEnumMulticastSetup:(EnumMulticastSetup)enumerator;

/**
 Convert from string to enum: EnumOption.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumOption.
 */
+ (EnumOption)toEnumOptionFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumOption.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumOption.
 */
+ (NSString *)toStringWithEnumOption:(EnumOption)enumerator;

/**
 Convert from string to enum: EnumIpAddressSetting.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpAddressSetting.
 */
+ (EnumIpAddressSetting)toEnumIpAddressSettingFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpAddressSetting.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpAddressSetting.
 */
+ (NSString *)toStringWithEnumIpAddressSetting:(EnumIpAddressSetting)enumerator;

/**
 Convert from string to enum: EnumWanIpSetting.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWanIpSetting.
 */
+ (EnumWanIpSetting)toEnumWanIpSettingFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWanIpSetting.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWanIpSetting.
 */
+ (NSString *)toStringWithEnumWanIpSetting:(EnumWanIpSetting)enumerator;

/**
 Convert from string to enum: EnumIpAddressSettingIpAddress.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpAddressSettingIpAddress.
 */
+ (EnumIpAddressSettingIpAddress)toEnumIpAddressSettingIpAddressFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpAddressSettingIpAddress.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpAddressSettingIpAddress.
 */
+ (NSString *)toStringWithEnumIpAddressSettingIpAddress:(EnumIpAddressSettingIpAddress)enumerator;

/**
 Convert from string to enum: EnumEncryption.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumEncryption.
 */
+ (EnumEncryption)toEnumEncryptionFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumEncryption.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumEncryption.
 */
+ (NSString *)toStringWithEnumEncryption:(EnumEncryption)enumerator;

/**
 Convert from string to enum: EnumIpv4Ipv6.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpv4Ipv6.
 */
+ (EnumIpv4Ipv6)toEnumIpv4Ipv6From:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpv4Ipv6.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpv4Ipv6.
 */
+ (NSString *)toStringWithEnumIpv4Ipv6:(EnumIpv4Ipv6)enumerator;

/**
 Convert from string to enum: EnumOpmode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumOpmode.
 */
+ (EnumOpmode)toEnumOpmodeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumOpmode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumOpmode.
 */
+ (NSString *)toStringWithEnumOpmode:(EnumOpmode)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemGroupElement.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemGroupElement.
 */
+ (EnumCurrentUnionItemGroupElement)toEnumCurrentUnionItemGroupElementFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemGroupElement.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemGroupElement.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemGroupElement:(EnumCurrentUnionItemGroupElement)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemAccessOperations.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemAccessOperations.
 */
+ (EnumCurrentUnionItemAccessOperations)toEnumCurrentUnionItemAccessOperationsFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemAccessOperations.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemAccessOperations.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemAccessOperations:(EnumCurrentUnionItemAccessOperations)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemNotificationName.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemNotificationName.
 */
+ (EnumCurrentUnionItemNotificationName)toEnumCurrentUnionItemNotificationNameFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemNotificationName.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemNotificationName.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemNotificationName:(EnumCurrentUnionItemNotificationName)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemRpcName.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemRpcName.
 */
+ (EnumCurrentUnionItemRpcName)toEnumCurrentUnionItemRpcNameFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemRpcName.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemRpcName.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemRpcName:(EnumCurrentUnionItemRpcName)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseRuleType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseRuleType.
 */
+ (EnumCurrentCaseRuleType)toEnumCurrentCaseRuleTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseRuleType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseRuleType.
 */
+ (NSString *)toStringWithEnumCurrentCaseRuleType:(EnumCurrentCaseRuleType)enumerator;

/**
 Convert from string to enum: EnumActionType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumActionType.
 */
+ (EnumActionType)toEnumActionTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumActionType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumActionType.
 */
+ (NSString *)toStringWithEnumActionType:(EnumActionType)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemModuleName.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemModuleName.
 */
+ (EnumCurrentUnionItemModuleName)toEnumCurrentUnionItemModuleNameFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemModuleName.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemModuleName.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemModuleName:(EnumCurrentUnionItemModuleName)enumerator;

/**
 Convert from string to enum: EnumWifiTypesRadioBand.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesRadioBand.
 */
+ (EnumWifiTypesRadioBand)toEnumWifiTypesRadioBandFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesRadioBand.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesRadioBand.
 */
+ (NSString *)toStringWithEnumWifiTypesRadioBand:(EnumWifiTypesRadioBand)enumerator;

/**
 Convert from string to enum: EnumWifiTypesChannelBandwidth.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesChannelBandwidth.
 */
+ (EnumWifiTypesChannelBandwidth)toEnumWifiTypesChannelBandwidthFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesChannelBandwidth.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesChannelBandwidth.
 */
+ (NSString *)toStringWithEnumWifiTypesChannelBandwidth:(EnumWifiTypesChannelBandwidth)enumerator;

/**
 Convert from string to enum: EnumDeviceType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumDeviceType.
 */
+ (EnumDeviceType)toEnumDeviceTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumDeviceType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumDeviceType.
 */
+ (NSString *)toStringWithEnumDeviceType:(EnumDeviceType)enumerator;

/**
 Convert from string to enum: EnumRadio.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumRadio.
 */
+ (EnumRadio)toEnumRadioFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumRadio.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumRadio.
 */
+ (NSString *)toStringWithEnumRadio:(EnumRadio)enumerator;

/**
 Convert from string to enum: EnumConnectionType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumConnectionType.
 */
+ (EnumConnectionType)toEnumConnectionTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumConnectionType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumConnectionType.
 */
+ (NSString *)toStringWithEnumConnectionType:(EnumConnectionType)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseDeviceFunction.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseDeviceFunction.
 */
+ (EnumCurrentCaseDeviceFunction)toEnumCurrentCaseDeviceFunctionFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseDeviceFunction.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseDeviceFunction.
 */
+ (NSString *)toStringWithEnumCurrentCaseDeviceFunction:(EnumCurrentCaseDeviceFunction)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseConnectingType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseConnectingType.
 */
+ (EnumCurrentCaseConnectingType)toEnumCurrentCaseConnectingTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseConnectingType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseConnectingType.
 */
+ (NSString *)toStringWithEnumCurrentCaseConnectingType:(EnumCurrentCaseConnectingType)enumerator;

/**
 Convert from string to enum: EnumCurrentCasePsk.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCasePsk.
 */
+ (EnumCurrentCasePsk)toEnumCurrentCasePskFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCasePsk.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCasePsk.
 */
+ (NSString *)toStringWithEnumCurrentCasePsk:(EnumCurrentCasePsk)enumerator;

/**
 Convert from string to enum: EnumNetworkType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumNetworkType.
 */
+ (EnumNetworkType)toEnumNetworkTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumNetworkType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumNetworkType.
 */
+ (NSString *)toStringWithEnumNetworkType:(EnumNetworkType)enumerator;

/**
 Convert from string to enum: EnumProto.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumProto.
 */
+ (EnumProto)toEnumProtoFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumProto.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumProto.
 */
+ (NSString *)toStringWithEnumProto:(EnumProto)enumerator;

/**
 Convert from string to enum: EnumActionMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumActionMode.
 */
+ (EnumActionMode)toEnumActionModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumActionMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumActionMode.
 */
+ (NSString *)toStringWithEnumActionMode:(EnumActionMode)enumerator;

/**
 Convert from string to enum: EnumServiceType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumServiceType.
 */
+ (EnumServiceType)toEnumServiceTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumServiceType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumServiceType.
 */
+ (NSString *)toStringWithEnumServiceType:(EnumServiceType)enumerator;

/**
 Convert from string to enum: EnumStatusOutputGetHistory.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumStatusOutputGetHistory.
 */
+ (EnumStatusOutputGetHistory)toEnumStatusOutputGetHistoryFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumStatusOutputGetHistory.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumStatusOutputGetHistory.
 */
+ (NSString *)toStringWithEnumStatusOutputGetHistory:(EnumStatusOutputGetHistory)enumerator;

/**
 Convert from string to enum: EnumTarget.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumTarget.
 */
+ (EnumTarget)toEnumTargetFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumTarget.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumTarget.
 */
+ (NSString *)toStringWithEnumTarget:(EnumTarget)enumerator;

/**
 Convert from string to enum: EnumResponse.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumResponse.
 */
+ (EnumResponse)toEnumResponseFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumResponse.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumResponse.
 */
+ (NSString *)toStringWithEnumResponse:(EnumResponse)enumerator;

/**
 Convert from string to enum: EnumStatusOutputTestResult.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumStatusOutputTestResult.
 */
+ (EnumStatusOutputTestResult)toEnumStatusOutputTestResultFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumStatusOutputTestResult.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumStatusOutputTestResult.
 */
+ (NSString *)toStringWithEnumStatusOutputTestResult:(EnumStatusOutputTestResult)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemLeaseTimeRemaining.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemLeaseTimeRemaining.
 */
+ (EnumCurrentUnionItemLeaseTimeRemaining)toEnumCurrentUnionItemLeaseTimeRemainingFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemLeaseTimeRemaining.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemLeaseTimeRemaining.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemLeaseTimeRemaining:(EnumCurrentUnionItemLeaseTimeRemaining)enumerator;

/**
 Convert from string to enum: EnumVendorClassIdMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumVendorClassIdMode.
 */
+ (EnumVendorClassIdMode)toEnumVendorClassIdModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumVendorClassIdMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumVendorClassIdMode.
 */
+ (NSString *)toStringWithEnumVendorClassIdMode:(EnumVendorClassIdMode)enumerator;

/**
 Convert from string to enum: EnumResult.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumResult.
 */
+ (EnumResult)toEnumResultFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumResult.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumResult.
 */
+ (NSString *)toStringWithEnumResult:(EnumResult)enumerator;

/**
 Convert from string to enum: EnumStatusOutput.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumStatusOutput.
 */
+ (EnumStatusOutput)toEnumStatusOutputFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumStatusOutput.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumStatusOutput.
 */
+ (NSString *)toStringWithEnumStatusOutput:(EnumStatusOutput)enumerator;

/**
 Convert from string to enum: EnumGameStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumGameStatus.
 */
+ (EnumGameStatus)toEnumGameStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumGameStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumGameStatus.
 */
+ (NSString *)toStringWithEnumGameStatus:(EnumGameStatus)enumerator;

/**
 Convert from string to enum: EnumSquareStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumSquareStatus.
 */
+ (EnumSquareStatus)toEnumSquareStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumSquareStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumSquareStatus.
 */
+ (NSString *)toStringWithEnumSquareStatus:(EnumSquareStatus)enumerator;

/**
 Convert from string to enum: EnumIfEthernetDuplex.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfEthernetDuplex.
 */
+ (EnumIfEthernetDuplex)toEnumIfEthernetDuplexFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfEthernetDuplex.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfEthernetDuplex.
 */
+ (NSString *)toStringWithEnumIfEthernetDuplex:(EnumIfEthernetDuplex)enumerator;

/**
 Convert from string to enum: EnumIfPppEncryptionProtocol.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfPppEncryptionProtocol.
 */
+ (EnumIfPppEncryptionProtocol)toEnumIfPppEncryptionProtocolFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfPppEncryptionProtocol.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfPppEncryptionProtocol.
 */
+ (NSString *)toStringWithEnumIfPppEncryptionProtocol:(EnumIfPppEncryptionProtocol)enumerator;

/**
 Convert from string to enum: EnumIfPppAuthenticationProtocol.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfPppAuthenticationProtocol.
 */
+ (EnumIfPppAuthenticationProtocol)toEnumIfPppAuthenticationProtocolFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfPppAuthenticationProtocol.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfPppAuthenticationProtocol.
 */
+ (NSString *)toStringWithEnumIfPppAuthenticationProtocol:(EnumIfPppAuthenticationProtocol)enumerator;

/**
 Convert from string to enum: EnumOperStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumOperStatus.
 */
+ (EnumOperStatus)toEnumOperStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumOperStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumOperStatus.
 */
+ (NSString *)toStringWithEnumOperStatus:(EnumOperStatus)enumerator;

/**
 Convert from string to enum: EnumIfPppConnectionStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfPppConnectionStatus.
 */
+ (EnumIfPppConnectionStatus)toEnumIfPppConnectionStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfPppConnectionStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfPppConnectionStatus.
 */
+ (NSString *)toStringWithEnumIfPppConnectionStatus:(EnumIfPppConnectionStatus)enumerator;

/**
 Convert from string to enum: EnumIpAddressOrigin.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpAddressOrigin.
 */
+ (EnumIpAddressOrigin)toEnumIpAddressOriginFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpAddressOrigin.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpAddressOrigin.
 */
+ (NSString *)toStringWithEnumIpAddressOrigin:(EnumIpAddressOrigin)enumerator;

/**
 Convert from string to enum: EnumCurrentCase.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCase.
 */
+ (EnumCurrentCase)toEnumCurrentCaseFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCase.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCase.
 */
+ (NSString *)toStringWithEnumCurrentCase:(EnumCurrentCase)enumerator;

/**
 Convert from string to enum: EnumNeighborOrigin.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumNeighborOrigin.
 */
+ (EnumNeighborOrigin)toEnumNeighborOriginFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumNeighborOrigin.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumNeighborOrigin.
 */
+ (NSString *)toStringWithEnumNeighborOrigin:(EnumNeighborOrigin)enumerator;

/**
 Convert from string to enum: EnumIpStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpStatus.
 */
+ (EnumIpStatus)toEnumIpStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpStatus.
 */
+ (NSString *)toStringWithEnumIpStatus:(EnumIpStatus)enumerator;

/**
 Convert from string to enum: EnumIpState.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpState.
 */
+ (EnumIpState)toEnumIpStateFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpState.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpState.
 */
+ (NSString *)toStringWithEnumIpState:(EnumIpState)enumerator;

/**
 Convert from string to enum: EnumAdminStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAdminStatus.
 */
+ (EnumAdminStatus)toEnumAdminStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAdminStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAdminStatus.
 */
+ (NSString *)toStringWithEnumAdminStatus:(EnumAdminStatus)enumerator;

/**
 Convert from string to enum: EnumIfSsidWpsConfigured.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfSsidWpsConfigured.
 */
+ (EnumIfSsidWpsConfigured)toEnumIfSsidWpsConfiguredFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfSsidWpsConfigured.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfSsidWpsConfigured.
 */
+ (NSString *)toStringWithEnumIfSsidWpsConfigured:(EnumIfSsidWpsConfigured)enumerator;

/**
 Convert from string to enum: EnumIfPppCompressionProtocol.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfPppCompressionProtocol.
 */
+ (EnumIfPppCompressionProtocol)toEnumIfPppCompressionProtocolFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfPppCompressionProtocol.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfPppCompressionProtocol.
 */
+ (NSString *)toStringWithEnumIfPppCompressionProtocol:(EnumIfPppCompressionProtocol)enumerator;

/**
 Convert from string to enum: EnumIfEthernetSpeed.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIfEthernetSpeed.
 */
+ (EnumIfEthernetSpeed)toEnumIfEthernetSpeedFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIfEthernetSpeed.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIfEthernetSpeed.
 */
+ (NSString *)toStringWithEnumIfEthernetSpeed:(EnumIfEthernetSpeed)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseIfEthernetTransmissionParams.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseIfEthernetTransmissionParams.
 */
+ (EnumCurrentCaseIfEthernetTransmissionParams)toEnumCurrentCaseIfEthernetTransmissionParamsFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseIfEthernetTransmissionParams.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseIfEthernetTransmissionParams.
 */
+ (NSString *)toStringWithEnumCurrentCaseIfEthernetTransmissionParams:(EnumCurrentCaseIfEthernetTransmissionParams)enumerator;

/**
 Convert from string to enum: EnumWifiTypesTransmitPower.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesTransmitPower.
 */
+ (EnumWifiTypesTransmitPower)toEnumWifiTypesTransmitPowerFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesTransmitPower.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesTransmitPower.
 */
+ (NSString *)toStringWithEnumWifiTypesTransmitPower:(EnumWifiTypesTransmitPower)enumerator;

/**
 Convert from string to enum: EnumWifiTypesMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesMode.
 */
+ (EnumWifiTypesMode)toEnumWifiTypesModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesMode.
 */
+ (NSString *)toStringWithEnumWifiTypesMode:(EnumWifiTypesMode)enumerator;

/**
 Convert from string to enum: EnumWifiTypesSecurityMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesSecurityMode.
 */
+ (EnumWifiTypesSecurityMode)toEnumWifiTypesSecurityModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesSecurityMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesSecurityMode.
 */
+ (NSString *)toStringWithEnumWifiTypesSecurityMode:(EnumWifiTypesSecurityMode)enumerator;

/**
 Convert from string to enum: EnumWifiTypesSsidMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesSsidMode.
 */
+ (EnumWifiTypesSsidMode)toEnumWifiTypesSsidModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesSsidMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesSsidMode.
 */
+ (NSString *)toStringWithEnumWifiTypesSsidMode:(EnumWifiTypesSsidMode)enumerator;

/**
 Convert from string to enum: EnumLinkUpDownTrapEnable.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumLinkUpDownTrapEnable.
 */
+ (EnumLinkUpDownTrapEnable)toEnumLinkUpDownTrapEnableFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumLinkUpDownTrapEnable.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumLinkUpDownTrapEnable.
 */
+ (NSString *)toStringWithEnumLinkUpDownTrapEnable:(EnumLinkUpDownTrapEnable)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseIfSsidPsk.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseIfSsidPsk.
 */
+ (EnumCurrentCaseIfSsidPsk)toEnumCurrentCaseIfSsidPskFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseIfSsidPsk.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseIfSsidPsk.
 */
+ (NSString *)toStringWithEnumCurrentCaseIfSsidPsk:(EnumCurrentCaseIfSsidPsk)enumerator;

/**
 Convert from string to enum: EnumWifiTypesChannel5g.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesChannel5g.
 */
+ (EnumWifiTypesChannel5g)toEnumWifiTypesChannel5gFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesChannel5g.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesChannel5g.
 */
+ (NSString *)toStringWithEnumWifiTypesChannel5g:(EnumWifiTypesChannel5g)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemIfRadioChannel.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemIfRadioChannel.
 */
+ (EnumCurrentUnionItemIfRadioChannel)toEnumCurrentUnionItemIfRadioChannelFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemIfRadioChannel.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemIfRadioChannel.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemIfRadioChannel:(EnumCurrentUnionItemIfRadioChannel)enumerator;

/**
 Convert from string to enum: EnumBleStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumBleStatus.
 */
+ (EnumBleStatus)toEnumBleStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumBleStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumBleStatus.
 */
+ (NSString *)toStringWithEnumBleStatus:(EnumBleStatus)enumerator;

/**
 Convert from string to enum: EnumAction.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAction.
 */
+ (EnumAction)toEnumActionFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAction.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAction.
 */
+ (NSString *)toStringWithEnumAction:(EnumAction)enumerator;

/**
 Convert from string to enum: EnumTargetFirewall.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumTargetFirewall.
 */
+ (EnumTargetFirewall)toEnumTargetFirewallFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumTargetFirewall.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumTargetFirewall.
 */
+ (NSString *)toStringWithEnumTargetFirewall:(EnumTargetFirewall)enumerator;

/**
 Convert from string to enum: EnumIcmpRespondToPingInterface.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIcmpRespondToPingInterface.
 */
+ (EnumIcmpRespondToPingInterface)toEnumIcmpRespondToPingInterfaceFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIcmpRespondToPingInterface.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIcmpRespondToPingInterface.
 */
+ (NSString *)toStringWithEnumIcmpRespondToPingInterface:(EnumIcmpRespondToPingInterface)enumerator;

/**
 Convert from string to enum: EnumProtocol.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumProtocol.
 */
+ (EnumProtocol)toEnumProtocolFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumProtocol.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumProtocol.
 */
+ (NSString *)toStringWithEnumProtocol:(EnumProtocol)enumerator;

/**
 Convert from string to enum: EnumWifiTypesWpsStatus.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWifiTypesWpsStatus.
 */
+ (EnumWifiTypesWpsStatus)toEnumWifiTypesWpsStatusFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWifiTypesWpsStatus.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWifiTypesWpsStatus.
 */
+ (NSString *)toStringWithEnumWifiTypesWpsStatus:(EnumWifiTypesWpsStatus)enumerator;

/**
 Convert from string to enum: EnumOperationType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumOperationType.
 */
+ (EnumOperationType)toEnumOperationTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumOperationType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumOperationType.
 */
+ (NSString *)toStringWithEnumOperationType:(EnumOperationType)enumerator;

/**
 Convert from string to enum: EnumConfigSource.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumConfigSource.
 */
+ (EnumConfigSource)toEnumConfigSourceFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumConfigSource.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumConfigSource.
 */
+ (NSString *)toStringWithEnumConfigSource:(EnumConfigSource)enumerator;

/**
 Convert from string to enum: EnumErrorOption.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumErrorOption.
 */
+ (EnumErrorOption)toEnumErrorOptionFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumErrorOption.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumErrorOption.
 */
+ (NSString *)toStringWithEnumErrorOption:(EnumErrorOption)enumerator;

/**
 Convert from string to enum: EnumFilterType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumFilterType.
 */
+ (EnumFilterType)toEnumFilterTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumFilterType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumFilterType.
 */
+ (NSString *)toStringWithEnumFilterType:(EnumFilterType)enumerator;

/**
 Convert from string to enum: EnumErrorType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumErrorType.
 */
+ (EnumErrorType)toEnumErrorTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumErrorType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumErrorType.
 */
+ (NSString *)toStringWithEnumErrorType:(EnumErrorType)enumerator;

/**
 Convert from string to enum: EnumErrorSeverity.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumErrorSeverity.
 */
+ (EnumErrorSeverity)toEnumErrorSeverityFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumErrorSeverity.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumErrorSeverity.
 */
+ (NSString *)toStringWithEnumErrorSeverity:(EnumErrorSeverity)enumerator;

/**
 Convert from string to enum: EnumReplyResult.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumReplyResult.
 */
+ (EnumReplyResult)toEnumReplyResultFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumReplyResult.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumReplyResult.
 */
+ (NSString *)toStringWithEnumReplyResult:(EnumReplyResult)enumerator;

/**
 Convert from string to enum: EnumWfiiInterfaceType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumWfiiInterfaceType.
 */
+ (EnumWfiiInterfaceType)toEnumWfiiInterfaceTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumWfiiInterfaceType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumWfiiInterfaceType.
 */
+ (NSString *)toStringWithEnumWfiiInterfaceType:(EnumWfiiInterfaceType)enumerator;

/**
 Convert from string to enum: EnumLogSeverity.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumLogSeverity.
 */
+ (EnumLogSeverity)toEnumLogSeverityFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumLogSeverity.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumLogSeverity.
 */
+ (NSString *)toStringWithEnumLogSeverity:(EnumLogSeverity)enumerator;

/**
 Convert from string to enum: EnumType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumType.
 */
+ (EnumType)toEnumTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumType.
 */
+ (NSString *)toStringWithEnumType:(EnumType)enumerator;

/**
 Convert from string to enum: EnumSchedule.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumSchedule.
 */
+ (EnumSchedule)toEnumScheduleFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumSchedule.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumSchedule.
 */
+ (NSString *)toStringWithEnumSchedule:(EnumSchedule)enumerator;

/**
 Convert from string to enum: EnumMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumMode.
 */
+ (EnumMode)toEnumModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumMode.
 */
+ (NSString *)toStringWithEnumMode:(EnumMode)enumerator;

/**
 Convert from string to enum: EnumDnsServerSecondDnsServer.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumDnsServerSecondDnsServer.
 */
+ (EnumDnsServerSecondDnsServer)toEnumDnsServerSecondDnsServerFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumDnsServerSecondDnsServer.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumDnsServerSecondDnsServer.
 */
+ (NSString *)toStringWithEnumDnsServerSecondDnsServer:(EnumDnsServerSecondDnsServer)enumerator;

/**
 Convert from string to enum: EnumIpAddressSettingIpAddressCaseAccessPoint.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumIpAddressSettingIpAddressCaseAccessPoint.
 */
+ (EnumIpAddressSettingIpAddressCaseAccessPoint)toEnumIpAddressSettingIpAddressCaseAccessPointFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumIpAddressSettingIpAddressCaseAccessPoint.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumIpAddressSettingIpAddressCaseAccessPoint.
 */
+ (NSString *)toStringWithEnumIpAddressSettingIpAddressCaseAccessPoint:(EnumIpAddressSettingIpAddressCaseAccessPoint)enumerator;

/**
 Convert from string to enum: EnumAssignment.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAssignment.
 */
+ (EnumAssignment)toEnumAssignmentFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAssignment.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAssignment.
 */
+ (NSString *)toStringWithEnumAssignment:(EnumAssignment)enumerator;

/**
 Convert from string to enum: EnumAutoconfigurationType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAutoconfigurationType.
 */
+ (EnumAutoconfigurationType)toEnumAutoconfigurationTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAutoconfigurationType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAutoconfigurationType.
 */
+ (NSString *)toStringWithEnumAutoconfigurationType:(EnumAutoconfigurationType)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseOpmode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseOpmode.
 */
+ (EnumCurrentCaseOpmode)toEnumCurrentCaseOpmodeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseOpmode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseOpmode.
 */
+ (NSString *)toStringWithEnumCurrentCaseOpmode:(EnumCurrentCaseOpmode)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseTimezone.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseTimezone.
 */
+ (EnumCurrentCaseTimezone)toEnumCurrentCaseTimezoneFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseTimezone.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseTimezone.
 */
+ (NSString *)toStringWithEnumCurrentCaseTimezone:(EnumCurrentCaseTimezone)enumerator;

/**
 Convert from string to enum: EnumModeClock.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumModeClock.
 */
+ (EnumModeClock)toEnumModeClockFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumModeClock.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumModeClock.
 */
+ (NSString *)toStringWithEnumModeClock:(EnumModeClock)enumerator;

/**
 Convert from string to enum: EnumAssociationType.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAssociationType.
 */
+ (EnumAssociationType)toEnumAssociationTypeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAssociationType.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAssociationType.
 */
+ (NSString *)toStringWithEnumAssociationType:(EnumAssociationType)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItem.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItem.
 */
+ (EnumCurrentUnionItem)toEnumCurrentUnionItemFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItem.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItem.
 */
+ (NSString *)toStringWithEnumCurrentUnionItem:(EnumCurrentUnionItem)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseTransport.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseTransport.
 */
+ (EnumCurrentCaseTransport)toEnumCurrentCaseTransportFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseTransport.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseTransport.
 */
+ (NSString *)toStringWithEnumCurrentCaseTransport:(EnumCurrentCaseTransport)enumerator;

/**
 Convert from string to enum: EnumProtocolRemoteAccessElement.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumProtocolRemoteAccessElement.
 */
+ (EnumProtocolRemoteAccessElement)toEnumProtocolRemoteAccessElementFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumProtocolRemoteAccessElement.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumProtocolRemoteAccessElement.
 */
+ (NSString *)toStringWithEnumProtocolRemoteAccessElement:(EnumProtocolRemoteAccessElement)enumerator;

/**
 Convert from string to enum: EnumInterface.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumInterface.
 */
+ (EnumInterface)toEnumInterfaceFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumInterface.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumInterface.
 */
+ (NSString *)toStringWithEnumInterface:(EnumInterface)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemClientAddress.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemClientAddress.
 */
+ (EnumCurrentUnionItemClientAddress)toEnumCurrentUnionItemClientAddressFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemClientAddress.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemClientAddress.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemClientAddress:(EnumCurrentUnionItemClientAddress)enumerator;

/**
 Convert from string to enum: EnumCurrentUnionItemAddress.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentUnionItemAddress.
 */
+ (EnumCurrentUnionItemAddress)toEnumCurrentUnionItemAddressFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentUnionItemAddress.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentUnionItemAddress.
 */
+ (NSString *)toStringWithEnumCurrentUnionItemAddress:(EnumCurrentUnionItemAddress)enumerator;

/**
 Convert from string to enum: EnumCurrentCaseTransportServerElement.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumCurrentCaseTransportServerElement.
 */
+ (EnumCurrentCaseTransportServerElement)toEnumCurrentCaseTransportServerElementFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumCurrentCaseTransportServerElement.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumCurrentCaseTransportServerElement.
 */
+ (NSString *)toStringWithEnumCurrentCaseTransportServerElement:(EnumCurrentCaseTransportServerElement)enumerator;

/**
 Convert from string to enum: EnumStatusLed.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumStatusLed.
 */
+ (EnumStatusLed)toEnumStatusLedFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumStatusLed.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumStatusLed.
 */
+ (NSString *)toStringWithEnumStatusLed:(EnumStatusLed)enumerator;

/**
 Convert from string to enum: EnumSwitch.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumSwitch.
 */
+ (EnumSwitch)toEnumSwitchFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumSwitch.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumSwitch.
 */
+ (NSString *)toStringWithEnumSwitch:(EnumSwitch)enumerator;

/**
 Convert from string to enum: EnumOperationMode.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumOperationMode.
 */
+ (EnumOperationMode)toEnumOperationModeFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumOperationMode.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumOperationMode.
 */
+ (NSString *)toStringWithEnumOperationMode:(EnumOperationMode)enumerator;

/**
 Convert from string to enum: EnumOnOffLine.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumOnOffLine.
 */
+ (EnumOnOffLine)toEnumOnOffLineFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumOnOffLine.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumOnOffLine.
 */
+ (NSString *)toStringWithEnumOnOffLine:(EnumOnOffLine)enumerator;

/**
 Convert from string to enum: EnumAuthorization.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumAuthorization.
 */
+ (EnumAuthorization)toEnumAuthorizationFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumAuthorization.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumAuthorization.
 */
+ (NSString *)toStringWithEnumAuthorization:(EnumAuthorization)enumerator;

/**
 Convert from string to enum: EnumLedSwitch.
 
 @param aString The string to convert.
 @param errorCode OK if successful, error code otherwise.
 @return EnumLedSwitch.
 */
+ (EnumLedSwitch)toEnumLedSwitchFrom:(NSString *)aString errorCode:(ZapiErrorCode *)errorCode;

/**
 Convert to string representation of enum: EnumLedSwitch.
 
 @param enumerator The enumerator for converting to string.
 @return String String Representation of enum: EnumLedSwitch.
 */
+ (NSString *)toStringWithEnumLedSwitch:(EnumLedSwitch)enumerator;

@end
