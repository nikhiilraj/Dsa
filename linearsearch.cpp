#include <iostream>
using namespace std;

int linearsearch(int arr[],int n,int target){
    for(int i =0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }

    return 0;
}


int main(){
    int arr[] = {2,45,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;

    int ans = linearsearch(arr,n,target);

    cout << ans;

    return 0;

}