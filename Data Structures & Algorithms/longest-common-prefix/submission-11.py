class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        first_str=strs[0]
        for item in strs:
            j=0
            while j<len(item) and j<len(first_str):
                if item[j]!=first_str[j]:
                    break
                j+=1
            first_str=first_str[0:j]
        return first_str
                
