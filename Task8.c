//1. WAP using following menus-
 //Choice-1: Accept number and find out square and cube.
// Choice-2: Check whether the given year is LEAP or not.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("The number must be greater than 0.\n");
        return 0;
    }

    int squareRoot = (int)sqrt(n); // Find integer square root
    if (squareRoot * squareRoot == n) {
        printf("Given number is a perfect square.\n");
    } else {
        int cubeRoot = (int)cbrt(n); // Find integer cube root
        if (cubeRoot * cubeRoot * cubeRoot == n) {
            printf("Given number is a perfect cube.\n");
        } else {
            printf("Given number is neither a perfect square nor a perfect cube.\n");
        }
    }

    return 0;
}

// Choice-2: Check whether the given year is LEAP or not.

 #include <stdio.h>

int main() {
    int n;
    printf("Enter Year: ");
    scanf("%d", &n);

    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        printf("Given Year is a leap year.\n");
    } else {
        printf("Given Year is not a leap year.\n");
    }

    return 0;
}
