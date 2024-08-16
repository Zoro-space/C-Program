
//6.Accept three numbers from user and find out largest number among three and also find
//out whether that three numbers are equal or not.(else if ladder)
//4. WAP to check whether Number is positive or negative or ZERO.
#include<stdio.h>
int main()
{
      int a;
    printf("Enter Number first:");
         scanf("%d",&a);
                  int b;
    printf("Enter Number second:");
         scanf("%d",&b);
            int c;
    printf("Enter Number third:");
         scanf("%d",&c);
         int max;
    max=a;
    if(b>max)
    {
        max=b ;

    }

     if(c>max)
    {
         max=c;

    }
     if(a==b && b==c)
    {
        printf("Numbers are equal\n");
    }
    printf("Maximum number is:%d",max) ;

}
