/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1 */

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            std::swap(arr[i], arr[j]);
            j++;
        }
    }
     for (int i = j; i < n; i++) {
        int val = abs(arr[i]);
        if (val - 1 < n - j && arr[val - 1 + j] > 0) {
            arr[val - 1 + j] = -arr[val - 1 + j];
        }
    }
    for (int i = j; i < n; i++) {
        if (arr[i] > 0) {
            return i - j + 1;
        }
    }

return n - j + 1;
    } 
};