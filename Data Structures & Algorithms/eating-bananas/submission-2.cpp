class Solution {
public:


    // to check the condition wheather it is satisfied he condition 
    bool check(int speed,vector<int>&piles,int h){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            if(speed>=piles[i]) count++;
            else if(piles[i]%speed==0) count+=(long long)piles[i]/speed;
            else{
                count+=(long long) piles[i]/speed+1;
            }
        }
        if(count>h) return false;
        return true; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // binary search
        int n=piles.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            if(mx<piles[i]) mx=piles[i];
        }
        int lo=1;
        int hi=mx;
        int ans=0;
        while(lo<=hi){
              int mid=lo+(hi-lo)/2;
              if(check(mid,piles,h)==true){
                ans=mid;
                hi=mid-1;
              }
              else{
                lo=mid+1;
              }
        }
        return ans;

    }
};
