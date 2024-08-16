//8. WAP to print
#include<stdio.h>
int main()
{
    int k=0;
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=5;j++)
        {
           if(j<=i)
           {
           if(i==3 || i==4)
           {
               if(j>=2 && j<i)
               {
                   printf("0");
               }
               else
           {
               printf("1");
           }

           }
           else
           {
               printf("1");
           }


           }



        }
        printf("\n");
    }
    return 0;
}
