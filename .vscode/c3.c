#include<stdio.h>

int main()
{
    int h = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d", &h);
    a = h / 100;
    c = (h % 100) % 10;
    b = (h % 100) / 10;
    printf("%d %d %d", a, b, c);
    return 0;
}