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
		Con trỏ: để trỏ tới nút kế tiếp  
		
- Có 4 loại danh sách liên kết:  
	+ DS liên kết đơn:
	+ DS liên kết kép:
	+ DS liên kết vòng đơn:
	+ DS liên kết vòng kép:  
	<img src="https://i.imgur.com/fc5Szfb.jpg">  
	Một danh sách thường cói 2 phần là phần danh sách chứa dữ liệu và vần liên kết chứa con trỏ
	
- Ứng dụng của danh sách là công 2 đa thức  


## Ngăn xếp (Stack)
- Ngăn xếp là dạng đặc biệt của danh sách mà việc thêm hay loại bỏ đều ở trên đầu ngăn xếp  

- Đặc tả của ngăn xếp:  
	Đặc tả dữ liệu:  
		Có nhiều nút và cùng 1 kiểu dữ liệu  
		Có đỉnh stack  
	Đặc tả các task vụ trên stack:  
		Initialize:  
			Chức năng: Khởi động stack  
			Dữ liệu nhập: Không  
			Dữ liệu xuất: stack top về vị trí ban đầu  
		Empty:
			Chức năng: Kiểm tra stack có rỗng hay không  
			Dữ liệu nhập: Không  
			Dữ liệu xuất: True or False  
		Push:  
			Chức năng: Thêm nút mới tại đỉnh stack  
			Dữ liệu nhập: Nút mới  
			Dữ liệu xuất: Không  
		Pop:
			Chức năng: Xóa nút tại đỉnh stack  
			Dữ liệu nhập: Không  
			Dữ liệu xuất: Nút bị xóa  
			Điều kiện: Stack không bị rỗng  
		Stacktop:  
			Chức năng: Truy xuất nút tại đỉnh stack  
			Dữ liệu nhập: Không  
			Dữ liệu xuất: Nút tại đỉnh stack  
			Điều kiện: stack không bị rỗng  
		Stacksize:  
			Chức năng: Xác định số nút hiện có trong stack  
			Dữ liệu nhập: Không  
			Dữ liệu xuất: Số nút hiện có trong stack  
		Clearstack:  
			Chức năng: Xóa tất cả các nút ở trong stack  
			Dữ liệu nhập: Không  
			Dữ liệu xuất: Stack top về vị trí khởi đầu  
		Copystack:  
			Chức năng: Copy stack thành stack mới  
			Dữ liệu nhập: Stack nguồn  
			Dữ liệu xuất: Stack đích giống stack nguồn  
		
		Đặc điểm của stack:  
		 + Che dấu thông tin  
		 + Tính khả thi và hiệu quả của ứng dụng  
		 + Tính trong sáng của chương trình  
		 + Thiết kế từ trên xuống  

- Cài đặt stack
	+ Cài đặt ngăn xếp bằng mảng  
		B1: Khởi tạo stack  
		B2: Kiểm tra xem stack có rỗng hay không  
		B3: Bổ xung 1 phần tử của stack  
	+ Cài đặt ngăn xếp bằng danh sách liên kết  
		Đỉnh của stack là đầu của danh sách liên kết (phần tử cuối danh sách)  
		Phần tử cuối cùng là phần tử null  
		Kiểm tra xem con trỏ có bằng null hay không  
		
		
## Hàng đợi