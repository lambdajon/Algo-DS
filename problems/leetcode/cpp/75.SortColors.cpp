class Solution {
public:
    int partition (vector<int>& arr, int low, int high) { 
        int pivot = arr[high]; 
        int i = (low - 1); 

        for (int j = low; j <= high - 1; j++) 
        { 
            if (arr[j] < pivot) 
            { 
                i++; 
                swap(arr[i], arr[j]); 
            } 
        } 
        swap(arr[i + 1], arr[high]); 
        return (i + 1); 
    }
    void quickSort(vector<int>& arr, int low, int high) {
        while (low < high)
        {
            
            int pi = partition(arr, low, high);

            if (pi - low < high - pi)
            {
                quickSort(arr, low, pi - 1);
                low = pi + 1;
            }

            else
            {
                quickSort(arr, pi + 1, high);
                high = pi - 1;
            }
        }
    }
    void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
    }
};