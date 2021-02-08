class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for index, num in enumerate(nums):
            i = 0
            while i < len(nums):
                
                if i==index:
                    i += 1
                    continue
                
                if nums[i] + num == target:
                    return index,i
                
                i += 1
        