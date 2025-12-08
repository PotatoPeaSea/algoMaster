class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp = 0;
        k = k%nums.size();
        vector<int> replace(k);
        int n = nums.size();

        for(int i = k; i>0; i--){
           replace[i-1] = nums[n+i-k-1];
           nums.pop_back();           
        }
        
        nums.insert(nums.begin(),replace.begin(),replace.end());
        
    }
};