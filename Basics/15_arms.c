#include <stdio.h>
#include<math.h>
int isArmstrong(int n) {
    int sum = 0;
    int originalNumber = n;
    int numDigits = (int)log10(n) + 1;
    
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }
    
    return (sum == originalNumber);
}

int main() {
    printf("Armstrong numbers between 1 and 500:\n");
    for (int i = 1; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
