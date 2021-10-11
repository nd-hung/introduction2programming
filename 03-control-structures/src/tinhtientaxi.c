/*
Tinh tien taxi dua vao so km va bang gia.
Bang gia:
1 km dau giá 15000d
Tu km thu 2 den km thu 5 gia 13500d
Tu km thu 6 tro di gia 11000d
Neu tren 120km duoc giam 10% tong tien.

Input: So km, bang gia
Output: So tien phai tra.
*/

#include <stdio.h>

int main()
{
	float quangduong, sotien=0;
	
	printf("Nhap quang duong di (km):");
	scanf("%f", &quangduong);
	
	if(quangduong <= 1)	sotien = 15000;
	else
		if(quangduong <= 5)	sotien = 15000 + (quangduong - 1) * 13500;
		else
			if(quangduong <= 120) 
				sotien = 15000 + 4 * 13500 + (quangduong - 5) * 11000;
			else
				sotien = (15000 + 4 * 13500 + (quangduong - 5) * 11000) * 0.9;
				
	printf("\n--------------------------------\n");
	printf("Quang duong:\t%10.2f (km)\nSo tien:\t%10.2f (d)\n", quangduong, sotien);
}


