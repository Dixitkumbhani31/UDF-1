#include<stdio.h>
 
cube(int n1)
{
    return n1*n1*n1;
}

 
main() 
{
    int n,a;
     
    printf("Enter Number=");
    scanf("%d",&n);
 
    a=cube(n);
    printf("Cube=%d",a);
}
