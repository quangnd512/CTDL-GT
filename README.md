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
VD: [Tính giai thừa](https://github.com/quangnd512/CTDL-GT/blob/master/De-quy-giai-thua.cpp)  
	
### Phương pháp quay lui
**Bài toán thấp Hà Nội**  
> Phân tích: Gọi đĩa to là A, đĩa trung bình là B, đĩa nhỏ là C  
> Chuyển đĩa C từ cọc 1 sang cọc 3  
> Chuyển đĩa B từ cọc 1 sang cọc 2  
> Chuyển đĩa C từ cọc 3 sang cọc 2   
> Chuyển đĩa A từ cọc 1 sang cọc 3  
> Chuyển đĩa C từ cọc 2 sang cọc 1  
> Chuyển đĩa B từ cọc 2 sang cọc 3  
> Chuyển đĩa C từ cọc 1 sang cọc 3  

VD: [Bài toán hà nội](https://github.com/quangnd512/CTDL-GT/blob/master/Thap-ha-hoi.cpp)  


## Danh sách (list)
> Các bài toán trên danh sách:  
> Tạo mới 1 danh sách  
> Thêm, sửa, xóa một phần tử vào danh sách  
> Tìm kiếm một phần tử trong danh sách  
> Sắp xếp thứ tự  
> Tách 1 danh sách thành nhiều danh sách  
> Sao chép danh sách  
> Nhập nhiều danh sách thành nhiều danh sách  

- Biểu diễn danh sách bằng mảng:  
	Ưu điểm: truy cập dễ dàng đến các phần tử  
	Nhược điểm: Không tối ưu được bộ nhớ  

- Danh sách liên kết  
	Gồm 2 thành phần:  
		Nút: chứa dữ liệu  
		Con trỏ:  để trỏ tới nút kế tiếp  
		
- Có 4 loại danh sách liên kết:  
	+ DS liên kết đơn:
	+ DS liên kết kép:
	+ DS liên kết vòng đơn:
	+ DS liên kết vòng kép:
	
## Ngăn xếp (Stack)

	