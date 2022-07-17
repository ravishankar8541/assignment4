//Write a program to print a table of 5.
#include"stdio.h"
int main()
{
    int i,n=5;
    for(i=1;i<=10;i++){
        printf("%d X %d = %d",n,i,n*i);
        printf("\n");
    }
    printf("\n");
    return 0;
}