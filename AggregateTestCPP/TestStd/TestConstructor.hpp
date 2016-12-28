//
//  TestConstructor.hpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/28.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#ifndef TestConstructor_hpp
#define TestConstructor_hpp

#include <stdio.h>
#include <iostream>

class TestConstructor
{
public:
    TestConstructor();
    
    //
    //
    // 拷贝构造器何时调用问题
    TestConstructor( TestConstructor &obj );
};

#endif /* TestConstructor_hpp */
