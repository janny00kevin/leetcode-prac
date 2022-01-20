#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect;
        for(int i=0; i<nums.size(); i++){
            // for(int j=0; j<nums.size(); j++){
            // decrease half of cal cycles, and will not exist i = j, which is not allowed.
            for(int j=i+1; j<nums.size(); j++){  // improvement
                if(nums[i] + nums[j] == target) {
                    vect.push_back(i);
                    vect.push_back(j);
                    return vect;
                }
            }
        }
        // Non-void function does not return a value in all control paths
        // https://ithelp.ithome.com.tw/questions/10201150
        return vect;  // error
    }
};