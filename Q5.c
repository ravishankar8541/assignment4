//Write a program to print the first 10 odd natural numbers in reverse order.
#include"stdio.h"
int main()
{
    for(int i=20;i>=1;i--){
        if(i%2)
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}