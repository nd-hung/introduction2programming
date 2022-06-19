/*
Viết chương trình xử lý ma trận vuông gồm các hàm sau:
- Hàm NhapMTV để nhập ma trận vuông bậc n (2 ≤ n ≤ 10) các phần tử là số nguyên.
- Hàm InMTV để in ra màn hình các phần tử của ma trận theo đúng định dạng.
- Hàm MaxTGT để tìm và trả về giá trị lớn nhất của các phần tử thuộc ma trận tam giác trên.
 Biết ma trận tam giác trên của ma trận vuông A_(n×n) là các phần tử {a_ij } thỏa mãn i ≤j.
- Hàm ThayThe để thay các phần tử thuộc đường chéo chính thành 1, các phần tử còn lại của ma trận thành 0.
- Hàm main lần lượt gọi các hàm trên để kiểm tra kết quả thực hiện.
*/
#include<stdio.h>

#define MAX 50

// Hàm nhập ma trận vuông từ bàn phím
void NhapMTV(int a[MAX][MAX], int &n) {
    do {
        printf("Nhap kich thuoc ma tran vuong = ");
        scanf("%d", &n);
    } while (n < 2 || n > 10);
    // Nhập giá trị các phần tử của ma trận
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

// Hàm in ma trận vuông
void InMTV(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        // Xuống hàng
        printf("\n");
    }
}

// Hàm MaxTGT tìm và trả về giá trị lớn nhất của các phần tử thuộc ma trận tam giác trên
int MaxTGT(int a[MAX][MAX], int n) {
    int max = a[0][0];
    // Xét các phần tử thuộc mt tam giác trên
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            // Nếu a[i][j] > max thì gán max <- a[i][j]
            if (a[i][j] > max) max = a[i][j];
    // trả giá trị max cho lời gọi hàm
    return max;
}

// Chương trình chính
int main() {
    int a[MAX][MAX], n;
    NhapMTV(a, n);
    printf("\nMa tran vua nhap la:\n");
    InMTV(a, n);
    printf("Phan tu lon nhat cua ma tran tam giac tren la %d\n", MaxTGT(a, n));
}


