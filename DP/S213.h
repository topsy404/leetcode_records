//
// Created by asu on 2021/11/10.
//

#ifndef DP_S213_H
#define DP_S213_H

#include <vector>

using namespace std;

class S213 {

public:
    int
    rob_line(vector<int> nums, vector<int>::const_iterator start, vector<int>::const_iterator end, const size_t count) {
        // allow rob index 2, not allow rob index 2
        int allow_rob = *start, not_allow_rob = *(start + 1);
        if (count == 2) return max(allow_rob, not_allow_rob);
        int tmp = 0, not_tmp = 0;
        for (auto it = start + 2; it != end; ++it) {
            // rob current home
            tmp = *it + allow_rob;
            // not rob current home
            not_tmp = max(allow_rob, not_allow_rob);
            not_allow_rob = tmp;
            allow_rob = not_tmp;

        }
        return max(allow_rob, not_allow_rob);
    }

public:
    int rob(vector<int> &nums) {
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        return max(rob_line(nums, nums.begin(), nums.end() - 1, nums.size() - 1),
                   rob_line(nums, nums.begin() + 1, nums.end(), nums.size() - 1));
    }
};


#endif //DP_S213_H
