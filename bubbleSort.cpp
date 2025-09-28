#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    bool swapped = false;
    for(int i= 0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }

}

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int arr[] = {2,45,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,n);

    for(int i =0;i<n;i++){
        cout << arr[i] << " " ;
    }

    return 0;

}