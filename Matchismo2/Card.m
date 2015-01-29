//
//  Card.m
//  Matchismo2
//
//  Created by Michael on 15/1/24.
//  Copyright (c) 2015年 Michael's fun factory. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card


- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    
    return score;
}
@end
