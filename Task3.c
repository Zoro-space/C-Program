//3. WAP to accept Cost Price from user and ask whether the user is a student or not. If the user is
//student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If user
//is not student and cost price is greater 500 then give discount of 8% ELSE discount will be 2%.
//(Take all inputs from USER)
#include<stdio.h>
int main()
{
    int b,cp;
    printf("Are you student?   ") ;
    scanf("%d",&b);
 printf("Enter cost price :");
         scanf("%d",&cp);
 if(b==0)
 {
    if(cp>500)


        printf("discount is 10%");
      else

         printf("discount is 5%");

 }
 else
 {

   if(cp>500)


        printf("discount is 8%");
      else

         printf("discount is 2%");

 }

 }


