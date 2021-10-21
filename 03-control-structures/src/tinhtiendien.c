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
const int MUC1=100, MUC2=150, MUC3=300;

int main()
{
    int sokWh;
    float sotien=0;

    // Nhập chỉ số điện tiêu thụ
    do
    {
        printf("So kWh tieu thu: ");
        scanf("%d", &sokWh);
        if(sokWh <= 0) printf("So kWh phai > 0");
    } while (sokWh <= 0);
    
    // Tính tiền
    if(sokWh <= MUC1) sotien = sokWh * GIA1;
    else // > MUC1
        if(sokWh <= MUC2) sotien = MUC1 * GIA1 + (sokWh - MUC1) * GIA2;
        else // > MUC2
            if(sokWh <= MUC3) sotien = MUC1*GIA1 + (MUC2-MUC1)*GIA2 + (sokWh - (MUC2+MUC1))*GIA3;
            else // > MUC3 
                sotien = (MUC1*GIA1 + (MUC2-MUC1)*GIA2 + (sokWh - (MUC2+MUC1))*GIA3)*1.1;

    // In kết quả
    printf("So kWh tieu thu: %d \tSo tien: %.2f (VND)\n", sokWh, sotien);
}