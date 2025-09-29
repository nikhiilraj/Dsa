#include <iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> l(n1), r(n2);

    for(int i = 0;i<n1;i++){
        l[i] = arr[left + i]; 
    }
    for(int j = 0;j<n2;j++){
        r[j] = arr[mid + j +1];
    }

    int i = 0, j=0;
    int k = left;

    while(i<n1 && j<n2){
        if(l[i] <= r[j]){
            arr[k] = l[i++];
        }

        else{
            arr[k] = r[j++];
        }
        k++;
    }

    while(i<n1){
        arr[k] = l[i++];
        k++;
    }

    while(j<n2){
        arr[k] = r[j++];
        k++;
    }


}

void MergeSort(int arr[],int left,int right){
    if(left>=right){
        return;
    }

    int mid = left + (right-left) /2;
    MergeSort(arr,left,mid);
    MergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);

}


int main(){
    int arr[] = {9,2,45,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr,0,n-1);

    for(int i =0;i<n;i++){
        cout << arr[i] << " " ;
    }

    return 0;

}