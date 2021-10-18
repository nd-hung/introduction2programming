/*
Nhập một tháng dương lịch, in ra số ngày của tháng đó.

Input: tháng trong năm (1..12), năm (khi tháng == 2)
Output: số ngày của tháng.

Biết: Trong 1 năm dương lịch:
- Tháng 1,3,5,7,8,10,12 có 31 ngày.
- Tháng 4,6,9,11 có 30 ngày.
- Tháng 2: năm nhuận có 29 ngày, năm không nhuận có 28 ngày.
(Năm nhuận là năm thỏa mãn 1 trong 2 điều kiện:
+ Chia hết cho 400
+ Chia hết cho 4 và không chia hết 100
)
*/

#include <stdio.h>

int main()
{
    unsigned char month;

    printf("Nhap mot thang duong lich:");
    scanf("%d", &month);

    /* Cách 1 - Sử dụng lệnh rẽ nhánh if

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Thang %d co 31 ngay\n", month);

    if(month == 4 || month == 6 || month == 9 || month == 11)
        printf("Thang %d co 30 ngay\n", month);
    
    if(month == 2)
    {
        int year;
        printf("Xin nhap nam:");
        scanf("%d", &year);
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0)) // -> nam nhuan
            printf("Thang %d/%d co 29 ngay", month, year);
        else
            printf("Thang %d/%d co 28 ngay", month, year);
    }

    if(month < 1 || month > 12)
        printf("Khong co thang %d", month);
    */

   // Cách 2 - Sử dụng câu lệnh rẽ nhánh switch
   switch (month)
   {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12: printf("Thang %d co 31 ngay\n", month); break;
   case 4:
   case 6:
   case 9:
   case 11: printf("Thang %d co 30 ngay\n", month); break;
   case 2:
        {
            int year;
            printf("Xin nhap nam:");
            scanf("%d", &year);
            if((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0)) // -> nam nhuan
                printf("Thang %d/%d co 29 ngay", month, year);
            else
                printf("Thang %d/%d co 28 ngay", month, year);
            break;
        }
   default:  printf("Khong co thang %d", month); 
   }
}
