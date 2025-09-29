//Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
//The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

#include <iostream>
using namespace std;

void unions(vector<int> nums1,vector<int> nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();

    vector<int> ans(n1+n2);

    int i = 0,j = 0,k = 0;

    while(i < n1 && j < n2){
        if(nums1[i] <= nums2[j]){
            ans[k] = nums1[i++];
        }
        else if(nums1[i] > nums2[j]){
            ans[k] = nums2[j++];
        }
        k++;
    }

    if(i>=n1 && j< n2){
        while(j<n2){
            ans[k] = nums2[j];
            k++;j++;
        }
    }

    else if(j>= n2 && i< n1){
        while(i<n1){
            ans[k++] = nums1[i++];
        }
    }
    for(int x:ans) cout << x << " ";
}

int main(){
    vector<int> nums1 = {3,6,12,15};
    vector<int> nums2 = {2,11,20};

    unions(nums1,nums2);

    return 0;
}