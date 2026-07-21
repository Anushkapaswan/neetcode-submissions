class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // brute force solution 
        int m=nums1.size();
        int n=nums2.size();
        vector<int>merged(m+n);
        copy(nums1.begin(),nums1.end(),merged.begin());
        copy(nums2.begin(),nums2.end(),merged.begin()+m);
        sort(merged.begin(),merged.end());
        int size=merged.size();
        if(size%2==0) return (merged[size/2-1]+merged[size/2])/2.0;
        else return merged[size/2];
    }
};
