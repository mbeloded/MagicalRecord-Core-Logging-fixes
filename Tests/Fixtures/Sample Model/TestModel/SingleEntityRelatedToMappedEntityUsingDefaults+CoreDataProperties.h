//
//  SingleEntityRelatedToMappedEntityUsingDefaults+CoreDataProperties.h
//  MagicalRecord
//
//  Created by Tony Arnold on 22/11/2015.
//  Copyright © 2015 Magical Panda Software LLC. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "SingleEntityRelatedToMappedEntityUsingDefaults.h"

NS_ASSUME_NONNULL_BEGIN

@interface SingleEntityRelatedToMappedEntityUsingDefaults (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *singleEntityRelatedToMappedEntityUsingDefaultsID;
@property (nullable, nonatomic, retain) MappedEntity *mappedEntity;

@end

NS_ASSUME_NONNULL_END
