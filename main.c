#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, add, sub, mul, mod;
    float div;

    printf("Enter\n 1 for addition\n 2 for subtraction\n 3 for division\n 4 for multiplication\n 5 for modulus\n");
    int choice;
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &A);
    printf("Enter second number: ");
    scanf("%d", &B);

    switch (choice) {
        case 1:
            printf("You chose addition\n");
            add = A + B;
            printf("Answer = %d", add);
            break;
        case 2:
            printf("You chose subtraction\n");
            sub = A - B;
            printf("Answer = %d", sub);
            break;
        case 3:
            printf("You chose division\n");
            div = (float) A / B;
            printf("Answer = %.4f", div);
            break;
        case 4:
            printf("You chose multiplication\n");
            mul = A * B;
            printf("Answer = %d", mul);
            break;
        case 5:
            printf("You chose modulus\n");
            mod = A % B;
            printf("Answer = %d", mod);
            break;
        default:
            printf("WRONG CHOICE!");
    }

    return 0;
}

