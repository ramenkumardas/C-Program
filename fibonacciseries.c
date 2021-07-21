/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a=0,b=1,c,n;
  printf("Enter the value of n:=");
   scanf("%d",&n);
  
    if(n==1)
     {printf("%d",a);}
     else if(n==2)
     { printf("%d%d",a,b);
    
     }
     else
     {printf("%d%d",a,b);
        for(int i=3;i<=n;i++)
        {c=a+b;
        printf("%d",c);
         a=b;
         b=c;}
         
     }
    
    return 0;
}
