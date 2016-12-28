//
//  TestClassInherit.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/28.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#include "TestClassInherit.hpp"

#pragma mark - BaseClass
BaseClass::BaseClass( int i ):iValA(i)
{
    std::cout << "⚠️测试：基类，子类，子类包含对象，初始化顺序。" << std::endl;
    std::cout << "BaseClass Initializer run..." << std::endl;
}
void BaseClass::methodA()
{
    std::cout << "BaseClass.methodA() called." << std::endl;
}




#pragma mark - SubClass
SubClass::SubClass(int i):BaseClass(i), someClass()
{
    std::cout << "SubClass Initializer run..." << std::endl;
}


#pragma mark - SomeClass
SomeClass::SomeClass(){
    std::cout << "SomeClass Initializer run..." << std::endl;
}
