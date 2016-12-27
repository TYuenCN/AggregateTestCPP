//
//  main.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/21.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#include <iostream>
#include "TestFuncArgs.hpp"
#include "TestMacroDefine.hpp"


int main(int argc, const char **argv) {
    //
    //
    // 启动参数
    for (int i = 0; i != argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    
    //
    //
    // 测试___Macro
    testStdMacroDefine();
    
    //
    //
    // 测试___函数可变参数___initializer_list
    tstFuncArgs({"Arg1", "Arg2", "Arg3", "Arg4"});
    // 测试___函数可变参数___<stdarg.h><cstdarg>__va_list_start_arg_end
    tstFuncArgs(3, 11, 22, 33);
    
    return 0;
}
