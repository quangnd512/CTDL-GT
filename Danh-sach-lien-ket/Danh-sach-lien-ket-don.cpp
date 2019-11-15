#include<stdio.h>
#include<stdlib.h>

//khai bao kieu du lieu LinkedList
struct LinkedList{
	int data; 
	struct LinkedList *next; //Khoi tao con tro
	// *nextla con tro cua chinh no va tro toi 1 node ke tiep cung co kieu tuong tu kieu cua *next
};


typedef struct LinkedList *node; //Kieu du lieu LinkedList duoc thay the bang node

//Tao 1 note
node CreateNode(int value){
	node temp; //Khai bao 1 node
	temp = (node)malloc(sizeof())
}




