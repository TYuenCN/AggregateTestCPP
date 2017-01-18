//
//  TestClassInherit.hpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/28.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#ifndef TestClassInherit_hpp
#define TestClassInherit_hpp

#include <stdio.h>
#include <iostream>

//
//
// SomeClass
class SomeClass
{
public:
    SomeClass();
};

//
//
// BaseClass
class BaseClass
{
public:
    BaseClass( int i );
    int iValA, iValB;
    void methodA();
};


//
//
// SubClass
class SubClass:private BaseClass
{
public:
    SubClass( int i );
    
    //
    //
    // 访问声明：私有继承后，另外开放某属性的访问权限；
    // 注意：基类中本身就是私有的，都得不到继承，根本无所谓此特性；
    using BaseClass::iValA;
private:
    SomeClass someClass;
};


#endif /* TestClassInherit_hpp */
