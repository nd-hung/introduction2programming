/*
Minh họa xử lý mảng 2 chiều.
Viết chương trình (mỗi chức năng cài đặt thành một hàm):

a) Nhập ma trận kích thước mxn phần tử là số nguyên.
b) In ra ma trận vừa nhập
c) Tìm phần tử lớn nhất trên toàn ma trận.
d) Kiểm tra tất cả các phần tử của ma trận có phải SNT?
e) Viết hàm tính tổng các phần tử trên 1 dòng của ma trận.
f) Tính tổng phần tử của toàn bộ ma trận, sử dụng hàm ở câu e.
g) Sắp xếp ma trận sao cho trên mỗi dòng các phần tử tăng dần.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

typedef int matran[MAX][MAX];
void TaoMT(matran a, int &m, int &n);   // a 
void NhapMT(matran a, int &m, int &n);  // a
void XuatMT(matran a, int m, int n);    // b
int MaxMT(matran a, int m, int n);      // c
int LaSNT(int n);                       // d
int LaMTSNT(matran a, int m, int n);    // d
void SapXepMT(matran a, int m, int n);  // g

int main()
{
    matran a;
    int m,n;
    
    TaoMT(a, m, n);
    //NhapMT(a, m, n);
    XuatMT(a, m, n);

    // In ra phần tử lớn nhất của ma trận
    printf("Phan tu lon nhat ma tran = %d\n", MaxMT(a, m, n));

    // Kiểm tra ma trận có chứa toàn số nguyên tố?
    if(LaMTSNT(a, m, n)) 
        printf("Tat ca phan tu la SNT.\n");
    else
        printf("Khong phai tat ca phan tu la SNT.\n");

    // Sắp xếp ma trận mỗi hàng tăng dần
    SapXepMT(a, m, n);
    // In ra ma trận sau khi sắp xếp
    printf("\nMa tran sau khi sap xep:\n");
    XuatMT(a,m,n);
}


void TaoMT(matran a, int &m, int &n)
{
    printf("Nhap so hang:");
    scanf("%d", &m);
    printf("Nhap so cot:");
    scanf("%d", &n);    

    for(int i=0; i < m; i++)   
        for(int j=0; j < n; j++)
        {
            // Tạo giá trị ngẫu nhiên <= 50 cho ma trận
            a[i][j] = rand() % 50;
        }
}

void NhapMT(matran a, int &m, int &n)
{
    printf("Nhap so hang:");
    scanf("%d", &m);
    printf("Nhap so cot:");
    scanf("%d", &n);    
    
    for(int i=0; i < m; i++)   
        for(int j=0; j < n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
        {
            for(int j=0; j < n; j++)
                printf("%5d", a[i][j]);
            printf("\n");
        }
}

/* Hàm trả về phần tử lớn nhất của ma trận
Cách giải quyết:
- Gán phần tử max = a[0][0]
- Lần lượt so sánh max với các phần tử còn lại, 
nếu phần tử nào > max thì gán max bằng phần tử đó.
*/
int MaxMT(matran a, int m, int n)
{
    int max = a[0][0];
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            if(max < a[i][j]) max = a[i][j];
    return max;
}

// Hàm LaSNT(int n) trả về 1 nếu n là số nguyên tố, ngược lại trả về 0
int LaSNT(int n)
{
    if(n < 2) return 0;
    for(int i=2; i <= n/2; i++)
        if(n % i == 0) return 0;
    return 1;
}

/* Hàm LaMTSNT(int a, int m, int n) trả về 1 nếu toàn bộ phần tử là SNT
ngược lại trả về 0
*/
int LaMTSNT(matran a, int m, int n)
{
    for(int i=0; i < m; i++)
        for(int j=0; j < n; j++)
            // Nếu có ít nhất 1 phần tử không là SNT thì trả về 0
            if(!LaSNT(a[i][j])) return 0;
    // nếu không rơi vào trường hợp trên -> tất cả phần tử đều là SNT -> trả về 1
    return 1;
}

/*
Sắp xếp từng hàng tăng dần.
*/
void SapXepMT(matran a, int m, int n)
{
    // Xét từng hàng của ma trận
    for(int i=0; i < m; i++)
    { // Sắp xếp các phần tử trên hàng i tăng dần
        for(int j=0; j < n-1; j++)
            for(int k=j+1; k < n; k++)
            if(a[i][j] > a[i][k]) 
            {
                int t = a[i][j];
                a[i][j] = a[i][k];
                a[i][k] = t;
            }
    }
}