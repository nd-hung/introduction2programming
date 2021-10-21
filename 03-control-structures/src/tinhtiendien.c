/*
Viết chương trình tính tiền điện phải trả dựa vào số kWh tiêu thụ và bảng giá.

Bảng giá:
Số kWh <= 100: 2000 đ/kWh
Từ kWh thứ 101 đến 150: 2500 đ/kWh
Từ kWh thứ 151 trở đi 3000 đ/kWh
Nếu số kWh tiêu thụ vượt quá 300 thì cộng thêm 10% tiền phải trả.

Input: Số kWh tiêu thụ
Output: Số tiền phải thanh toán (VND)
*/

#include<stdio.h>
const int GIA1=2000, GIA2=2500, GIA3=3000;

int main()
{
    int sokWh;
    float sotien=0;

    // input
    do
    {
        printf("So kWh tieu thu: ");
        scanf("%d", &sokWh);
        if(sokWh <= 0) printf("So kWh phai > 0");
    } while (sokWh <= 0);
    
    // process
    if(sokWh <= 100) sotien = sokWh * GIA1;
        else // > 100
            if(sokWh <= 150) sotien = 100 * GIA1 + (sokWh - 100) * GIA2;
            else // > 150
                if(sokWh <= 300) sotien = 100*GIA1 + 50*GIA2 + (sokWh - 150)*GIA3;
                else // > 300
                    sotien = (100*GIA1 + 50*GIA2 + (sokWh - 150)*GIA3)*1.1;
    //output
    printf("So kWh tieu thu: %d \tSo tien: %.3f (VND)\n", sokWh, sotien);
}