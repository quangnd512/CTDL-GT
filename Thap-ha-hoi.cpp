#include <stdio.h>
#include <conio.h>
int thapHaNoi(int n, int coc_1, int coc_2, int coc_3);
int main()
{
	int n;
	do {
		printf ("Ban hay nhap vao so dong xu (n>0): ");
		scanf("%d",&n);
		}
		while (n <=0); thapHaNoi(n,1,2,3);
		getch(); 
}
int thapHaNoi(int n, int coc_1, int coc_2, int coc_3)
	{
		if(n==1) printf("Chuyen tu coc %d -> coc %d\n",coc_1,coc_3);
		else{
			thapHaNoi(n-1, coc_1, coc_3, coc_2); // Lay coc_3 la coc trung gian. Chuyen n-1 dia tu coc_1 sang coc_2
			thapHaNoi(1, coc_1, coc_2, coc_3); // Chuyen dia lon nhat tu coc_1 sang coc_3
			thapHaNoi(n-1, coc_2, coc_1, coc_3); // Lay coc_1 la coc trung gian. Chuyen n-1 dia tu coc_2 sang coc_3
		}
	}
