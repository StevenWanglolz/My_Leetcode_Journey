class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high]; // Choose the pivot as the last element
        int i = low - 1; // Index of smaller element

        for (int j = low; j < high; j++) {
            // If the current element is smaller than or equal to the pivot
            if (arr[j] <= pivot) {
                i++;
                // Swap arr[i] and arr[j]
                swap(arr[i], arr[j]);
            }
        }

        // Swap arr[i+1] and arr[high] (put the pivot in its correct position)
        swap(arr[i + 1], arr[high]);

        return i + 1; // Return the index of the pivot
    }

    void quick_sort(vector<int>& arr, int low, int high) {
        if (low < high) {
            // Partition the array into two halves and get the pivot index
            int pivot_index = partition(arr, low, high);

            // Recursively sort the sub-arrays
            quick_sort(arr, low, pivot_index - 1);
            quick_sort(arr, pivot_index + 1, high);
        }
    }
    int minPairSum(vector<int>& nums) {
        quick_sort(nums, 0, nums.size()-1);
        int i = 0;
        int j = nums.size()-1;
        int m = 0;
        while(i < j){
            if(nums[i] + nums[j] > m){
                m = nums[i] + nums[j];
            }
            i++;  // Increment i
            j--;  // Decrement j
        }
        return m;
    }
};