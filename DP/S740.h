//
// Created by asu on 2021/11/22.
//

#ifndef DP_S740_H
#define DP_S740_H
#include <vector>

class S740 {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> slots(n, 0);
        for (auto num : nums) slots[num] += num;
        int skip = 0, earn = slots[0], tmp_earn, tmp_skip;
        for(size_t index = 1; index < n; ++index){
            tmp_earn = skip + slots[index];
            tmp_skip = std::max(earn, skip);
            earn = tmp_earn;
            skip = tmp_skip;
        }
        return std::max(earn, skip);
    }
};


#endif //DP_S740_H
