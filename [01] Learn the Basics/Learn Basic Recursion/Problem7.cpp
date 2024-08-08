#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        /*
        --> Approach 1: Without transforming original array
        --> Time Complexity: O(N) & Space Complexity: O(N)
        
        vector<int> printArray(vector<int> arr, int n){
            vector<int> ans;
            for(int i=n-1; i<=0; i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        */

        // Approach 2: Transforming original array
        // Time Complexity: O(N) & Space Complexity: O(1)
        vector<int> printArray(vector<int> arr, int n){
            int left=0, right=n-1;
            while(left < right){
                swap(arr[left++], arr[right--]);
            }
            return arr;
        }
};