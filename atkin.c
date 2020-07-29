#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define num 100000
int count,x,y;
int main()
{
    count=2;
    int *arr;
    arr=(int*)calloc(num,sizeof(int));
    int div;
    for(x=1;x<sqrt(num);x++)
    {
        for(y=1;y<sqrt(num);y++)
        {
           div=4*x*x+y*y;
            if(div<=num)
            {
                if(div%12==1||div%12==5)
                {
                    arr[div]^=1;
                }
            }
            div=3*x*x+y*y;
            if(div<=num)
            {
                if((div)%12==7)
                {
                    arr[div]^=1;
                }
            }
            div=3*x*x-y*y;
            if(div<=num&&x>y)
            {
                if(div%12==11)
                {
                    arr[div]^=1;
                }
            }

        }
    }
    for(x=5;x*x<num;x++)
    {
        if(arr[x])
        {
            for(y=x*x;y<num;y+=x*x)
            {
                    arr[y]=0;
            }
        }
    }
    for(x=5;x<num;x+=2)
    {
        if(arr[x])
        {
           count++;
        }
    }
    printf("%d",count);
    free(arr);
    arr=0;

}
