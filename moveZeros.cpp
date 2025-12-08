#include <iostream>
#include <vector>

using namespace std;
void moveZeroes(vector<int>& nums);
int main() {

}

void moveZeroes(vector<int>& nums){
    int l = 0;
    int t = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]!=0){
            t = nums[l];
            nums[l]  = nums[i];
            nums[i] = t;
            l++;
        }
    }

}
