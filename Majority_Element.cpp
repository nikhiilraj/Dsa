// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// solve the problem in linear time and in O(1) space

// Solution 1:

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int ans;
//         unordered_map<int,int> freq;

//         for(int x:nums){
//             freq[x]++;
//         }

//         for(auto& p:freq){
//             if(p.second>n/2){
//                 return p.first;
//             }
//         }

//         return -1;
//     }
// };

//Solution 2:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count = 0;
        int n = nums.size();

        for(int i = 0;i<n;i++){
            if(count == 0){
                candidate = i;
            }

            if(nums[candidate] == nums[i]){
                count++;
            }
            else{
                count --;
            }
        }
        return nums[candidate];
    }
};


// **Here in one solution can take use of Boyer moore voting algorithm:**-

// Where we select the current integer as candidate if count is zero.
// then we increase the count if number in the loop is the same number and decrease the count if it's not.

// this way only the majority element survives.

// **The Other solution can be**: using hashmap table.
// first loop count the frequencies, the second inline loop returns from that hasmap whose frequency is more thant n/2.

