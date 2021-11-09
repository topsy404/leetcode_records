//
// Created by asu on 2021/11/9.
//

#ifndef LEETCODE_RECORDS_S746_H
#define LEETCODE_RECORDS_S746_H

#include <vector>
using namespace std;

class S746 {
//public:
//        int minCostClimbingStairs(vector<int>& cost) {
//
//            vector<int> cum(cost.size() , 0);
//            cum[0] = cost[0];
//            cum[1] = cost[1];
//            for(size_t index = 2; index < cost.size(); ++index){
//                cum[index] = min(cum[index-1], cum[index-2]) + cost[index];
//            }
//            size_t last = cost.size();
//            return min(cum[last - 1] , cum[last-2] );
//
//        }
public:
    int minCostClimbingStairs(vector<int> &cost) {

        vector<int> cum(cost.size(), 0);
        int a = cost[0], b = cost[1], tmp_;
        for (size_t index = 2; index < cost.size(); ++index) {
            tmp_ = min(a, b) + cost[index];
            a = b;
            b = tmp_;
        }
        return min(a, b);

    }
};


#endif //LEETCODE_RECORDS_S746_H
