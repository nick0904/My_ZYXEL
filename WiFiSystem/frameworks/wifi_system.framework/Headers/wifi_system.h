//
//  wifi_system.h
//  wifi_system
//
//  Created by Kevin on 16/02/2017.
//
//

#import <UIKit/UIKit.h>

//! Project version number for wifi_system.
FOUNDATION_EXPORT double wifi_systemVersionNumber;

//! Project version string for wifi_system.
FOUNDATION_EXPORT const unsigned char wifi_systemVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <wifi_system/PublicHeader.h>


#if PRODUCTION
#import <wifi_system/ZPortal.h>
#import <wifi_system/ZControlHelper.h>
#import <wifi_system/ZWiFiSystem.h>
#import <wifi_system/zwifisystem_tool.h>
#else
#import <wifi_system_beta/ZPortal.h>
#import <wifi_system_beta/ZControlHelper.h>
#import <wifi_system_beta/ZWiFiSystem.h>
#import <wifi_system_beta/zwifisystem_tool.h>
#endif
