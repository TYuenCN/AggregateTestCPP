//
//  TestFloatOverflow.hpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 17/1/19.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#ifndef TestFloatOverflow_hpp
#define TestFloatOverflow_hpp

#include <stdio.h>

class TestFloatOverflow {
    
    /**
     finite 函数说明：
     
     _finite returns a nonzero value (TRUE) if its argument x is not infinite,
     that is, if –INF < x < +INF. It returns 0 (FALSE) if the argument is infinite or a NaN.
     
     infinit： 美  ['ɪnfɪnət]  adj. 无限的，无穷的；无数的；极大的
     
     finite： 美  ['faɪnaɪt]  adj. 有限的；限定的
     */
    void testFloatOverflow();
    
    
    /**
     finite 函数说明：
     
     _finite returns a nonzero value (TRUE) if its argument x is not infinite,
     that is, if –INF < x < +INF. It returns 0 (FALSE) if the argument is infinite or a NaN.
     
     infinit： 美  ['ɪnfɪnət]  adj. 无限的，无穷的；无数的；极大的
     
     finite： 美  ['faɪnaɪt]  adj. 有限的；限定的
     */
    void testDoubleOverflow();
    
public:
    TestFloatOverflow(){
        testFloatOverflow();
        testDoubleOverflow();
    }
};

#endif /* TestFloatOverflow_hpp */
