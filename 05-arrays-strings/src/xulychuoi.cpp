/*
Các thao tác cơ bản với chuỗi ký tự.
Viết chương trình thực hiện (mỗi chức năng cài đặt 1 hàm):
a) Nhập chuỗi
b) Xuất chuỗi
*/
#include <stdio.h>
#include <string.h>

void NhapChuoi(char s[])
{
    printf("Nhap 1 chuoi: ");
    gets(s);
    //scanf("%s", s);  // Dùng cách này và rút ra nhận xét
}

void XuatChuoi(char s[])
{
    printf("%s\n", s);
    // puts(s);
}

///////////////////////////////////////////////////////////////////////////////
int main()
{
    char s[100], s1[100];
    NhapChuoi(s);
    XuatChuoi(s);
    // Lấy độ dài chuỗi
    printf("\nDo dai chuoi vua nhap la %d.\n", strlen(s));
    
    // Sao chép chuỗi
    strcpy(s1, s); // copy s vào s1
    XuatChuoi(s1);

    // Tạo bản sao chuỗi
    char *s2;
    s2 = strdup("Nha Trang Viet Nam.");
    XuatChuoi(s2);

}
///////////////////////////////////////////////////////////////////////////////
