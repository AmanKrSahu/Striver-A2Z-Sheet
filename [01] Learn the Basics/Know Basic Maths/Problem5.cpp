#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(d)
        // d is total nos. of digits in N
        bool isArmstrong(int num){
            int sum=0, temp=num;
            while(temp > 0){
                int digit = temp%10;
                sum += digit*digit*digit;
                temp /= 10;
            }
            return ((sum == num) ? true : false);
        }
};