//
//  main.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/21.
//  Copyright © 2016年 袁峥. All rights reserved.
//

//#define NDEBUG

#include <iostream>
#include "TestClass.hpp"
#include "TestFuncArgs.hpp"
#include "TestMacroDefine.hpp"
#include "TestConstructor.hpp"
#include "TestClassInherit.hpp"


int main(int argc, const char **argv) {
    //
    //
    // 启动参数
    std::cout << "⚠️测试：\"启动参数\"。" << std::endl;
    for (int i = 0; i != argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    
    //
    //
    // 测试___Macro
    std::cout << "⚠️测试：\"Macro\"。" << std::endl;
    testStdMacroDefine();
    
    //
    //
    // 测试___函数可变参数___initializer_list
    std::cout << "⚠️测试：\"可变形参\"的使用。" << std::endl;
    tstFuncArgs({"Arg1", "Arg2", "Arg3", "Arg4"});
    // 测试___函数可变参数___<stdarg.h><cstdarg>__va_list_start_arg_end
    tstFuncArgs(3, 11, 22, 33);
    
    
    //
    //
    // 测试___Class
    std::cout << "⚠️测试：Class。" << std::endl;
    MyClass mc{};
    mc.testNonConstFunc();
    mc.testConstFunc();
    
    //
    //
    // 测试___构造器
    std::cout << "⚠️测试：构造器。" << std::endl;
    TestConstructor constructorA;
    TestConstructor constructorB = constructorA;
    constructorA = constructorB;
    
    
    //
    //
    // 测试___继承相关知识
    std::cout << "⚠️测试：私有继承后的，\"访问声明\"。" << std::endl;
    SubClass sc(99);
    std::cout << "私有继承 BaseClass 后，使用\"访问声明\" 公开属性 BaseClass.iValA 并访问，值为:" << sc.iValA << std::endl;
    
    return 0;
}
