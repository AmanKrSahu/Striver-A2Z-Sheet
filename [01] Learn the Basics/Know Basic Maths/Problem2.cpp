#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        // Optimized Solution: O(d)
        // d is total nos. of digits in N
        int reverse(int x) {
            int ans = 0;
            int sign = (x < 0) ? -1 : 1;
            x = abs(x);
            
            while(x > 0){
                int digit = x%10;
                
                // Handle Overflow condition
                if(ans > (INT_MAX-digit)/10){
                    return 0;
                }

                ans = ans * 10 + digit;
                x = x / 10;
            }
            return sign*ans;
        }
};