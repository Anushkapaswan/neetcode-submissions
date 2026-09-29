class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans=[]
        dic={}
        n=len(nums)
        for i in range(n):
            remain=target-nums[i]
            if remain in dic:
                ans.append(dic[remain])
                ans.append(i)
            dic[nums[i]]=i
        return ans
        