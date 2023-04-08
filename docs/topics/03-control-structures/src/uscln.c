/*
Tìm ước số chung lớn nhất của 2 số nguyên dương a,b.

Input: a, b > 0
Output: ước số chung lớn nhất của a và b.
*/

#include<stdio.h>

int main()
{
    unsigned int a,b;
    unsigned int a0,b0; // Để lưu lại giá trị ban đầu của a,b

    do{
        printf("a = ");
        scanf("%d", &a);
    }while(a <= 0);
    a0 = a;

    do{
        printf("b = ");
        scanf("%d", &b);
    }while(b <= 0);
    b0 = b;

    while(a != b)
        if(a > b) a -= b;
        else b -= a;
    
    printf("USCLN(%d, %d) = %d\n", a0,b0,a);
}