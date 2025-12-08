class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> answer(nums.size());
        left[0] = 1;
        right[nums.size()-1] = 1;
        for(int i = 1; i<nums.size(); i++){
            left[i] = (left[i-1]*nums[i-1]);
            right[nums.size()-i-1] = (right[nums.size()-i]*nums[nums.size()-i]);

        }
        for(int i = 0; i<nums.size(); i++){
            answer[i] = right[i]*left[i];
        }
        return answer;
    }
};