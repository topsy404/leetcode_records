//
// Created by asu on 2021/11/8.
//

#include <iostream>
#include <vector>

#include "S746.h"


int main(){
    S746 sol;
    std::vector<int> cost {10, 15, 20};
    int ans =  sol.minCostClimbingStairs(cost);
    std::cout << ans << std::endl;
    return 0;
}
