#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        // Optimized Solution: O(d)
        // d is total nos. of digits in N
        bool isPalindrome(int x) {
            if(x < 0) return false;

            string temp = to_string(x);
            int left=0, right=temp.length()-1;

            while(left < right){
                if(temp[left] != temp[right]) return false;
                left++, right--;
            }
            return true;
        }
};