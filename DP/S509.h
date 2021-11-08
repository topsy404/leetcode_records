//
// Created by asu on 2021/11/8.
//

#ifndef LEETCODE_RECORDS_S509_H
#define LEETCODE_RECORDS_S509_H


class S509 {
    public:
        int fib(int n) {
            if (n == 0 || n == 1) return n;
            return fib(n-1) + fib(n-2);
        }

};


#endif //LEETCODE_RECORDS_S509_H
