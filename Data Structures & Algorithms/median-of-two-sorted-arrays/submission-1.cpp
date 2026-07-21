class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        // brute force solution 
        // int m=nums1.size();
        // int n=nums2.size();
        // vector<int>merged(m+n);
        // copy(nums1.begin(),nums1.end(),merged.begin());
        // copy(nums2.begin(),nums2.end(),merged.begin()+m);
        // sort(merged.begin(),merged.end());
        // int size=merged.size();
        // if(size%2==0) return (merged[size/2-1]+merged[size/2])/2.0;
        // else return merged[size/2];

        // using binary search
        int n1=a.size();
        int n2=b.size();
        if(n1>n2) return findMedianSortedArrays(b,a);
        int lo=0;
        int hi=n1;
        int left=(n1+n2+1)/2;
        int n=n1+n2;
        while(lo<=hi){
            int mid1=(lo+hi)/2;
            int mid2=left-mid1;
            int l1=INT_MIN;
            int l2=INT_MIN;
            int r1=INT_MAX;
            int r2=INT_MAX;
            if(mid1<n1) r1=a[mid1];
            if(mid2<n2) r2=b[mid2];
            if(mid1>0) l1=a[mid1-1];
            if(mid2>0) l2=b[mid2-1];
            if(l1<=r2 && l2<=r1){
                if(n%2==1) return max(l2,l1);
                else return (double)(max(l1,l2)+min(r1,r2))/2.0;
            }
            else if(l1>r2){
                hi=mid1-1;
            }
            else lo=mid1+1;
        }
         return 0;
    }
};
