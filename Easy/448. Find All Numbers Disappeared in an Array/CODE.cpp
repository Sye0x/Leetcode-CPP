class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;

        // Mark the indices corresponding to the numbers in the array
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1; // Use absolute value to handle already-negated numbers
            nums[index] = -abs(nums[index]); // Negate the value at the index
        }

        // Find the indices that were not marked
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1); // The number corresponding to this index is missing
            }
        }

        return result;
    }
};
