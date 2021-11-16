/*
Các thao tác cơ bản với chuỗi ký tự.
Viết chương trình thực hiện (mỗi chức năng cài đặt 1 hàm):
a) Nhập chuỗi.
b) Xuất chuỗi.
c) Đổi các ký tự đầu tiên mỗi từ thành ký tự hoa, còn lại là chữ thường.
// d) Chuẩn hóa chuỗi (xóa khoảng trắng thừa) (Làm ở buổi thực hành)
e) Đếm số từ của chuỗi.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], s1[100];
    
    printf("Nhap mot chuoi: ");
    gets(s);
    printf("Chuoi vua nhap:\n");
    puts(s);

    // Định dạng chuỗi kiểu proper: ký tự đầu mỗi từ in hoa, còn lại in thường.
    // chuyển toàn bộ chuỗi thành chữ thường:
    printf("Chuoi in thuong:\n");
    strlwr(s);
    puts(s);
    int i=0;
    while(s[i] == ' ' && i < strlen(s)) i++;
    if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
    while(i < strlen(s))
    {
        if(s[i] != ' ' && s[i-1] == ' ')
            if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
        i++;
    }

    printf("Chuoi dang proper:\n");
    puts(s);

    // Dem so tu
    //Kiem tra xem dau chuoi co chua ky tu trang hay khong
    int sotu = 0;
    i = 0;
    while(s[i] == ' ' && i < strlen(s)) i++;
    if(i == strlen(s)) sotu = 0;
    else sotu = 1;
    
    while(i < strlen(s)) 
    {
        if(s[i] != ' ' && s[i-1] == ' ') sotu++;
        i++;
    }

    printf("So tu = %d\n", sotu);

}
