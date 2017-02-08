//
//  KeyboardRow_500.hpp
//  AggregateTestCPP
//
//  Created by 袁峥 on 17/2/8.
//  Copyright © 2017年 袁峥. All rights reserved.
//

#ifndef KeyboardRow_500_hpp
#define KeyboardRow_500_hpp

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Solution500 {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        unsigned int l0 = 0;
        unsigned int l1 = 0;
        unsigned int l2 = 0;
        l0 = l0 | (1 << ('q' - 'a') );
        l0 = l0 | (1 << ('w' - 'a') );
        l0 = l0 | (1 << ('e' - 'a') );
        l0 = l0 | (1 << ('r' - 'a') );
        l0 = l0 | (1 << ('t' - 'a') );
        l0 = l0 | (1 << ('y' - 'a') );
        l0 = l0 | (1 << ('u' - 'a') );
        l0 = l0 | (1 << ('i' - 'a') );
        l0 = l0 | (1 << ('o' - 'a') );
        l0 = l0 | (1 << ('p' - 'a') );
        
        l1 = l1 | (1 << ('a' - 'a') );
        l1 = l1 | (1 << ('s' - 'a') );
        l1 = l1 | (1 << ('d' - 'a') );
        l1 = l1 | (1 << ('f' - 'a') );
        l1 = l1 | (1 << ('g' - 'a') );
        l1 = l1 | (1 << ('h' - 'a') );
        l1 = l1 | (1 << ('j' - 'a') );
        l1 = l1 | (1 << ('k' - 'a') );
        l1 = l1 | (1 << ('l' - 'a') );
        
        l2 = l2 | (1 << ('z' - 'a') );
        l2 = l2 | (1 << ('x' - 'a') );
        l2 = l2 | (1 << ('c' - 'a') );
        l2 = l2 | (1 << ('v' - 'a') );
        l2 = l2 | (1 << ('b' - 'a') );
        l2 = l2 | (1 << ('n' - 'a') );
        l2 = l2 | (1 << ('m' - 'a') );
        
        for( auto beg = words.begin(); beg != words.end(); beg++ ){
            string str4Current = *beg;
            
            int inRow = -1;
            for( int i = 0; i < str4Current.size(); i++ ){
                char c = str4Current[i];
                if( ((1 << (tolower(c) - 'a')) & l0) > 0 ){
                    if( inRow == -1 ){
                        inRow = 0;
                    }
                    if( inRow != 0 ){
                        break;
                    }
                }
                else if( ((1 << (tolower(c) - 'a')) & l1) > 0 ){
                    if( inRow == -1 ){
                        inRow = 1;
                    }
                    if( inRow != 1 ){
                        break;
                    }
                }
                else if( ((1 << (tolower(c) - 'a')) & l2) > 0 ){
                    if( inRow == -1 ){
                        inRow = 2;
                    }
                    if( inRow != 2 ){
                        break;
                    }
                }
                if( i == str4Current.size() - 1 ){
                    result.push_back(str4Current);
                }
            }
        }
        
        return result;
    }
};

#endif /* KeyboardRow_500_hpp */
