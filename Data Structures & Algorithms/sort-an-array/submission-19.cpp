// quick sort tc:- O(nlong) and sc:- O(logn)
// algorithm : find the pivot element and place it its correct position and swap element left side which are smaller than pivot and at right side which are greated than pivot element 
// this algorithm used in built in function because it use sc:logn

class Solution {
public:
int partition(vector<int>&nums,int si,int ei){
    int pivotEle=nums[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(nums[i]<pivotEle) count++;
    }
    int pivotIndx=si+count;
    swap(nums[si],nums[pivotIndx]);
    int i=si;
    int j=ei;
    while(i<pivotIndx && j>pivotIndx){
         if(nums[i]<pivotEle) i++;
        else if(nums[j]>pivotEle) j--;
        else {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    return pivotIndx;

}
void quickSort(vector<int>&nums,int si,int ei){
    if(si>=ei) return;
    int pivotIndex=partition(nums,si,ei);
    quickSort(nums,si,pivotIndex-1);
    quickSort(nums,pivotIndex+1,ei);
    return;

}
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        quickSort(nums,i,n-1);
        return nums;
    }
};