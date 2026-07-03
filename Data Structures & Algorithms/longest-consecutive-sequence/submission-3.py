class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0;


        # METHOD 2: 
        # sort nums 
        # loop through nums, check if the next num is prev num +1
        # keep a count variable 
        myArray = []
        nums.sort()
        count = 1;
        for i, number in enumerate(nums):
            if i > 0 and number == nums[i-1] + 1:
                count = count + 1
            elif i > 0 and number == nums[i-1]:
                continue
            elif i > 0 and nums[i-1] != nums[i] + 1:
                myArray.append(count)
                count = 1
        myArray.append(count)
        heapq.heapify_max(myArray) 
      
        return myArray[0]






       
        



        