//
//  TestFuncArgs.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/21.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#include "TestFuncArgs.hpp"


/**
 * 测试___函数可变参数___<stdarg.h><cstdarg>__va_list_start_arg_end
 *
 * @param i   可变参数总数目
 * @param ... 可变参数列表
 */
void tstFuncArgs( int i, ... )
{
    va_list arg_ptr;
    va_start(arg_ptr, i);
    while (i > 0) {
        int j = va_arg(arg_ptr, int);
        std::cout << "tstFuncArgs( int i, ... ):"
        << j << std::endl;
        --i;
    }
    va_end(arg_ptr);
}

/**
 * 测试___函数可变参数___initializer_list
 *
 * @param il 可变参数列表
 */
void tstFuncArgs( std::initializer_list<std::string> il )
{
    for (auto beg = il.begin(); beg != il.end(); beg++) {
        std::cout << "tstFuncArgs( std::initializer_list<std::string> il ):"
        << *beg << std::endl;
    }
}
