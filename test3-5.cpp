
#include<stdio.h>

int main() {
    int c, q = 1;
    // 使用fgetc(fin)可以从打开的文件fin中读取一个字符。
    // 一般情况下应当在检 查它不是EOF后再将其转换成char值。从标准输入读取一个字符可以用getchar，它等价于 fgetc(stdin)
    while ((c = getchar()) != EOF) {
        if (c == '"') {
            printf("%s", q ? "``" : "''");
            q = !q;
        } else {
            printf("%c", c);
        }
    }
    return 0;
}
