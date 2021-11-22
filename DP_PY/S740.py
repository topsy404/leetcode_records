"""
-*-coding = utf-8 -*-
__author: topsy
@time:2021/11/11 8:11
"""

import collections

class Solution:
    def deleteAndEarn(self, nums) -> int:
        cums = [0] * len(nums)
        records = collections.defaultdict(list)
        for index in range(len(nums) - 1, -1, -1):
            _cur = nums[index]
            cums[index] = records[_cur - 1] + records[_cur + 1]
            records[_cur] += _cur


