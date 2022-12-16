#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int a = 0;
   while( scanf("%d", &a)==1);
    {
        if (a % 5 == 0)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}