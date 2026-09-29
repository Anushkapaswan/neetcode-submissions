class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_len=len(s)
        t_len=len(t)
        if s_len!=t_len:
            return False
        hash_map={}
        # in first pass we have traverse string s and make a hash map of its frequency count
        for ch in s:
            hash_map[ch]=hash_map.get(ch,0)+1
        # in second pass we subtract the number of frequency from the string t
        for ch in t:
            hash_map[ch]= hash_map.get(ch,0)-1
        # now iterate the map and if any char is there so we can say that its not the anagram
        for value in hash_map.values():
            if value!=0:
                return False
        return True

