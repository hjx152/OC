//
//  SampleProtocol.h
//  HelloWorld
//
//  Created by 金现代 on 2020/12/25.
//  Copyright © 2020年 金现代. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 协议定义
@protocol SampleProtocolDelegate <NSObject>
@required
- (void) processCompleted;

@end
// 协议定义结束

@interface SampleProtocol : NSObject
{
    id <SampleProtocolDelegate> _delegate;
}
@property (nonatomic,strong) id delegate;
-(void)startSampleProcess;

@end

NS_ASSUME_NONNULL_END
