
/***********************************************************************
 * Copyright (C) Abhijit A.M. abhijit13@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include<stdio.h>
#include"mini.h"
#define MIS 1
#define NAME 2
#define ADD 3
#define DOB 4
#define CLASS 5 
#define SEC 6
static int add_book;

void init(list *l) {
	l->head = NULL;	
        l->tail = NULL;
	l->length = 0;
}		
void add_student(list *l){
	int main_exit;
	student *info = (student *)malloc(sizeof(student));
	if(info == NULL){
		return;
	}

	printf("\n\n\t\t Membership data entry  ");
	printf("\n\t\t=========================\n\n");
	printf("enter your name (name only): \n");
	scanf("%s",info->name);
	printf("enter your mis: \n");
	scanf("%s",info->mis_no);
	printf("enter your address (without space): \n");
	scanf("%s",info->address);
	printf("enter your class: \n");
	scanf("%d",&info->class);
	printf("enter your sec: \n");
	scanf("%s",info->sec);
	printf("enter your dob (dd press enter; mm press enter; yy press enter): \n");
	scanf("%d%d%d",&info->dob.dd, &info->dob.mm, &info->dob.yy);
	printf("Enrolment successfully !!!\n\n");

	if(l->tail == NULL){
		info->next = NULL;
		info->prev = NULL; 
		l->head = l->tail = info;
	}
	else{
		l->tail->next = info;
		info->next = NULL;
		info->prev = l->tail;
	}

	l->tail = info;	
	l->length++;
	printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
                scanf("%d",&main_exit);

                if (main_exit == 1) {
                	mem_ship(l);
		}
                else if (main_exit == 2) {
                	exit(0);
		}
                else if(main_exit == 0) {
                	 add_student(l);   
		}
                else {
                	printf("\nInvalid!\a");
                }
	//free(info);
		
}

void delete_student(list *l){
	student *p;
	p = l->head;
	char mis[16];
	printf("plese enter your mis\n");
	
	scanf("%s",mis);
	if(p == NULL) {
	printf("records not found");
	printf("plzzz try again later !!!");
	}
	while(p != NULL){
		if(strcmp(mis,p->mis_no) == 0) {
			if(l->length == 1) {
				l->head = l->tail = NULL;
				free(p);
			}

		}
		p = p->next;
	}
	
	p->prev->next = p->next;
	p->next->prev = p->prev;
	
}

void modify_student(list *l){
	int flag = 0, main_exit;
	int choice;
	student *p;
	p = l->head;
	char mis[16];
	printf("plese enter your mis\n");
	scanf("%s",mis);
	while(p != l->tail){
		if(strcmp(mis,p->mis_no) == 0);
			break;
		p = p->next;
	}
	while(flag == 0){ 
		printf("what do you want to modify?\n");
		printf("enter 1 to change mis \n");
		printf("enter 2 to change name \n");
		printf(	"enter 3 to change address \n");
		printf(	"enter 4 to cange dob \n" );
		printf(	"enter 5 to change class \n");
		printf("enter 6 to change sec \n");
		scanf("%d", &choice);
		switch(choice){	
			case 1:
				printf("enter your new mis: \n");
				scanf("%s",p->mis_no);
				printf(" successfully changed !!!\n\n");
				break;	
	
			case 2:
				printf("enter your new name (name only): \n");
				scanf("%s",p->name);
				printf(" successfully changed !!!\n\n");
				break;
			
			case 3:
				printf("enter your new address (without space): \n");
				scanf("%s",p->address);
				printf(" successfully changed !!!\n\n");
				break;
			
			case 4:
				printf("enter your new dob (dd press enter; mm press enter; yy press enter): \n");
				scanf("%d%d%d",&p->dob.dd, &p->dob.mm, &p->dob.yy);
				printf(" successfully changed !!!\n\n");
				break;
	
			case 5 :
				printf("enter your new class: \n");
				scanf("%d",&p->class);
				printf(" successfully changed !!!\n\n");
				break;
	
			case 6:
				printf("enter your new sec: \n");
				scanf("%c",&p->sec);
				printf(" successfully changed !!!\n\n");
				break;
		}
		//printf("do you wants to again modify anything? \n");
		//printf("enter 0 for yes and 1 for no \n");
		//scanf("%d", &flag);
		printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
                scanf("%d",&main_exit);

                if (main_exit == 1) {
                	mem_ship(l);
		}
                else if (main_exit == 2) {
                	exit(0);
		}
                else if(main_exit == 0) {
                	 modify_student(l);  
		}
                else {
                	printf("\nInvalid!\a");
                }
	
	}
}



void issue_book(){
	char mis_no[16];
	int main_exit;
	//static int add_book;
	books *b;
	int book_no;
	printf("\n\nIssue of Books\n");
  	printf("^------------^\n\n");
	printf("Enter the book Number : ");
	scanf("%d", &book_no);

	if(book_no == 0){
		printf("no books are available");
		exit(0);
	}

	else{
		printf("Enter your mis no: ");
		scanf("%s", mis_no);
		printf("enter book number(without any space): \n");
		scanf("%d", &b->book_no);
		printf("enter book name(without any space): \n");
		scanf("%s", b->book_name);
		printf("enter author name(without any space): \n");
		scanf("%s", b->a_name);
		printf("enter publisher name (without any space): \n");
		scanf("%s", b->p_name);
		
		add_book++;
		b->add_book = add_book;
		printf("student having total no of books : %d ",b->add_book);	

	}
	printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);

                if (main_exit == 1) {
                	//mem_ship(l);
		}
                else if (main_exit == 2) {
                	exit(0);
		}
                else if(main_exit == 0) {
                	issue_book();  
		}
                else {
                	printf("\nInvalid!\a");
                }
}
 
void return_book(){
	char mis_no[16];
	books *b;
	int book_no,main_exit;
	
	printf("\n\nReturn of Books\n");
  	printf("   ^----------------^\n");
	printf("Enter the book Number: \n");
  	scanf("%d", &book_no);
	printf("Enter your mis no: ");
  	scanf("%s", mis_no);

	if(book_no == 0){
		printf("no books are available");
		exit(0);
	}	
	else{
		printf("Enter your mis no: ");
		scanf("%s", &mis_no);
		printf("enter book name: \n");
		scanf("%s", b->book_name);
		printf("enter author name: \n");
		scanf("%s", b->a_name);
		printf("enter publisher name: \n");
		scanf("%s", b->p_name);		

		add_book--;
		b->add_book = add_book;
		printf("student having total no of books : %d ",b->add_book);	

	}
	printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
                scanf("%d",&main_exit);

                if (main_exit == 1) {
                	//mem_ship(l);
		}
                else if (main_exit == 2) {
                	exit(0);
		}
                else if(main_exit == 0) {
                	  return_book();  
		}
                else {
                	printf("\nInvalid!\a");
                }
}

void total_book(){
	
	char ch;
	char file_name[25];
	FILE *fp;
	   
	printf("\nEnter the name of file \n");
	printf("NOTE :- write file name as lib_data");
	scanf("%s",file_name);
	fp = fopen(file_name,"r"); 

	if( fp == NULL ){
		printf("\aError Opening Library Data File.\n");
		return;
	}

	printf("\n    Total Books");
	printf("\n   =============");
	printf("\n\nTotal number of books are '30'\n\n\n");
	printf("List of books availabe in library\n");
	printf("=================================\n\n");
      	printf("\nBook No		Name		Author		Issued/Stock");
	printf("\n=====================================================================\n");
	while( ( ch = fgetc(fp) ) != EOF ){
		printf("%c",ch);
	}

	fclose(fp);
	return 0;	
	
}

