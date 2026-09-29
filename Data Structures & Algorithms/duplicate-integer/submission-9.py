class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        ans={}
        for i in nums:
            if i in ans:
                return True
            else: 
                ans[i]=ans.get(i,0)+1
        return False
        