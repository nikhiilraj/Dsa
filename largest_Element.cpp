#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,32,25,367,21,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int larg[2] = {0,0};


    for(int i =0;i<n;i++){
        if(arr[i] > larg[0]){
            larg[1] = larg[0];
            larg[0] = arr[i];
        }
    }

    cout << larg[1];
    return 0;
}