#include <stdio.h>

int deleteAtPos(int arr[],int size,int pos){
    
    for(int i = pos;i<size;i++){
        arr[i] = arr[i + 1];
    };

    return (size--);
 }

 int findpos(int arr[],int size,int key){
    for(int i= 0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
 }

void display(int arr[],int size){
    for(int i = 0 ;i<size;i++){
        printf("%d  ",arr[i]);
    }
}

int main(){
    int arr[] = {1,5,3,4,67,86,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    int count = 7;

    display(arr,size);

    while(size>0){
    printf("\nEnter the number to delete: \n");
    scanf("%d",&key);

    int pos = findpos(arr,size,key);

    deleteAtPos(arr,size,pos);

    display(arr,--size);
    };

    return 0;
}



// #include <stdio.h>

// int arr[50];

// void display(int size){
//     for(int i = 0;i<size;i++){
//         printf("%d",arr[i]);
//     }
// }
// int main(){
//     int size,pos,el;

//     printf("Enter the size of array : \n");
//     scanf("%d",&size);

//     printf("Enter the elements in array: \n");

//     for(int i = 0;i<size ;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the position: \n");
//     scanf("%d",&pos);

//     printf("Enter the element:\n");
//     scanf("%d",&el);

//     if(pos<= 0 || size>50){
//         printf("Invalid Entry");
//     }

//     else{
//         for(int i = size-1;i>=pos - 1;i--){
//             arr[i+1]=arr[i];
//         }
//     }
//     arr[pos-1] = el;
//     size++;
//     display(size);

//     return 0;
// 
// }
