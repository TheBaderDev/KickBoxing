//
//  HeaderCell.h
//  kickboxing app
//
//  Created by Bader on 6/30/20.
//  Copyright © 2020 Nebo. All rights reserved.
//

#ifndef HeaderCell_h
#define HeaderCell_h


#endif /* HeaderCell_h */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HeaderCell : UITableViewCell
-(id)initWithCell: (NSString *) title : (UITableViewCell *) cell : (NSMutableArray *) moveCellArray;
- (IBAction)arrowPressed:(UIButton *)sender;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UIButton *arrowButton;
@property BOOL isOpen;
@property NSMutableArray * moveCellArray;
@end