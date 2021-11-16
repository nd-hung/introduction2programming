/*
Viet chuong trinh quan ly danh sach phan so.
- Nhap danh sach phan so.
- In danh sach phan so.
- Toi gian phan so.
- Tim phan so lon nhat.
- Sap xep danh sach phan so tang dan.
*/

#include<stdio.h>
#include<math.h>
#define MAX 100

typedef struct{
	int TuSo=0, MauSo=1;
}PhanSo;

// Ham nhap danh sach phan so
void NhapDSPS(PhanSo ps[], int &n)
{
	do{
		printf("Nhap so luong phan so:");
		scanf("%d", &n);
	}while(n < 3 || n > MAX);
	
	// Nhap tung phan so
	for(int i=0; i < n; i++)
	{
		printf("Nhap phan so thu %d\n", i+1);
		printf("Tu so:");
		scanf("%d", &ps[i].TuSo);
		do
		{
			printf("Mau so:");
			scanf("%d", &ps[i].MauSo);
			if(ps[i].MauSo == 0) printf("Mau so phai khac 0.");
		}while(ps[i].MauSo == 0);
	}
}

// Ham tra ve USCLN cua 2 so nguyen
int UCLN(int a, int b)
{
	a = abs(a); b = abs(b);
	int i = (a < b)?a:b;
	while(i >= 1)
	{
		if(a % i == 0 && b % i == 0)
			return i;
		i--;
	}
}

// Ham toi gian danh sach phan so
void ToiGian(PhanSo ps[], int n)
{
	for(int i=0; i < n; i++)
	{
		// Toi gian phan so thu i
		int ucln = UCLN(ps[i].TuSo, ps[i].MauSo);
		ps[i].TuSo /= ucln;
		ps[i].MauSo /= ucln;
	}
}

// Ham in danh sach phan so
void InDSPS(PhanSo ps[], int n)
{
	for(int i=0; i < n; i++)
		printf("%d/%d\n", ps[i].TuSo, ps[i].MauSo);
}

// Ham tra ve gia tri phan so
float GiaTri(PhanSo p)
{
	return (float) p.TuSo / p.MauSo;
}

// Sap xep danh sach phan so tang dan
void SapXepTD(PhanSo ps[], int n)
{
	for(int i=0; i < n-1; i++)
		for(int j=i+1; j < n; j++)
			if(GiaTri(ps[i]) > GiaTri(ps[j]))
			{
				PhanSo tmp = ps[i];
				ps[i] = ps[j];
				ps[j] = tmp;
			}
}

// Chuong trinh chinh
int main()
{
	PhanSo ps[MAX];
	int n;
	NhapDSPS(ps,n);
	printf("\nDanh sach phan so:\n");
	InDSPS(ps,n);
	
	printf("\nDanh sach phan so toi gian:\n");
	ToiGian(ps,n);
	InDSPS(ps,n);
	
	printf("\nDanh sach phan so tang dan:\n");
	SapXepTD(ps,n);
	InDSPS(ps,n);
}
