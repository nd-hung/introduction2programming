/*
Một loại vi trùng cứ sau mỗi giờ lại nhân đôi. Hỏi ban đầu có n con vi trùng thì sau h giờ số lượng là bao nhiêu?

*Input: 
- Số lượng vi trùng ban đầu (con)
- Khoảng thời gian (giờ).
* Output: Số lượng vi trùng sau khoảng thời gian đã cho.
*/

#include<stdio.h>

const int HSNHAN = 2;   // Tốc độ nhân bản

int main()
{
    unsigned long sovitrungbandau, sovitrungmoi;
    unsigned int sogio, i;

    do
    {
        printf("Nhap so luong vi trung ban dau:");
        scanf("%d", &sovitrungbandau);
    } while (sovitrungbandau <= 0);

    do
    {      
        printf("Nhap thoi gian (h):");
        scanf("%d", &sogio);
    } while (sogio <= 0);

    for (i = 0; i < sogio; i++) 
    {
        sovitrungmoi = sovitrungbandau * HSNHAN;
        sovitrungbandau = sovitrungmoi;
    } 
    
    printf("Tong so vi trung sau %d gio: %d\n", sogio, sovitrungmoi);
}