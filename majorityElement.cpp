#include <unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int, int> map;

       int max = 0;
       int maxValue = 0;

       for(int i = 0; i<nums.size(); i++){
        if (map.contains(nums[i])){
            map[nums[i]]++;
        }
        else{
            map.insert({nums[i],1});
        }
        if(map[nums[i]]>m){
            max = map[nums[i]];
            maxValue= nums[i];
        }

       }
       return maxValue;
    }
};