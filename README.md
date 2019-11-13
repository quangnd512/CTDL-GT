# Cấu trúc dữ liệu và giải thuật
## Đệ Quy
> Gọi lại chính giải thuật đó trong quá trình giải thuật, chia nhỏ giải thuật.  

	Cấu trúc:  
	* Kiểm tra điều kiện kết thúc đệ quy và trả về kết quả tương ứng  
	* Chia nhỏ dữ liệu đầu vào  
	* Áp dụng đệ quy trên từng phần dữ liệu con  
	* Tổng hợp các kết quả thu được  

> Các bài toán hay dùng: lũy thừa, dãy fibonacci  

	long int giaiThua(int h);  
	int main()  
	{  
		int h;  
		printf("h = "); scanf("%d",&h); // Nhập số cần tính giai thừa VD: 5!  
		printf("h = %ld\n", giaiThua(h)); // In giai thừa vừa tính được  
		getch();  
	}  

	long int giaiThua(int h) // Tính bài toán nhỏ nhất của giai thừa  
	{  
		if(h==0) return 1; // Nếu h = 0 thì giá trị trả về bằng 1  
		else return (h * giaiThua(h-1)); // Nếu khác 0 thì h * (h-1)   
	}   