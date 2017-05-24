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
#include "TestFloatOverflow.hpp"
#include "TestSingletonClass.hpp"

#include "KeyboardRow_500.hpp"
#include<math.h>


class  A{
public:
    virtual void  printA(){
        std::cout << "Base PrintA Called." << std::endl;
    }
};
class  B: public A{
public:
    void  printA(){
        std::cout << "Sub B PrintA Called." << std::endl;
    }
};
class  C: public B{
public:
    void  printA(){
        std::cout << "Sub C PrintA Called." << std::endl;
    }
};



int main(int argc, const char **argv) {
    
    A opA, *ptrA;
    B opB;
    C opC;
    
    ptrA = &opA;
    // 正确：调用基类成员方法 printA
    ptrA->printA();
    
    ptrA = &opB;
    // 正确：调用 opB 从基类继承来的成员方法 printA
    ptrA->printA();
    
    ptrA = &opC;
    // 正确：调用 opB 从基类继承来的成员方法 printA
    ptrA->printA();
    
    TestConstructor t1;
    TestConstructor t2 = t1.returnNewInstance();
    
    //
    //
    // 启动参数
    std::cout << "⚠️测试：\"启动参数\"。" << std::endl;
    for (int i = 0; i != argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    
    
    //
    //
    // 测试单例类
    std::cout << "⚠️测试：\"单例类\"。" << std::endl;
    TestSingletonClass *__insA = TestSingletonClass::sharedInstance();
    TestSingletonClass *__insB = TestSingletonClass::sharedInstance();
    if (__insA == __insB) {
        std::cout << "__insA == __insB，确实是单例类了。" << std::endl;
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
    
    
    TestFloatOverflow __tstOverflow;
    
    
    //
    //
    // Leet Code
    std::cout << "⚠️--------------------------------" << std::endl;
    std::cout << "⚠️测试：LeetCode" << std::endl;
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    Solution500 s500;
    vector<string> result500 = s500.findWords(words);
    copy (result500.begin(), result500.end(), ostream_iterator<string> (std::cout, "\n"));

    return 0;
}
