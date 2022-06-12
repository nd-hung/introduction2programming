/*
In ra từ dài nhất trong chuỗi.
*/
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

// Hàm in từ dài nhất trong chuỗi
void PrintLongestWord(char st[]) {
    int max_len = 0, start = 0, end = 0;
    int max_start = 0, max_end = 0; // Vị trí của từ dài nhất
    // Xét từng ký tự từ đầu đến trước ký tự kết thúc chuỗi ('\0')
    int i = 0;
    while (st[i] != '\0')
        // Nếu là ký tự trắng thì chuyển qua ký tự kế tiếp
        if (st[i] == ' ') i++;
        else {
            // Nếu là ký tự khác khoảng trắng thì đó là đầu 1 từ
            start = i; // start = vị trí ký tự đầu tiên của từ đang xét
            // Tìm vị trí cuối của từ hiện tại
            end = start;
            // Kết thúc vòng lặp -> end = vị trí của ký tự trắng ngay sau từ đang xét
            // hoặc end = vị trí kết thúc chuỗi
            while (st[end] != ' ' && st[end] != '\0') end++;
            // Nếu độ dài từ đang xét > max_len -> từ đang xét dài hơn -> lấy vị trí & độ dài của nó
            if (end - start > max_len) {
                max_start = start;
                max_end = end;
                max_len = end - start;
            }
            // Chuyển qua từ kế tiếp
            i = end;
        }
    // In ra từ dài nhất
    printf("Tu dai nhat: ");
    for (int j = max_start; j < max_end; j++)
        printf("%c", st[j]);
}

// Chương trình chính
int main() {
    char st[MAX_LENGTH];
    printf("Nhap mot chuoi:\n");
    gets(st);
    PrintLongestWord(st);
}
