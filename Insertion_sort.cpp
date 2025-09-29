#include <iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {3,1,5,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    InsertionSort(arr,n);

    for(int i =0;i<n;i++){
        cout << arr[i] << " " ;
    }

    return 0;
}