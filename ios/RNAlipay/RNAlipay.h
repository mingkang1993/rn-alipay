#import <React/RCTLog.h>
#import <React/RCTConvert.h>
#import <React/RCTBridge.h>
#import <React/RCTUtils.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTBridgeModule.h>
#import <UIKit/UIKit.h>
#import <AlipaySDK/AlipaySDK.h>

@interface RNAlipay : NSObject <RCTBridgeModule>
+ (instancetype) shareInstance;

- (void)processOrderWithPaymentResult:(NSURL *)resultUrl;

@end
