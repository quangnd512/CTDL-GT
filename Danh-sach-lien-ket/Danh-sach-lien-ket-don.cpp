#include<stdio.h>
#include<stdlib.h>

//khai bao kieu du lieu LinkedList
struct LinkedList{
	int data; 
	struct LinkedList *next; //Khoi tao con tro
	// *next la con tro cua chinh no va tro toi 1 node ke tiep cung co kieu tuong tu kieu cua *next
};
typedef struct LinkedList *node; //Kieu du lieu LinkedList duoc thay the bang node


//Tao 1 note
node CreateNode(int value){
	node temp; //Khai bao 1 node
	temp = (node)malloc(sizeof(struct LinkedList)) //Cap phat vung nho malloc()
	/*
	malloc = new trong huong doi tuong
	*/
	/*
	Su dung malloc:
		Khi su dung malloc phai tính toán kích thuoc vung nho can cap phat truoc roi truyen vao cho malloc
		Khi su dung calloc chi can truyen vào so phan tu va kich thuoc 1 phan tu, thi calloc se tu dong tinh toan va cap phat vung nho can thiet
	
	Vi du: Cap phat mang 10 phan tu kieu int:
		int *a = (int *) malloc( 10 * sizeof( int ));
		int *b = (int *) calloc( 10, sizeof( int ));
	*/
	/*
	Su an toan:
		Su dung calloc an toan hon malloc vi sau khi khoi tao vùng nho thi calloc se khoi tao vung nho cap phat = 0,
		con vung nho do malloc cap phat vung chua gia tri rac nen se de gay ra loi neu truy xuat toi vung nho nay truoc khi gan cho no mot gia tri xac dinh.
	*/
	
	//sizeof la ham tra ve kich thuoc cua kieu du lieu, dung lam tham so cho ham malloc
	temp->next = NULL; //Cho next tro toi null
	temp->data = value; //Gan gia tri cho Node
	return temp; //Tra ve gia tri
}


//Them node vao dau danh sach
/*
Huong giai quyet:
Viec them vao dau chinh la viec cap nhat lai thang head. Ta goi Node moi(temp), ta co:
	Neu head dang tro toi NULL, nghia la linked list dang trong, Node moi them vao se làm head luôn
	Nguoc lai, ta phai thay the thang head cu bang head moi. Viec nay phai lam theo thu tu nhu sau:
		Cho next cua temp tro toi head hien hanh
		Ðat temp lam head moi
*/
node AddHead(node head, int value){
    node temp = CreateNode(value); // Khoi tao node temp voi data = value
    if(head == NULL){
        head = temp; // //Neu linked list dang trong thi Node temp la head luon
    }else{
        temp->next = head; // Tro next cua temp = head hien tai
        head = temp; // Ðoi head hien tai = temp(Vi temp bay gio là head moi)
    }
    return head;
}


//Them vao cuoi
/*
Huong giai quyet:

*/

