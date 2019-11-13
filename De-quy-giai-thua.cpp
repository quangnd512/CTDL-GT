#include <stdio.h>
#include <conio.h>

long int giaiThua(int h);
int main()
{
	int h;
	printf("h = "); scanf("%d",&h); // Nhap so can tinh giai thua VD: 5!
	printf("h = %ld\n", giaiThua(h)); // In giai thua vua tinh duoc  
	getch();
}

long int giaiThua(int h) //Tinh bai toan nho nhat cua giai thua
{
	if(h==0) return 1; // Neu h = 0 thi gia tri tra ve bang 1
	else return (h * giaiThua(h-1)); // Neu khac 0 thì h * (h-1)
} 
