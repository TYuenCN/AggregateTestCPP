//
//  TestClass.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 17/1/18.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#include "TestClass.hpp"

void MyClass::testNonConstFunc(){
    a = 2;
    std::cout << a << std::endl;
}

void MyClass::testConstFunc() const{
    std::cout << a << std::endl;
}

const MyClass & MyClass::testReturnThis() const {
    return *this;
}
