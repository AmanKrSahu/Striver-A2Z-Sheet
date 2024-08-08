#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(N)
        int num = 0;
        void printNos(int N){
            if(num == N) return;
            cout<<N-num<<" ";
            printNos(N);
        }
};