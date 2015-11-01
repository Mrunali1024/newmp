#include<stdio.h>

typedef struct s_date {
	int dd;
	int mm;
	int yy;
}s_date;
 
typedef struct student {
	
	char mis_no[16];
	char name[30];
	char address[30];
	s_date dob;
	int class;
	char sec[2];
	struct student *next;
	struct student *prev;
}student;

typedef struct books {
	int book_no;
	char book_name[35];
	char a_name[35];
	char p_name[35];
	char stock;
}books;

typedef struct list{
	student *head, *tail;
	int length;
}list;
void mem_ship(list *l);
void add_student(list *l);
void delete_student(list *l);
void modify_student(list *l);							
void issue_return_book();
//void return_book();
//id disp_book_name();
//issue_book();
void list_of_books();
//id total_book();
void init (list *l);
//id add_book();
//id box();
