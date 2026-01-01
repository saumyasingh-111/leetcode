// 15.3sum

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

class Solution {
public:
    class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {

                    if(nums[i] + nums[j] + nums[k] == 0) {

                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());

                        bool duplicate = false;
                        for(auto &t : ans) {
                            if(t == triplet) {
                                duplicate = true;
                                break;
                            }
                        }

                        if(!duplicate) {
                            ans.push_back(triplet);
                        }
                    }
                }
            }
        }
        return ans;
    }
};

};
}