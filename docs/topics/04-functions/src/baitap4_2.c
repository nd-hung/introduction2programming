/*
Minh họa cài đặt & sử dụng hàm. 

Viết hàm nhận vào số nguyên dương n và thực hiện:
a. Trả về số đảo của số đó.
b. Có phải là số đối xứng (Trả về True/False)
c. Có phải là số chính phương.
d. Có phải là số nguyên tố.
e. Tổng các chữ số lẻ.
f. Tổng các chữ số nguyên tố.
g. Tổng các chữ số chính phương.
*/

#include <stdio.h>
#include <math.h>

//////////////////////////////////////////////////////////////////////
// Khai báo khuôn mẫu các hàm
// Hàm trả về số đảo của 1 số
unsigned int SoDao(unsigned int n);
// Hàm kiểm tra n có phải số đối xứng
char LaSoDoiXung(unsigned int n);
// Hàm kiểm tra n có phải số chính phương
char LaSoChinhPhuong(unsigned int n);
// Hàm kiểm tra n có phải số nguyên tố hay không
char LaSNT(unsigned int n); 
// Hàm trả về tổng các chữ số lẻ của n
unsigned int TongCSLe(unsigned int n); 

// Hàm trả về tổng các chữ số nguyên tố của n
unsigned int TongCSNT(unsigned int n);
//////////////////////////////////////////////////////////////////////
// Chương trình chính
int main()
{
    int n;
    printf("Nhap n > 0: ");
    scanf("%d", &n);

    printf("So dao cua %d la %d\n", n, SoDao(n));

    if(LaSoDoiXung(n))
        printf("%d la so doi xung\n", n);
    else
        printf("%d khong phai so doi xung\n", n);

    if(LaSoChinhPhuong(n))
        printf("%d la so chinh phuong\n", n);
    else
        printf("%d khong phai so chinh phuong\n", n);

    if(LaSNT(n))
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai so nguyen to\n", n);    

    printf("Tong cac chu so le cua %d = %d\n", n, TongCSLe(n));            
    
    printf("Tong cac chu nguyen to cua %d = %d\n", n, TongCSNT(n));                


}

//////////////////////////////////////////////////////////////////////
// Hàm trả về số đảo ngược của n
unsigned int SoDao(unsigned int n)
{
    unsigned int sodao=0;
    char chusocuoi;
    while(n > 0)
    {
        // Lấy ra chữ số cuối của n
        chusocuoi = n % 10;
        // Giảm n, loại bỏ chữ số đã xét
        n /= 10;
        sodao = sodao * 10 + chusocuoi;
    }
    return sodao;
}

/* Hàm kiểm tra số đối xứng
Nếu số đảo của n == n thì n là số đối xứng.
*/
char LaSoDoiXung(unsigned int n)
{
    /* Cách 1
    if(SoDao(n) == n) return 1;
    else return 0;
    */
   
   // Cách 2
   return SoDao(n) == n;
}

// Hàm kiểm tra n có phải số chính phương
char LaSoChinhPhuong(unsigned int n)
{
    return (int)sqrt(n) * (int)sqrt(n) == n;
}

// Hàm kiểm tra n có phải số nguyên tố hay không
char LaSNT(unsigned int n)
{   int i;
    if(n < 2) return 0; // Số NT nhỏ nhất là 2
    // Xét các số trong đoạn [2, |sqrt(n)|], 
    // Nếu có ít nhất 1 ước số của n thì n không phải SNT
    for(i=2; i <= (int)sqrt(n); i++)
        if(n % i == 0) return 0;
    // nếu không thuộc 2 trường hợp trên -> n là SNT
    return 1;
}

unsigned int TongCSLe(unsigned int n)
{
    unsigned int sum=0;
    unsigned char chusocuoi;
    while(n > 0)
    {
        chusocuoi = n % 10;
        if(chusocuoi % 2 != 0) sum += chusocuoi;
        n /= 10;
    }
    return sum;
}

// Hàm trả về tổng chữ số nguyên tố của
unsigned int TongCSNT(unsigned int n){
	unsigned int sum = 0;
	unsigned char chusocuoi;
	
	while(n > 0){
		chusocuoi = n % 10;
		if(LaSNT(chusocuoi))
			sum += chusocuoi;
		n /= 10;
	}
	return sum;
}