#include<stdio.h>
void main(){
    int size;
    printf("Enter no. of elements: \n");
    scanf("%d",&size);


    int arr[size];
    printf("Enter Elemens: \n");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    int search;
    printf("Enter search elements: \n");
    scanf("%d",&search);

    int flag=0;
    for(int i=0; i<size; i++){
        if(arr[i]%4==0 && arr[i]%5==0){
        flag =1;
        }
    }
    if(flag==1){
        printf("Element found");
    }else{
        printf("Element not found");
    }

}