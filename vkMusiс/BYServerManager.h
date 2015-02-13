//
//  BYServerManager.h
//  vkMusiс
//
//  Created by George on 09.02.15.
//  Copyright (c) 2015 George. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
#import "BYAccessToken.h"
#import "BYDataManager.h"

@interface BYServerManager : NSObject

@property (strong, nonatomic) AFHTTPRequestOperationManager*    requestManager;
@property (strong, nonatomic) BYAccessToken*                    token;
@property (strong, nonatomic) AFURLSessionManager*              sessionManager;
@property (strong, nonatomic) BYDataManager*                    dataManager;

- (void)authorizeWithCompletionBlock:(void(^)())completion;

+ (BYServerManager*)sharedManager;

- (void)getSongsWithParameters:(NSDictionary*)params onSuccess:(void(^)())success andFailure:(void(^)(NSError* error))failure;


@end
