//
//  cellStudents.h
//  json Tutorial
//
//  Created by Walter Gonzalez Domenzain on 17/03/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface cellStudents : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *lblName;
@property (strong, nonatomic) IBOutlet UILabel *lblId;
@property (strong, nonatomic) IBOutlet UILabel *lblApellido;
@property (strong, nonatomic) IBOutlet UILabel *lblEdad;

@end
