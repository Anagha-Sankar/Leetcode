class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        v = []
        l = 0
        r = len(nums)-1
        while(l<=r):
            if(abs(nums[l])>=abs(nums[r])):
                v.append(nums[l]*nums[l])
                l=l+1
            elif(abs(nums[r])>abs(nums[l])):
                v.append(nums[r]*nums[r])
                r=r-1       
        return v[::-1]
