#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneAlgo(const vector<int>& nums){
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += nums[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){    // reset if negative
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {2, -3, 6, -1, 9};
    int x = kadaneAlgo(nums);
    cout << x;  // Output: 14
    return 0;
}
