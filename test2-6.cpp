#include <stdio.h>

// 水仙花数

int main() {
    for (int i = 100; i <= 999; i++) {
        int n = i;
        int sum = 0;
        while (n != 0) {
            int t = (n % 10);
            sum += t * t * t;
            n = n / 10;
        }
        if (i == sum) {
            printf("%d\n", i);
        }
    }
    return 0;
}



