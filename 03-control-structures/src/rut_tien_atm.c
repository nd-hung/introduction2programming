/* Một máy ATM có các loại tiền mệnh giá 100 USD, 20 USD và 1 USD.
Giả sử máy có số tiền không hạn chế.
Một người cần rút số tiền m (USD).
Hãy viết chương trình điều khiển máy ATM đưa ra số tiền cần rút
sao cho số tờ tiền ít nhất.

Ví dụ:
Input: 320 -> Output: 3 tờ 100 USD và 1 tờ 20 USD
Input: 25 -> Output: 1 tờ 20 USD và 5 tờ 1 USD
*/

#include<stdio.h>

int main()
{
    int m, m1;
    int soto100, soto20, soto1;

    do
    {
        printf("Nhap so tien can rut:");
        scanf("%d", &m);
        if(m <= 0)
            printf("So tien rut phai > 0.\n");
    } while(m <= 0);

    m1 = m; // m1 lưu lại số tiền ban đầu

    // Để có số tờ tiền ít nhất -> ưu tiên mệnh giá từ cao xuống thấp
    soto100 = m / 100;
    m = m % 100;
    soto20 = m / 20;
    m = m % 20;
    soto1 = m;
    
    // In ra kết quả
    printf("So tien rut: %d (USD)\n", m1);
    printf("So to 100: %d\n", soto100);
    printf("So to 20: %d\n", soto20);
    printf("So to 1: %d\n", soto1);
}
