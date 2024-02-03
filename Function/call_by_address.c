#include<stdio.h>
void callbyaddress(int*);
void main(){
    int x=10;
    printf("%d\n",x);//10
    callbyaddress(&x);//0x100
    printf("%d\n",x);//50
}
void callbyaddress(int *ptr){
    printf("%p\n",ptr);//0x100
    printf("%d\n",*ptr);//10

    *ptr=50;
    printf("%d\n",*ptr);//50
}