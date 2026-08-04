class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        nums.sort()
        n=len(nums)
        a=nums[0]
        b=nums[n-1]
        c=[]
        for i in range (a,b+1):
            c.append(i)
        t=list(set(c)-set(nums))
        return sorted(t)
        