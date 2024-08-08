#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(d)
        // d is total nos. of digits in N
        int evenlyDivides(int N){
            int ans=0, temp=N;
            while(temp > 0){
                int digit = temp%10;
                if(digit!=0 && N%digit==0) ans++;
                temp = temp/10;
            }
            return ans;
        }
};
