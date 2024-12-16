class Solution {
public:
    int GetMin(vector<int>& v) {
        int min = INT_MAX;
        int index;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < min) {
                min = v[i];
                index = i;
            }
        }
        return index;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        while (k--) {
            int i = GetMin(nums);
            nums[i] = nums[i] * multiplier;
        }
        return nums;
    }
};