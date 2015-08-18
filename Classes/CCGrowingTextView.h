//
//  CCGrowingTextView.h
//  GrowingTextViewExample
//
//  Created by ziryanov on 29/10/13.
//  Copyright (c) 2013 ziryanov. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CCGrowingTextViewDelegate <NSObject>

- (BOOL)canTextViewPerformAction:(SEL)action withSender:(id)sender;

@end

@interface CCGrowingTextView : UITextView

@property (nonatomic) NSString *placeholder;
@property (nonatomic) UIColor *placeholderColor UI_APPEARANCE_SELECTOR;

@property (nonatomic) NSUInteger maxNumberOfLine;
@property (nonatomic, assign)   id <CCGrowingTextViewDelegate>   canPerformdelegate;

@end
