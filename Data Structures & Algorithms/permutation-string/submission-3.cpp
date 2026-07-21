class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        vector<int>arr1(26,0);
        vector<int>arr2(26,0);
        for(int i=0;i<n1;i++){
            arr1[s1[i]-'a']++;
        }
        int i=0;
        for(int j=0;j<n2;j++){
            arr2[s2[j]-'a']++;
            if(j-i+1>n1){
                arr2[s2[i]-'a']--;
                i++;
            }
            if(j-i+1==n1){
                if(arr1==arr2) return true;
            }
        }
        return false;
    }
};
