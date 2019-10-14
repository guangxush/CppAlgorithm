#include <stdio.h>

#define maxn 5
int a[maxn];
// 数组逆序输出

int main() {
    int x, n = 0;
    while (scanf("%d", &x)) {
        a[n++] = x;
    }
    for (int i = n - 1; i >= 1; i--) {
        printf("%d ",a[i]);
    }
    printf("%d\n", a[0]);
    return 0;
}


