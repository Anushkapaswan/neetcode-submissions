/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        // first step to find the peak element index 
        // then find the element 
        int n=arr.length();
        if(arr.get(0)==target) return 0;
        int low=1;
        int hi=n-1;
        int indx=0;
        while(low<=hi){
            int mid=(low+hi)/2;
            if(arr.get(mid)>arr.get(mid+1) && arr.get(mid)>arr.get(mid-1)){
                indx=mid;
                break;
            }
            else if(arr.get(mid)>arr.get(mid-1)) low=mid+1;
            else hi=mid-1;
        }
        int ans=-1;
        if(indx!=0){
            if(target>=arr.get(1) && target<=arr.get(indx)){
                low=1;
                hi=indx;
                while(low<=hi){
                    int mid=(low+hi)/2;
                    if(arr.get(mid)==target){
                      ans=mid; 
                      break; 
                    } 
                    else if(target<arr.get(mid)) hi=mid-1;
                    else low=mid+1;
                }
            }
        }
        if(ans==-1){
            low=indx+1;
            hi=n-1;
            while(low<=hi){
                int mid=(low+hi)/2;
                if(arr.get(mid)==target){
                    ans=mid;
                    break;
                } 
                else if(arr.get(mid)>target) low=mid+1;
                else hi=mid-1;
            }
        }
        return ans;
    }
};