class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int odd=0;
        int even=1;
        int sum=0;
        int ans=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum%2!=0){
                ans=(ans+even)%mod;
                odd++;
            }else{
                ans=(ans+odd)%mod;
                even++;
            }
        }
        return ans;
    }
};