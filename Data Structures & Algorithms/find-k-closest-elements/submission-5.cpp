class Solution {
public:
// will solve it using the binary search
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i=0;
        int j=arr.size()-k;
        while(i<j){
            int mid=i+(j-i)/2;
            if(x-arr[mid]>arr[mid+k]-x) i=mid+1;
            else j=mid;
        }
        return vector<int>(arr.begin()+i, arr.begin()+i+k);
    }
};