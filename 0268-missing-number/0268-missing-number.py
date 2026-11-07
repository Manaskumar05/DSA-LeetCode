class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        n = len(nums)
        sum = 0
        for i in range(n):
            sum += nums[i]

        total = (int)(n * (n + 1) / 2)

        return total - sum