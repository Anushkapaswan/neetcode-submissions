class Solution {
public:
// merge two array and find the median
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        vector<int>ans;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            ans.push_back(nums2[j]);
            j++;
        }
        int len=ans.size();
        if(len%2!=0){
            int mid=len/2;
            double res=(double)ans[mid];
            return res;
        }
        else{
            int mid1=len/2;
            int mid2=mid1-1;
           double res=(double)(ans[mid1]+ans[mid2])/2;
            return res;
        }
    }
};
