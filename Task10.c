//WAP to check whether a number is prime or not.

#include<stdio.h>
int main()
{

    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int isPrime=1;
    if(n<2)
    {
        printf("Not Prime");
        return 0;
    }
    for(int i=2;i<sqrt(n);i++)
    {

        if(n%i==0)
        {
             isPrime=0;
             break;
        }


    }
    if(isPrime)
       printf("Given number is Prime");
       else
     printf("Not Prime");
        return 0;


}
