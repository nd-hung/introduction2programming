/*
Viết chương trình gồm các hàm sau:
-	Hàm NhapChuoi để nhập vào một chuỗi ký tự chuẩn s, có ít nhất 2 từ, dài tối đa 100 ký tự
 (chuỗi chuẩn là chuỗi không có khoảng trắng thừa ở đầu và cuối chuỗi, giữa các từ trong chuỗi chỉ cách nhau một khoảng trắng).
-	Hàm Right để in ra từ cuối cùng của chuỗi s.
-	Hàm DemDB để đếm và trả về số lượng ký tự đặc biệt có trong chuỗi s,
 biết ký tự đặc biệt là ký tự không phải chữ cái, chữ số hay khoảng trắng.
-	 Hàm main lần lượt gọi các hàm trên để kiểm tra kết quả thực hiện.
 */
#include "stdio.h"
#include "string.h"

int main() {
    char s[100];
    printf("Nhap mot chuoi: ");
    gets(s);
    printf("Chuoi vua nhap: ");
    puts(s);
    // In ra từ cuối cùng của chuỗi
    // Ý tưởng: Cho i xuất phát từ vị trí cuối chuỗi, giảm dần i cho đến khi gặp ký tự trắng đầu tiên
    int i = strlen(s);
    while (s[i] != ' ' && i >= 0) i--;
    // Các ký tự từ vị trí i+1 đến cuối là từ cuối cùng
    printf("Tu cuoi cung la: ");
    for (int j = i + 1; j < strlen(s); j++)
        printf("%c", s[j]);
    // Đếm số ký tự đặc biệt
    int count = 0;
    for (i = 0; i < strlen(s); i++)
        if (!(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z')
                                          && !(s[i] >= '0' && s[i] <= '9')
                                          && s[i] != ' ')
            count++;
    printf("So ky tu dac biet = %d\n", count);
}