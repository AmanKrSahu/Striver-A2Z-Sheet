#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(1)
        long long sumOfSeries(long long n){
            long long sum = (n * (n + 1)) / 2;
            return sum * sum;
        }
};