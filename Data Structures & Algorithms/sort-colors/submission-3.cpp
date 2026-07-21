class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {

        int pivotEle = nums[low];

        int count = 0;

        // count smaller elements
        for(int i = low + 1; i <= high; i++) {

            if(nums[i] < pivotEle) {
                count++;
            }
        }

        int pivotIndx = low + count;

        // place pivot at correct position
        swap(nums[low], nums[pivotIndx]);

        int i = low;
        int j = high;

        while(i < pivotIndx && j > pivotIndx) {

            while(nums[i] < pivotEle) {
                i++;
            }

            while(nums[j] >= pivotEle) {
                j--;
            }

            if(i < pivotIndx && j > pivotIndx) {

                swap(nums[i], nums[j]);

                i++;
                j--;
            }
        }

        return pivotIndx;
    }

    void quickSort(vector<int>& nums, int low, int high) {

        if(low >= high) return;

        int pivotIdx = partition(nums, low, high);

        quickSort(nums, low, pivotIdx - 1);

        quickSort(nums, pivotIdx + 1, high);
    }

    void sortColors(vector<int>& nums) {

        quickSort(nums, 0, nums.size() - 1);
    }
};