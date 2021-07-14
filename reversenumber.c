/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Enter a number=");
    int n,p,q;
    scanf("%d",&n);
    while(n>0)
    { p=n%10;
      printf("%d",p);
      if(n==1)
      break;
      q=n/10;
      n=q;
        
        
    }

    return 0;
}
