//
// Created by asu on 2021/11/10.
//

#ifndef LEETCODE_RECORDS_S198_H
#define LEETCODE_RECORDS_S198_H

#include <vector>
using namespace std;


class S198 {

    public:
        int rob(vector<int>& nums) {
            if(nums.size() == 1) return nums[0];
            if(nums.size() == 2) return max(nums[0], nums[1]);
            // allow rob index 2, not allow rob index 2
            int allow_rob = nums[0], not_allow_rob = nums[1];
            int tmp = 0, not_tmp = 0;
            for (size_t index = 2; index < nums.size(); ++index) {
                // rob current home
                tmp = nums[index] + allow_rob;
                // not rob current home
                not_tmp = max(allow_rob, not_allow_rob);
                not_allow_rob = tmp;
                allow_rob = not_tmp;

            }
            return max(allow_rob, not_allow_rob);
        }


};


#endif //LEETCODE_RECORDS_S198_H


//
// Created by asu on 2021/11/8.
//

//#include <iostream>
//#include <vector>
//
//#include "S198.h"
//
//
//int main(){
//    S198 sol;
//    //std::vector<int> cost {1,2,3,1};
//    std::vector<int> cost {2,7,9,3,1};
//    //std::vector<int> cost {2,1,1,2};
//
//    int ans =  sol.rob(cost);
//    std::cout << ans << std::endl;
//    return 0;
//}
