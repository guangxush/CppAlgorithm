#include <stdio.h>

//交换a和b,不引入外部变量
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
    return 0;
}

