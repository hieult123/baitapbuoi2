#include<stdio.h>
int main()
{
	int n;
	printf("Nhap vao so giay ");
	scanf("%d",&n);
	printf("%d gio ", n/3600);
	n=n%3600;
	printf ("%d phut ", n/60);
	printf ("%d giay ", n%60);
	return 0;
}
