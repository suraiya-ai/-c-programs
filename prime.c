#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if number is less than or equal to 1
    if(n <= 1) {
        printf("Not Prime");
        return 0;
    }

    // Loop to check divisibility
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    // Final result
    if(flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}
