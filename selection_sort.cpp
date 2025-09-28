#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
    int minIndex = i;

    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }

        swap(arr[minIndex],arr[i]);        
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

    SelectionSort(arr,n);

    for(int i =0;i<n;i++){
        cout << arr[i] << " " ;
    }

    return 0;

}