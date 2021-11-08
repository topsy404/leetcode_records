//
// Created by asu on 2021/11/8.
//

#ifndef LEETCODE_RECORDS_S1137_H
#define LEETCODE_RECORDS_S1137_H


class S1137 {
    public:
        int tribonacci(int n) {
            if(n == 0 || n == 1) return n;
            if(n == 2) return 1;
            int a = 0, b = 1, c = 1;
            int tmp = 0;
            for(int i  = 3; i <= n; i++){
                tmp = a + b + c;
                a = b;
                b = c;
                c = tmp;
            }
            return c;
        }
};


#endif //LEETCODE_RECORDS_S1137_H
