"""
-*-coding = utf-8 -*-
__author: topsy
@time:2021/11/22 12:41
"""

class Solution:
    def deleteAndEarn(self, nums) -> int:
        """
        if we earn num1 for nums, we will get all numbers with the same value of num1
        and we can not earn any number with the value of num1 -1 or num1 + 1
        """
        n = 10001
        slots = [0] * n
        for num in nums:
            slots[num] += num
        earn = slots[0]
        skip = 0
        for i in range(1, n):
            tmp_earn = skip + slots[i]
            tmp_skip = max(skip, earn)
            earn = tmp_earn
            skip = tmp_skip
        return max(earn, skip)






