//
//  YGoodLocationCheckView.h
//  shopsN
//
//  Created by imac on 2016/12/16.
//  Copyright © 2016年 联系QQ:1084356436. All rights reserved.
//

#import "BaseView.h"

@protocol YGoodLocationCheckViewDelegate <NSObject>

-(void)chooseLoaction:(YSGoodLocationModel*)sender;

@end

@interface YGoodLocationCheckView : BaseView

@property (strong,nonatomic) NSMutableArray<YSGoodLocationModel*>*locationArr;

@property (weak,nonatomic) id<YGoodLocationCheckViewDelegate>delegate;

@end
