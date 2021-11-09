//
// Created by asu on 2021/11/9.
//

#ifndef DP_S70_H
#define DP_S70_H

class S70 {
    public:
        int climbStairs(int n) {
            if (n == 1 or n == 2) return n;
            int a = 1, b = 2;
            int tmp = 0;
            for(int i = 3; i <= n; i++ ){
                tmp = a + b;
                a = b;
                b = tmp;
            }
            return tmp;
        }
    };
};


#endif //DP_S70_H
