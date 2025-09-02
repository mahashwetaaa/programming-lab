#include <stdio.h>

int main()
 {
    int coin;
    printf("Enter coin toss result (1 for Head, 0 for Tail): ");
    scanf("%d", &coin);

    // Using switch instead of if
    switch(coin) {
        case 1:
            printf("It is Head\n");
            break;
        case 0:
            printf("It is Tail\n");
            break;
        default:
            printf("Invalid input! Enter 1 or 0.\n");
    }

    return 0;
}
