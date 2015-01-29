//
//  PlayingCard.h
//  Matchismo2
//
//  Created by Michael on 15/1/25.
//  Copyright (c) 2015年 Michael's fun factory. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
