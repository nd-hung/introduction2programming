/*
Tim vi tri xuat hien cua chuoi s1 trong s2
*/

#include<stdio.h>
#include<string.h>

int pos(char s1[], char s2[]);

int main()
{
	char s1[] = "an";
	char s2[] = "Nha Trang van minh than thien";
	
	int p = pos(s1, s2);
	if(p >= 0) 
		printf("Vi tri xuat hien dau tien cua\n\"%s\" \ntrong\n\"%s\"\nla %d\n", s1, s2, p);
	else
		printf("Khong tim thay s1 trong s2.\n");
}

/* 
Ham tra ve vi tri xuat hien dau tien cua s1 trong s2
Neu khong tim thay tra ve -1
*/
int pos(char s1[], char s2[])
{
	int j,k;
	
	if(strstr(s2,s1) == NULL) return -1;
	for(int i=0; i < strlen(s2) - strlen(s1); i++)
	{
		// tai vi tri i, lay ra chuoi con co do dai = s1
		j=i;
		k=0;
		char tmp_st[]="";
		
		while(k < strlen(s1)) 
			tmp_st[k++] = s2[j++];
		
		// so sanh chuoi tmp_st voi chuoi s1
		if(strcmp(s1, tmp_st) == 0)
			return j;
	}
}
