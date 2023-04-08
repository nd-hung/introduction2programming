/*
Các thao tác cơ bản với chuỗi ký tự.
Viết chương trình thực hiện (mỗi chức năng cài đặt 1 hàm):
a) Nhập chuỗi
b) Xuất chuỗi
c) Tính độ dài chuỗi
d) Sao chép chuỗi
e) Biến đổi chuỗi thành dạng chữ thường/chữ in hoa
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
    s2 = strdup(s1);
    XuatChuoi(s2);

    // Tạo chuỗi đảo ngược
    s2 = strrev(s);
    printf("Chuoi dao nguoc:\n");
    puts(s2);

    // Đổi chuỗi sang chữ thường
    s2 = strlwr(s1);
    printf("Chuoi in thuong:\n");
    puts(s2);

    // Đổi chuỗi sang chữ hoa
    s2 = strupr(s1);
    printf("Chuoi in hoa:\n");
    puts(s2);

}
///////////////////////////////////////////////////////////////////////////////
