class Solution {
public:


    bool check(int md,vector<int>&weights,int days){
        int count=1;
        int m=md;
        for(int i=0;i<weights.size();i++){
            if(m>=weights[i]){
                m-=weights[i];
            }else{
                m=md;
                count++;
                m-=weights[i];
            }
        }
        if(count>days) return false;
        else return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        // apply binary search on the sum of elements of the array and its maximum eleemnt
        int n=weights.size();
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(mx<weights[i]){
                mx=weights[i];
            }
        }
        int lo=mx;
        int hi=sum;
        int ans=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,weights,days)==true){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
       return ans;
    }
};