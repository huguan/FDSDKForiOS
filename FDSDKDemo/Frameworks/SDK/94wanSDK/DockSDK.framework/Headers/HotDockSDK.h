//
//  HGSDK.h
//  HGSDK
//
//  Created by MoreFire on 2017/4/18.
//  Copyright © 2017年 MoreFire. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DockSDK/HotDockSDKHeader.h>
#import <DockSDK/HotDockSDKUserInfo.h>
#import <DockSDK/HotDockSDKInitModel.h>
#import <DockSDK/HotDockSDKParameters.h>
#import <DockSDK/HotDockSDKPayParamsModel.h>
#import <DockSDK/HotDockSDK.h>

//hotDockSDK
FOUNDATION_EXPORT double HGSDKVersionNumber;

//! Project version string for HGSDK.
FOUNDATION_EXPORT const unsigned char HGSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HGSDK/PublicHeader.h>

/*
 # Sets the target folders and the final framework product.
 FMK_NAME=${PROJECT_NAME}
 
 # Install dir will be the final output to the framework.
 # The following line create it in the root folder of the current project.
 INSTALL_DIR=${SRCROOT}/Products/${FMK_NAME}.framework
 
 # Working dir will be deleted after the framework creation.
 WRK_DIR=build
 DEVICE_DIR=${WRK_DIR}/Release-iphoneos/${FMK_NAME}.framework
 SIMULATOR_DIR=${WRK_DIR}/Release-iphonesimulator/${FMK_NAME}.framework
 
 # -configuration ${CONFIGURATION}
 # Clean and Building both architectures.
 xcodebuild -configuration "Release" -target "${FMK_NAME}" -sdk iphoneos clean build
 xcodebuild -configuration "Release" -target "${FMK_NAME}" -sdk iphonesimulator clean build
 
 # Cleaning the oldest.
 if [ -d "${INSTALL_DIR}" ]
 then
 rm -rf "${INSTALL_DIR}"
 fi
 
 mkdir -p "${INSTALL_DIR}"
 
 cp -R "${DEVICE_DIR}/" "${INSTALL_DIR}/"
 
 # Uses the Lipo Tool to merge both binary files (i386 + armv6/armv7) into one Universal final product.
 lipo -create "${DEVICE_DIR}/${FMK_NAME}" "${SIMULATOR_DIR}/${FMK_NAME}" -output "${INSTALL_DIR}/${FMK_NAME}"
 
 rm -r "${WRK_DIR}"
 */

/*
 原来
 if [ "${ACTION}" = "build" ]
 then
 INSTALL_DIR=${SRCROOT}/Products/${PROJECT_NAME}.framework
 
 DEVICE_DIR=${BUILD_ROOT}/${CONFIGURATION}-iphoneos/${PROJECT_NAME}.framework
 
 SIMULATOR_DIR=${BUILD_ROOT}/${CONFIGURATION}-iphonesimulator/${PROJECT_NAME}.framework
 
 
 if [ -d "${INSTALL_DIR}" ]
 then
 rm -rf "${INSTALL_DIR}"
 fi
 
 mkdir -p "${INSTALL_DIR}"
 
 cp -R "${DEVICE_DIR}/" "${INSTALL_DIR}/"
 #ditto "${DEVICE_DIR}/Headers" "${INSTALL_DIR}/Headers"
 
 lipo -create "${DEVICE_DIR}/${PROJECT_NAME}" "${SIMULATOR_DIR}/${PROJECT_NAME}" -output "${INSTALL_DIR}/${PROJECT_NAME}"
 
 #open "${DEVICE_DIR}"
 open "${SRCROOT}/Products"
 fi

 */


