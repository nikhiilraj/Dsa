// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i=0,low=0;
        int high = n-1;

        for(int p = 0;p<n;p++){
            if(nums[i] == 0){
                swap(nums[i],nums[low]);
                i++;low++;
            }

            else if(nums[i] == 1){
                i++;
            }

            else if(nums[i] == 2){
                swap(nums[i],nums[high]);
                high--;
            }
        }
    }
};