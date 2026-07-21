class Solution {
public:

// to check koko can eat banana in given hours or not
bool eat(int mid,vector<int> &piles,int h){
    int count=0;
    for(int i=0;i<piles.size();i++){
        if(piles[i]<mid) count++;
        else if(piles[i]%mid==0) count+=piles[i]/mid;
        else count+=piles[i]/mid+1;
    }
    if(count>h) return false;
    else return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int mx=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(mx<piles[i]) mx=piles[i];
        }
        int ans=0;
        int j=mx;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(eat(mid,piles,h)==true){
                ans=mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};
