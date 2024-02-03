//call by value swap code
#include<stdio.h>
void swap(int*,int*);
void main(){
    int x=10;
    int y=20;

    printf("x=%d\n",x);
    printf("y=%d\n",y);

    swap(&x,&y);//this x&y and x&y in line 15 are different 

    printf("x=%d\n",x);//20//swaping done in swap function that values of x&y are not reflect  in call by value 
                       //but here we are using call by address so the swapped values are reflect here.
    printf("y=%d\n",y);//10
}
void swap(int *x,int *y){
    printf("x=%d\n",*x);//10
    printf("y=%d\n",*y);//20

    int temp;
    temp = *x;
    *x=*y;
    *y= temp;

    printf("x=%d\n",*x);//20
    printf("y=%d\n",*y);//10
}