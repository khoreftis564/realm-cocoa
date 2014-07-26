//
//  RLM.h
//  RealmSwiftExamples
//
//  Created by Kendrick Horeftis on 7/20/14.
//  Copyright (c) 2014 Realm. All rights reserved.
//

#import <Realm/Realm.h>

@interface RLM : RLMObject
// Add properties here to define the model
@end

// This protocol enables typed collections. i.e.:
// RLMArray<RLM>
RLM_ARRAY_TYPE(RLM)
