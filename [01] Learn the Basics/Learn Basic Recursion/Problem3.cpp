#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(N)
        int num = 1;
        void printNos(int N){
            if(num > N) return;
            cout<<num++<<" ";
            printNos(N);
        }
};