//2. WAP using switch case for arithmetic operation on two numbers, if user enters an operator as
//choice, the appropriate operation should perform.
//If user enters wrong choice appropriate message should get displayed.
 //i.e. + is for addition
 //- is for subtraction
 #include<stdio.h>
 int main()
 {

     char ch;
     int a=10,b=5;
    printf("Enter Operater:");
    scanf("%c",&ch);
    switch(ch)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;

    case '*':
        printf("%d",a*b);
        break;

    case '/':
        printf("%d",a/b);
        break;

    case '%':
        printf("%d",a%b);
        break;

    default :
        printf("Operater is not there.");
        break;
    }
    return 0;
 }
