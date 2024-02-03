#include<stdio.h>
void fun();//declaration
void fun(){             /*function body*/
    printf("Infun\n");
}
void main(){          
    printf("Start\n");
    fun();//function call
    printf("End\n");
}