"""268. Missing Number
https://leetcode.com/problems/missing-number/description/
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array."""
from typing import List
def missingNumber(self, nums: List[int]) -> int:
    result=[0]*(len(nums)+1)
    for i in nums:
        result[i]=1
    return result.index(0)
limit=int(input())
l=[int(input()) for _ in range(limit)]
print(missingNumber(l))