class Solution {
private:

    void mergingTwoArray(vector<int>& nums, int i, int j, int k, int l) {

        vector<int> ans;

        int init1 = i;
        int init2 = k;

        while(init1 <= j && init2 <= l) {

            if(nums[init1] < nums[init2]) {
                ans.push_back(nums[init1]);
                init1++;
            }
            else {
                ans.push_back(nums[init2]);
                init2++;
            }
        }

        while(init1 <= j) {
            ans.push_back(nums[init1]);
            init1++;
        }

        while(init2 <= l) {
            ans.push_back(nums[init2]);
            init2++;
        }

        int indx = 0;

        for(int x = i; x <= l; x++) {
            nums[x] = ans[indx];
            indx++;
        }
    }

    void merge(vector<int>& nums, int i, int j) {

        if(i >= j) return;

        int mid = i+(j-i) / 2;

        merge(nums, i, mid);

        merge(nums, mid + 1, j);

        mergingTwoArray(nums, i, mid, mid + 1, j);
    }

public:

    vector<int> sortArray(vector<int>& nums) {
        merge(nums, 0, nums.size() - 1);
        return nums;
    }
};