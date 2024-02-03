#include<stdio.h>
void fun(int *x){
    printf("%p\n",x);
}
void main(){
    int a=10;
    int *ptr=a;//warning:passing ardument 1 of 'fun' makes pointer from integer without a cast
    //fun(a);//the datatype of function and datatype of actual data shuld be same here one is integer and other is pointer hence it will throw warning
}