// 125. valid palindrome

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            while (i < j && !isalnum((unsigned char)s[i])) i++;
            while (i < j && !isalnum((unsigned char)s[j])) j--;

            if (tolower((unsigned char)s[i]) != tolower((unsigned char)s[j])) {
                return false;
            }

            i++;
            j--;
        }
        return true;
    }
}
}