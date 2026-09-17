class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int wr = 0;

        for (int rd = 1; rd < nums.size(); rd++){
            if (nums[rd] != nums[rd - 1]) {
                wr += 1;
                nums[wr] = nums[rd];
            }
        }

        return wr + 1;
    }
};
