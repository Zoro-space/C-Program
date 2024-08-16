//WAP to print
#include<stdio.h>
int main()
{
          for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i%2!=0)
            {
               if(j<=3)
                    printf("%d",i);
               else
                   printf("%d",i+1);
            }
            if(i%2==0)
            {
               if(j>1)
                    printf("%d",i);
               else
                   printf("%d",i+1);
            }
        }
        printf("\n");
    }
}
