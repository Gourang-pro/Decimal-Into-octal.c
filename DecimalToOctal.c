#include<stdio.h>
int main()
{
    int arr[10],num,i,j;
    printf(" program to convert decimal number into octal\n");
    printf("please give a number to convert in octal : ");
    scanf("%d",&num);
    printf("octal numeber of %d is =  ",num);
    for ( i = 0; num > 0; i++)
    {
        arr[i]=num % 8;
        num = num / 8;
    }
    for (j =i - 1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
    return 0;
}