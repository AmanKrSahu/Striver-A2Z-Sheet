#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        // Optimized Solution: O(n)
        int minJumps(int arr[], int n){
            // If array has only one element, no jump is needed
            if(n == 1) return 0;
            
            // If the first element is 0, we can't move forward
            if(arr[0] == 0) return -1;
            
            int maxReach=arr[0], steps=arr[0], jumps=1;
            for (int i = 1; i < n; i++) {
                // If we've reached the last element
                if (i == n - 1) return jumps;

                // Update maxReach
                maxReach = max(maxReach, i + arr[i]);

                // We use a step to get to the current index
                steps--;

                // If no more steps are left
                if (steps == 0) {
                    jumps++;  // We must have used a jump

                    // Check if the current index is beyond the maxReach
                    if (i >= maxReach) return -1;

                    // Re-initialize steps to the number of steps to reach maxReach
                    steps = maxReach - i;
                }
            }
            return -1;
        }
};