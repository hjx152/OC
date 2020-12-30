//
//  SampleProtocol.m
//  HelloWorld
//
//  Created by 金现代 on 2020/12/25.
//  Copyright © 2020年 金现代. All rights reserved.
//

#import "SampleProtocol.h"

@implementation SampleProtocol
-(void)startSampleProcess{
    
    [NSTimer scheduledTimerWithTimeInterval:3.0 target:self.delegate
                                   selector:@selector(processCompleted) userInfo:nil repeats:NO];
}
@end
