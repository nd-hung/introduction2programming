/*
Viết chương trình cho phép người dùng lặp lại nhập một số nguyên từ bàn phím 
cho đến khi nhập số 0 thì dừng và in ra tổng các số vừa nhập.
*/

#include<stdio.h>

int main()
{
    int n, sum=0;

    do{
        printf("Nhap mot so nguyen (nhap 0 de dung):");
        scanf("%d", &n);
        sum += n;
    }while(n != 0);

    printf("Tong cac so vua nhap = %d\n", sum);
}