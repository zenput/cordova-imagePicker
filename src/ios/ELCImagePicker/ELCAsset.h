//
//  Asset.h
//
//  Created by ELC on 2/15/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Photos/PHAsset.h>

@class ELCAsset;

@protocol ELCAssetDelegate <NSObject>

@optional
- (void)assetSelected:(ELCAsset *)asset;
- (BOOL)shouldSelectAsset:(ELCAsset *)asset;
@end


@interface ELCAsset : NSObject

@property (nonatomic, strong) PHAsset *asset;
@property (nonatomic, weak) id<ELCAssetDelegate> parent;
@property (nonatomic, assign) BOOL selected;

- (id)initWithAsset:(PHAsset *)asset;

@end
