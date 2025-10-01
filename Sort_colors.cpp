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


//Solution:- 

// here the trick is that you need to sort the array in one pass. 

// hence we think of three areas in array for 0s,1s,2s.
// like [0s][1s][2s]

// then we, need to use three pointers i.e i,low high
// i and low pointing at the beginning while high pointing at the end.
// low work as the boundary for 0s,high work as th boundary for 2s.

// then we swap accordingly and increment decrement the pointers.

// one special case is that while swapping for 2 we do not increment the i cause the number we swapped from nums[high] from right side is yet unknown hence in the loop it must be checked once again.

// 1s will be placed automatically if we swap just for 0s and 1s.