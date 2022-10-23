#include<stdio.h>

int fib(int n)
{
    if(n==0)
     return 0;
    else if (n==1)
     return 1;
    else
      return (fib(n-1) + fib(n-2));
}

int main()
{
    int i,n,term;
    printf("Enter the nth term upto which you want to print the series: ");
    scanf("%d", &n);

    printf("The fibonacci series is: ");
    for(i=0; i<=n; i++)

    {
      printf("%d ",  fib(i));
    }




}
