/*
Bai 3.2
*/

#include <stdio.h>

long long GiaiThua(unsigned int n)
{
	long long s = 1;
	for (int i = 2; i <= n; i++)
		s *= i;
	return s;
}

long A(unsigned int k, unsigned int n)
{
	return GiaiThua(n) / GiaiThua(n - k);
}

int main()
{
	int n, s = 0;

	do
	{
		printf("Nhap so le n (3 <= n <=15):");
		scanf("%d", &n);
	} while (!(n % 2 != 0 && n >= 3 && n <= 15));

	for (int i = 1; i <= n; i += 2)
		s += A(i, n);

	printf("S = %d\n", s);
}
