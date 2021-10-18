/*
Một số tự nhiên n được gọi là số hoàn hảo (perfect number) nếu tổng các ước số < n bằng n.
Ví dụ: 6 là một số hoàn hảo vì tổng các ước số của nó là 1+2+3 = 6.
Hãy viết chương trình tìm & in ra các số hoàn hảo <= 10000.
*/

#include<stdio.h>

int main()
{
    unsigned int n=10000,tonguocso,i,j;
    // Xét các số từ 1 đến n
    for(i=1; i <= n; i++)
        {
            // Với mỗi số i, tính tổng các ước số < i
            tonguocso = 0;
            for(j=1; j <= i/2; j++)
                if(i %j == 0) tonguocso += j;
            // Nếu tổng ước số == i -> i là số thỏa mãn
            if(tonguocso == i) printf("%d\n", i);
        }
}