// 54. spiral matrix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();

        int srow = 0, scol = 0;
        int erow = n - 1, ecol = m - 1;

        while (srow <= erow && scol <= ecol) {

            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }

            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }

            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; j--) {
                    ans.push_back(matrix[erow][j]);
                }
            }

            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }

        return ans;
    }
}
}