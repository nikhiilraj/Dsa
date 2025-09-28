#include <iostream>
using namespace std;

bool Bubblesort(int arr[],int n){
    bool issorted = true;
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                issorted = false;
            }
        }
        return issorted;
    }

}

int main(){
    int arr[] = {2,5,99,121};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool t = Bubblesort(arr,n);
    
    if(t){
        cout << "Array is sorted.";
    } else {
        cout << "Array is not sorted.";
    }


}