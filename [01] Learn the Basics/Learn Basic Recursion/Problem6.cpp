#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(k)
        // k is the maximum number such that the factorial is less than or equal to n
        vector<long long> factorialNumbers(long long n){
            vector<long long> ans;
            long long fact=1, num=1;
            
            while(fact <= n){
                ans.push_back(fact);
                num++;
                fact *= num;
            }
            return ans;
        }
};