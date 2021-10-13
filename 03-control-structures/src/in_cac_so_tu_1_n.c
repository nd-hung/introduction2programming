/*
    In ra các số nguyên liên tiếp từ 1 -> n, không dùng câu lệnh for, while, do ... while
*/

#include <stdio.h>

int main()
{
    int n=100;
    /*
    int i=1;
    LOOP:
        printf("%d  ", i);
        i += 1;
        if(i <= n) goto LOOP;
    */
   for(int i=1; i <= n; i += 1)
    printf("%d  ",i);
}