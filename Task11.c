//WAP to accept a number from user and find out sum of even digits from that given number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    int sum=0,m;
    while(n!=0)
    {
         m=n%10;
         if(m%2==0)
         {
             sum=sum+m;
         }
         n=n/10 ;
    }
    printf("Sum of even digits:%d",sum);
}

