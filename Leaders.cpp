// Given an integer array nums, return a list of all the leaders in the array.

// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans;
      int n = nums.size();

      for(int i =0;i<n;i++){
        bool isLeader = true;
        for(int j =i+1;j<n;j++){
            if(nums[j] > nums[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader){
                ans.push_back(nums[i]);
            }
      }
      return ans;
    }
};

//second approach could be

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans;
      int n = nums.size();

      int maxright = n-1;
      ans.push_back(maxright);

      for(int i = n-2;i>=0;i--){
        if(ans[i] > maxright){
            ans.push_back(ans[i]);
        }
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};