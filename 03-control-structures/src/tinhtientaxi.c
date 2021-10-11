/*
Tính tiền taxi dựa vào quãng đường đi và bảng giá.
Bảng giá:
<= 1 km dau: 15000 đ
Từ km thứ 2 đến km thứ 5: 13500 đ/km
Từ km thứ 6 trở đi: 11000 đ/km
Nếu vượt 120 km được giảm 10% tổng tiền.

* Input: 
- Số km (nhập từ bàn phím)
- Bảng giá

* Output: Số tiền phải thanh toán.
*/

#include <stdio.h>

int main()
{
	float quangduong, sotien=0;
	
	printf("Nhap quang duong di (km):");
	scanf("%f", &quangduong);
	
	if(quangduong > 0 && quangduong <= 1)	sotien = 15000;
	else
		// <-> (quangduong > 1 && quangduong <= 5)
		if(quangduong <= 5)	sotien = 15000 + (quangduong - 1) * 13500;
		else
			// <-> (quangduong > 5 && quangduong <= 120)
			if(quangduong <= 120) 
				sotien = 15000 + 4 * 13500 + (quangduong - 5) * 11000;
			else
				// <-> (quangduong > 120)
				sotien = (15000 + 4 * 13500 + (quangduong - 5) * 11000) * 0.9;
				
	printf("\n--------------------------------\n");
	printf("Quang duong:\t%10.2f (km)\nSo tien:\t%10.2f (d)\n", quangduong, sotien);
}


