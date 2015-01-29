//
//  Deck.h
//  Matchismo2
//
//  Created by Michael on 15/1/24.
//  Copyright (c) 2015年 Michael's fun factory. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
