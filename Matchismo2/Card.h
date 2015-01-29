//
//  Card.h
//  Matchismo2
//
//  Created by Michael on 15/1/24.
//  Copyright (c) 2015年 Michael's fun factory. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
