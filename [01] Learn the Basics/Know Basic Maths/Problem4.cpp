#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        long long gcd(long long A, long long B){
            // Euclidean Algorithm
            while (B != 0) {
                long long temp = B;
                B = A % B;
                A = temp;
            }
            return A;
        }
        
        long long lcm(long long A, long long B, long long gcdValue){
            return (A / gcdValue) * B;
        }
        
        // Optimized Solution: O(log(min(a, b))
        vector<long long> lcmAndGcd(long long A , long long B) {
            long long _gcd = gcd(A, B);
            long long _lcm = lcm(A, B, _gcd);
            return {_lcm, _gcd};
        }
};