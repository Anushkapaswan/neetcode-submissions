class Solution {
public:
// partition
int partition(vector<int>&nums,int low,int high){
    int pivotEle=nums[low];
    int i=low;
    int j=high;
    int count=0;
    for(int i=low+1;i<=high;i++){
        if(nums[i]<pivotEle) count++;
    }
    int pivotIndx=count+low;
    swap(nums[low],nums[pivotIndx]);
    while(i<pivotIndx && j>pivotIndx){
        if(nums[i]<pivotEle) i++;
        else if(nums[j]>pivotEle) j--;
        else{ //if nums[i]>pivot
           swap(nums[i],nums[j]);
           i++;
           j--;
        }
    }
    return pivotIndx;
}
// quick sort
void quickSort(vector<int>&nums,int low,int high){
    if(low>=high) return ;
    int pivotIndx=partition(nums,low,high);
    quickSort(nums,low,pivotIndx-1);
    quickSort(nums,pivotIndx+1,high);
    return;
}
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};