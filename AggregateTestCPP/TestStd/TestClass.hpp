//
//  TestClass.hpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 17/1/18.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#ifndef TestClass_hpp
#define TestClass_hpp

#include <stdio.h>
#include <iostream>

class MyClass{
public:
    int a = 1;
    void testNonConstFunc();
    void testConstFunc() const;
};

#endif /* TestClass_hpp */
