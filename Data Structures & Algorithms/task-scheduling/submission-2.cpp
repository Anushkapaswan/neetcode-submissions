class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        int sz=tasks.size();
        for(int i=0;i<sz;i++){
            freq[tasks[i]-'A']++;
        }
        int maxFreq=0;
        for(int i=0;i<26;i++){
            maxFreq=max(maxFreq,freq[i]);
        }
        int maxCount=0;
        for(auto f:freq){
            if(maxFreq==f) maxCount++;
        }
        int result=(maxFreq-1)*(n+1)+maxCount;
        return max(result,sz);
    }
};
