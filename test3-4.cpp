#include <stdio.h>
#include <string.h>


// 竖式问题
int main() {
    int count = 0;
    char s[20], buf[99];
    //输入字符
    scanf("%s", s);
    for (int abc = 111; abc <= 999; abc++) {
        for (int de = 11; de <= 99; de++) {
            int x = abc * (de % 10), y = abc * (de / 10), z = abc * de;
            // printf输出到屏幕 fprintf输出到文件 sprintf输出到字符串
            sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            // strlen求字符串的实际长度
            for (int i = 0; i < strlen(buf); i++) {
                // 在一个字符中查找单个字符
                if (strchr(s, buf[i]) == NULL) {
                    ok = 0;
                }
            }
            if (ok) {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
            }
        }
    }
    printf("The number of solutions = %d\n", count);
    return 0;
}








