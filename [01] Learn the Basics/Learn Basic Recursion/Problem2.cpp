#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(N)
        int cnt = 1;
        void printGfg(int N){
            if(cnt > N) return;
            cout<<"GFG ";
            cnt++;
            printGfg(N);
        }
};