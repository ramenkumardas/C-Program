#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the value of n:=");
    int n,flag=0,count=0;
    scanf("%d",&n);
    for(int c=2;c<=n;c++)
    {
        //printf("c=%d",c);
        for(int i=2;i<=n;i++){
            if(c%i==0)
            flag=flag+1;
            }
         if(flag==1)
                {
              printf("\nPrime number is=%d ",c);
              count=count+1;
              //flag=0;
            }
            flag=0;
    }
    printf("\nTotal prime =%d",count);
    return 0;
}
