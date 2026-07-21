class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(n1>n2) return false;
        vector<int>a(26,0);
        vector<int>b(26,0);
        int j=0;
        for(int i=0;i<n1;i++){
            a[s1[i]-'a']++;
        }
        for(int i=0;i<n2;i++){
            b[s2[i]-'a']++;
            if(i-j+1>n1){
                b[s2[j]-'a']--;
                j++;
            }
            if(i-j+1==n1){
        if(a==b) return true;
            }
        }
        return false;
    }
};
