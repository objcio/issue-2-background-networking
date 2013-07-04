//
// Created by chris on 6/17/13.
//

#import <Foundation/Foundation.h>


@interface DownloadOperation : NSOperation
- (id)initWithURL:(NSURL*)url;
@property (nonatomic, readonly) NSError* error;
@property (nonatomic, strong) NSData* data;
@property (nonatomic, copy) void (^progressCallback) (float);
@end