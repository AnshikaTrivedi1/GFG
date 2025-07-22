

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();

        // If only one element, it's a peak
        if (n == 1) return 0;

        // Check if first or last element is a peak
        if (arr[0] > arr[1]) return 0;
        if (arr[n - 1] > arr[n - 2]) return n - 1;

        // Check middle elements
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                return i;  // Return the index of the first peak found
            }
        }

        return -1;  // Should never be reached for valid input
    }
};