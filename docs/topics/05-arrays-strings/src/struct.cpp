/*
Viet chuong trinh xu ly mang phan so.
1 - Khai bao cau truc phan so.
2 - Nhap danh sach phan so tu ban phim.
3 - In danh sach phan so o dang toi gian
4 - Tim phan so lon nhat/nho nhat.
5 - Sap xep danh sach phan so tang dan.

*/

#include <stdio.h>

typedef struct PhanSo
{
	int TuSo, MauSo;
};

// Ham nhap 1 phan so
void NhapPS(PhanSo &p);
// Ham nhap danh sach phan so
void NhapDSPS(PhanSo ps[], int &n);
// Ham in danh sach phan so
void InDSPS(PhanSo ps[], int n);
// Ham tra ve phan so lon nhat
PhanSo PSMax(PhanSo ps[], int n);
// Ham sap xep danh sach phan so tang dan
void SXTD(PhanSo ps[], int n);
///////////////////////////////////////////////////////////
int main()
{
	PhanSo dsps[100];
	int n;
	NhapDSPS(dsps, n);
	InDSPS(dsps, n);
}
///////////////////////////////////////////////////////////
void NhapPS(PhanSo &p)
{
	printf("Nhap tu so: ");
	scanf("%d", &p.TuSo);
	do{
		printf("Nhap mau so: ");
		scanf("%d", &p.MauSo);		
	}while(p.MauSo == 0);
}
///////////////////////////////////////////////////////////
void NhapDSPS(PhanSo ps[], int &n)
{
	printf("Nhap so luong phan so: ");
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		printf("Nhap phan so thu %d:\n", i+1);
		NhapPS(ps[i]);
	}
}
///////////////////////////////////////////////////////////
void InDSPS(PhanSo ps[], int n)
{
	for(int i=0; i < n; i++)
		printf("%d/%d\n", ps[i].TuSo, ps[i].MauSo);
}


