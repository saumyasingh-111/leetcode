// container with most water

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    int maxArea(vector<int>& height){
         int n = height.size();
        int left = 0, right = n - 1, ans = 0;
        while (left < right) {
            int h = min(height[left], height[right]);
            int width = right - left;
            ans = max(ans, h * width);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return ans;
    }
    return 0;   
}
