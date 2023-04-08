#include <stdio.h>
#define MAX 100
typedef int mang1c[MAX];

// Khai báo khuon mau cac ham xu ly mang
void NhapMang(mang1c, int &n);
void XuatMang(mang1c, int);
int Max(mang1c, int);
int MangTangDan(mang1c, int); // tra ve 1 neu mang tang dan, 0 neu mang khong tang dan
// Tach mang thanh 2 mang con: 1 mang chua phan tu chan, 1 mang chua phan tu le
void TachMang(mang1c a, int n, mang1c le, int &nle, mang1c chan, int &nchan);
void SapXepTD(mang1c, int);
void ThemPT(mang1c, int &n, int gt_chen, int vt_chen); // Chen 1 phan tu vao vi tri i trong mang
void XoaPT(mang1c, int &n, int vt_xoa); // Xoa 1 phan tu o vi tri i trong mang
////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    mang1c a, le, chan;
    int n, nle, nchan;
    
    NhapMang(a,n);
    XuatMang(a,n);
    // Tim phan tu lon nhat
    int max = Max(a,n);
    printf("\nGia tri lon nhat cua mang la %d\n", max);
    // Kiem tra mang co tang dan hay khong?
    if(MangTangDan(a,n)) printf("Mang tang dan.\n");
    else printf("Mang khong tang dan.\n");
    
    // Tach mang thanh 2 mang con: 1 mang chua phan tu le, 1 mang chua phan tu chan
    TachMang(a,n,le,nle,chan,nchan);
    // In ra 2 mang con
    printf("Mang le:\n");
    XuatMang(le, nle);
    printf("\nMang chan:\n");
    XuatMang(chan, nchan);
    
	// Sap xep mang tang dan
	SapXepTD(a,n);

	// In ra mang sau khi sap xep
	printf("\nMang sau khi sap xep tang dan:\n");
	XuatMang(a,n);
	
	// Chen phan tu vao mang
	int gt_chen, vt_chen;
	printf("\nNhap gia tri chen:");
	scanf("%d", &gt_chen);
	printf("Nhap vi tri muon chen:");
	scanf("%d", &vt_chen);	
	ThemPT(a, n, gt_chen, vt_chen);
	
	// In ra mang sau khi chen
	printf("\nMang sau khi them phan tu:\n");
	XuatMang(a,n);	
	
	// Xoa 1 phan tu khoi mang
	int vt_xoa;
	printf("\nNhap vi tri muon xoa:");
	scanf("%d", &vt_xoa);	
	XoaPT(a,n,vt_xoa);

	// In ra mang sau khi xoa
	printf("\nMang sau khi xoa phan tu:\n");
	XuatMang(a,n);	
	
}
////////////////////////////////////////////////////////////////////////////////////////
void NhapMang(mang1c a, int &n)
{
    do
    {
       printf("Nhap so phan tu:");
       scanf("%d", &n);
    } while (n <= 0 || n > MAX);
    
    for(int i=0; i < n; i++)  
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(mang1c a, int n)
{
    for(int i=0; i < n; i++)
        printf("%d  ", a[i]);
}

// Ham tim & tra ve phan tu lon nhat cua mang
int Max(mang1c a, int n)
{
	int max=a[0];
	for(int i=1; i < n; i++)
		if(max < a[i]) max = a[i];
	return max;
}

// Ham kiem tra mang tang dan hay khong
int MangTangDan(mang1c a, int n)
{
    for(int i = 0; i < n-1; i++)
	     if(a[i] > a[i+1]) return 0;
    return 1;
}

//
void TachMang(mang1c a, int n, mang1c le, int &nle, mang1c chan, int &nchan)
{
	nle = 0;
	nchan = 0;
	for(int i=0; i < n; i++)
		if(a[i] % 2 == 0)
			{
				chan[nchan] = a[i];
				nchan++;
			}
		else
			{
				le[nle++] = a[i];
			}
}

// Ham sap xep mang tang dan
void SapXepTD(mang1c a, int n)
{
	for(int i=0; i < n-1; i++)
		for(int j=i+1; j < n; j++)
			if(a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

// Ham chen phan tu vao vi tri i
void ThemPT(mang1c a, int &n, int gt_chen, int vt_chen)
{
	if(vt_chen < 0 || vt_chen > n) printf("Vi tri chen khong hop le.\n");
	else
	{
		n += 1; 
		// Dich cac phan tu tu vi tri i -> n-1 sang phai 1 buoc
		for(int j=n-1; j > vt_chen; j--)
			a[j] = a[j-1];
		// chen gia tri vao a[i]
		a[vt_chen] = gt_chen;
	}
}

// Ham xoa 1 phan tu tai vi tri <vt_xoa> trong mang
void XoaPT(mang1c a, int &n, int vt_xoa)
{
	if(vt_xoa < 0 || vt_xoa > n-1) printf("Vi tri xoa khong hop le.\n");
	else
	{
		for(int i=vt_xoa; i < n-1; i++)	
			a[i] = a[i+1];
		n -= 1; // Giam di 1 phan tu
	}
}
