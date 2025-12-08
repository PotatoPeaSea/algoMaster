class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;
            for(int i = 0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto num : map){
            if(num.second>1){
                cout << num.second << endl;
                count+=(num.second*(num.second-1))/2;
            }
        }
        return count;
    }
};