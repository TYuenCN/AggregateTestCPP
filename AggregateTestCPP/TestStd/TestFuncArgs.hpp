//
//  TestFuncArgs.hpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/21.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#ifndef TestFuncArgs_hpp
#define TestFuncArgs_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <initializer_list>
#include <cstdarg> // #include <stdarg.h>


/**
 * 测试___函数可变参数___initializer_list
 *
 * @param il 可变参数列表
 */
extern void tstFuncArgs( std::initializer_list<std::string> il );

/**
 * 测试___函数可变参数___<stdarg.h><cstdarg>__va_list_start_arg_end
 *
 * @param i   可变参数总数目
 * @param ... 可变参数列表
 */
extern void tstFuncArgs( int i, ... );

#endif /* TestFuncArgs_hpp */
