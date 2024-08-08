#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(N)
        void frequencyCount(vector<int>& arr, int N, int P){ 
            vector<int> freq(N, 0);
            for(int i=0; i<arr.size(); i++){
                if(arr[i] > 0 && arr[i] <= N){
                    freq[arr[i]-1]++;
                }
            }
    
            for(int i=0; i<N; i++){
                arr[i] = freq[i];
            }
        }
};