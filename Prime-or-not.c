#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the value of n= \n");
    int n,i;
    scanf("%d",&n);
    int flag=0;
    for(i=2;i<n;i++)
    { if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
        printf("Not prime nor Composite");
    else if(flag==0)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
