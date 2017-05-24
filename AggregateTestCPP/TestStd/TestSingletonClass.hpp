//
//  TestSingletonClass.hpp
//  AggregateTestCPP
//
//  Created by Yuen on 2017/5/24.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#ifndef TestSingletonClass_hpp
#define TestSingletonClass_hpp

#include <stdio.h>

class TestSingletonClass{
public:
    static TestSingletonClass *sharedInstance();
private:
    TestSingletonClass() = default;
    static TestSingletonClass *instance;
};

#endif /* TestSingletonClass_hpp */
