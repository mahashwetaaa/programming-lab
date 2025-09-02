#include <stdio.h>

int main() 
{
    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll);

    // Using ternary operator instead of if
    (roll == 100) ? printf("Roll is 100\n") : printf("Roll is NOT 100\n");

    return 0;
}
