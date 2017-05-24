//
//  TestConstructor.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/28.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#include "TestConstructor.hpp"


TestConstructor::TestConstructor()
{
    std::cout << "TestConstructor 默认构造器 called." << std::endl;
}
TestConstructor::TestConstructor( TestConstructor &obj )
{
    std::cout << "TestConstructor \"拷贝\"构造器 called." << std::endl;
}
TestConstructor& TestConstructor::returnNewInstance(){
    TestConstructor t;
    return t;
}
