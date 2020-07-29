#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 100000
int range=(SIZE-1)/2;
int sum,count;
int main()
{
    sum=0;
    count=1;
    int* arr;
    arr=(int*)malloc(sizeof(int)*range);
    for(int i=1;i<range;i++)
    {
        for(int j=i;j<=(range-i)/(2*i+1);j++)
        {
            sum=i+j+2*i*j;
            arr[sum]=1;
        }
    }
    for(int index=1;index<range;index++)
    {
        if(arr[index]!=1)
        {
            count++;
        }
    }
    printf("%d",count);
    free(arr);
    arr=0;
    return 0;
}
