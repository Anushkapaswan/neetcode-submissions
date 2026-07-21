class Solution {
public:
    bool isAnagram(string s, string t) {
        // using unordered map;
        // anagram are those which have the same number of character;
        if(s.length()!=t.length()) return false;
        map<char,int>mp;
        // now enter all the char into the map
        for(auto ch:s){
            mp[ch]++;
        }
        // now iterate the second string and then minus frequncy of character from the map
        for(auto ch:t){
            mp[ch]--;
        }
        
        // if all frequncy in map is zero then return true else false
        for(auto ch :mp){
            if(ch.second !=0) return false;
        }
        return true;
    }
};