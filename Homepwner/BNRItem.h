//
//  BNRItem.h
//  Homepwner
//
//  Created by sijiewang on 8/14/15.
//  Copyright (c) 2015 lnmcc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject {
    
}

@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, readonly, strong) NSDate *dateCreated;
@property (nonatomic, copy) NSString *itemKey;

+ (instancetype)randomItem;

- (instancetype)init;

- (instancetype)initWithItemName:(NSString *)name;

- (instancetype)initWithItemName:(NSString *)name
                  valueInDollars:(int)value
                    serialNumber:(NSString *)sNumber;

@end
