//
//  COLLADARoot.h
//  SPEditor
//
//  Created by Erik Buck on 9/29/12.
//  Copyright (c) 2012 Erik Buck. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKMath.h>


@interface COLLADARoot : NSObject

@property (strong, nonatomic)
   NSString *path;
@property (assign, nonatomic)
   GLKMatrix4 transform;
@property (strong, nonatomic)
   NSMutableDictionary *nodes;
@property (strong, nonatomic)
   NSMutableDictionary *imagePaths;
@property (strong, nonatomic)
   NSMutableDictionary *visualScenes;
@property (strong, nonatomic)
   NSMutableDictionary *geometries;
@property (strong, nonatomic)
   NSMutableDictionary *materials;
@property (strong, nonatomic)
   NSMutableDictionary *effects;
@property (strong, nonatomic)
   NSMutableDictionary *meshes;

@property (strong, nonatomic)
   NSManagedObjectContext *managedObjectContext;

@end
