//
//  TestSingletonClass.cpp
//  AggregateTestCPP
//
//  Created by Yuen on 2017/5/24.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#include "TestSingletonClass.hpp"

TestSingletonClass * TestSingletonClass::instance = new TestSingletonClass;
TestSingletonClass * TestSingletonClass::sharedInstance()
{
    return instance;
}
