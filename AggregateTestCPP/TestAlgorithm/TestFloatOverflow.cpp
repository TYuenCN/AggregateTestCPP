//
//  TestFloatOverflow.cpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 17/1/19.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#include <cmath>
#include <cfloat>
#include "TestFloatOverflow.hpp"


/**
 finite 函数说明：
 
 _finite returns a nonzero value (TRUE) if its argument x is not infinite,
 that is, if –INF < x < +INF. It returns 0 (FALSE) if the argument is infinite or a NaN.
 
 infinit： 美  ['ɪnfɪnət]  adj. 无限的，无穷的；无数的；极大的
 
 finite： 美  ['faɪnaɪt]  adj. 有限的；限定的
 */
void TestFloatOverflow::testFloatOverflow(){
    // float类型
    float fval1 = 1.2f;
    float fval2 = 1.2f*(float)pow((double)10,38);
    float fval3 = 1.2f*(float)pow((double)10,39);
    printf("fval1 = %g 溢出情况(1:未溢出; 0:溢出;)：%d\n", fval1, finite(fval1));// 1 未溢出
    printf("fval2 = %g 溢出情况(1:未溢出; 0:溢出;)：%d\n", fval2, finite(fval2));// 1 未溢出
    printf("fval3 = %g 溢出情况(1:未溢出; 0:溢出;)：%d\n", fval3, finite(fval3));// 0 溢出
    if (fval1 > FLT_MAX || fval1 < FLT_MIN)
        printf("overflow\n");
    if (fval2 > FLT_MAX || fval2 < FLT_MIN)
        printf("overflow\n");
    if (fval3 > FLT_MAX || fval3 < FLT_MIN)
        printf("overflow\n");
}

/**
 finite 函数说明：
 
 _finite returns a nonzero value (TRUE) if its argument x is not infinite,
 that is, if –INF < x < +INF. It returns 0 (FALSE) if the argument is infinite or a NaN.
 
 infinit： 美  ['ɪnfɪnət]  adj. 无限的，无穷的；无数的；极大的
 
 finite： 美  ['faɪnaɪt]  adj. 有限的；限定的
 */
void TestFloatOverflow::testDoubleOverflow(){
    
    // double类型
    double dval1 = 1.2;
    double dval2 = 1.2*pow((double)10,308);
    double dval3 = 1.2*pow((double)10,309);
    printf("dval1 = %g 溢出情况(1:未溢出; 0:溢出;)：%d\n", dval1, finite(dval1));// 1 未溢出
    printf("dval2 = %g 溢出情况(1:未溢出; 0:溢出;)：%d\n", dval2, finite(dval2));// 1 未溢出
    printf("dval3 = %g 溢出情况(1:未溢出; 0:溢出;)：%d\n", dval3, finite(dval3));// 0 溢出
    if (dval1 > DBL_MAX || dval1 < DBL_MIN)
        printf("overflow\n");
    if (dval2 > DBL_MAX || dval2 < DBL_MIN)
        printf("overflow\n");
    if (dval3 > DBL_MAX || dval3 < DBL_MIN)
        printf("overflow\n");
}
