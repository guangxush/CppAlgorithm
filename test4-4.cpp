

#include <stdio.h>

int sum(int *a, int n) {
    int ans = 0;
    //sizeof(a)无法求出a的大小 int *a 等价于 a[]
    for (int i = 0; i < n; i++)
        ans += a[i];
    return ans;
}

int main() {
    int a[] = {1, 2, 3, 4};
    printf("%d\n", sum(a + 1, 3));
    return 0;
}
