#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        /*
        --> Brute Force: O(2^N)
        
        int fib(int n) {
            if(n == 0) return 0;
            else if(n == 1) return 1;
            return fib(n-1) + fib(n-2);
        }
        */

        /*
        --> Optimized Solution: Memoization
        --> Time Complexity: O(N) & Space Complexity: O(N)

        int fib(int n) {
            vector<int> memo(n + 1, -1);
            return fibHelper(n, memo);
        }

        int fibHelper(int n, vector<int>& memo) {
            if (n == 0) return 0;
            if (n == 1) return 1;
            if (memo[n] != -1) return memo[n];

            memo[n] = fibHelper(n - 1) + fibHelper(n - 2);
            return memo[n];
        }
       */

        // Optimized Solution: Iterative Approach
        // Time Complexity: O(N) & Space Complexity: O(1)
        int fib(int n) {
            if (n == 0) return 0;
            if (n == 1) return 1;

            int prev2 = 0, prev1 = 1;
            int current;
            for (int i = 2; i <= n; ++i) {
                current = prev1 + prev2;
                prev2 = prev1;
                prev1 = current;
            }
            return current;
        }
};