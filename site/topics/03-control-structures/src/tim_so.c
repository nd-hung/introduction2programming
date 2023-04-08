/*
Tìm tất cả các số nguyên trong
phạm vi từ 10 đến 99 sao cho tích của 2 chữ số
bằng 2 lần tổng của 2 chữ số đó.
*/

#include <stdio.h>

int main()
{
    int dem = 0;
    printf("Cac so thoa man dieu kien la:\n");

    //Xét các số nguyên từ 10 .. 99
    for(int i=10; i <= 99; i++)
    {
        // tách chữ số hàng đơn vị, hàng chuc từ i
        unsigned char donvi = i % 10;
        unsigned char chuc = i / 10;
        if(donvi * chuc == 2 * (donvi + chuc))
        {
            printf("%d \n", i);
            dem ++;
        }
    }
    printf("Co %d so thoa man dieu kien.\n", dem);
}
