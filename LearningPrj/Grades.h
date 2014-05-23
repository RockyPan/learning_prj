//
//  Grades.h
//  LearningPrj
//
//  Created by PanKyle on 14-5-23.
//  Copyright (c) 2014年 PanKyle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Grades : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *lessons;
@end

@interface Grades (CoreDataGeneratedAccessors)

- (void)addLessonsObject:(NSManagedObject *)value;
- (void)removeLessonsObject:(NSManagedObject *)value;
- (void)addLessons:(NSSet *)values;
- (void)removeLessons:(NSSet *)values;

@end
