//
// Created by Benoît on 11/01/14.
// Copyright (c) 2014 Pragmatic Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ACXcodeFormatter : NSObject

/**
 *   选中对应当前代码页的类
 */
+(void)selectFileWithCurrentSourceCode;

/**
 *  打开当前编辑代码在finder中的位置
 */
+(void)openFinderWithCurrentSourceCode;

/**
 *  打开当前模拟器显示的VC
 */
+(void)openCurrentViewController;

+(void)saveCurrentViewControllerClass:(NSString *)vcClass;
+(NSString *)currentViewControllerName;
@end
