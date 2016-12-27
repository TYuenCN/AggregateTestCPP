//
//  TestMacroDefine.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 16/12/27.
//  Copyright © 2016年 袁峥. All rights reserved.
//

#include "TestMacroDefine.hpp"

/**
 * 测试系统内置宏
 */
void testStdMacroDefine()
{
#ifndef NDEBUG
    std::cout<< __func__ << std::endl;
    std::cout<< __FILE__ << std::endl;
    std::cout<< __LINE__ << std::endl;
    std::cout<< __TIME__ << std::endl;
    std::cout<< __DATE__ << std::endl;
#endif
    
}
