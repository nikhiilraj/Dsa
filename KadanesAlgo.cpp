#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void kadaneAlgo(const vector<int>& nums){
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;
    int start = 0;
    int ans_start,ans_end;

    for(int i = 0; i < n; i++){
        if(sum == 0) start = i;

        sum += nums[i];

        if(sum > maxi){
            maxi = sum;
            ans_start = start;
            ans_end = i;
        }
        if(sum < 0){    // reset if negative
            sum = 0;
        }
    }

    for(int i = ans_start;i<=ans_end;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Their sum is: " << maxi ;
}

int main(){
    vector<int> nums = {2, 3, 5, -2, 7,-4};

    kadaneAlgo(nums);  
    return 0;
}


