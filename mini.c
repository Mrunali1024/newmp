#include<stdio.h>
#include"mini.h"
#define MIS 1
#define NAME 2
#define ADD 3
#define DOB 4
#define CLASS 5 
#define SEC 6

void init(list *l) {
	l->head = NULL;	
        l->tail = NULL;
	l->length = 0;
}		
void add_student(list *l){
	student *info = (student *)malloc(sizeof(student));
	if(info == NULL){
		return;
	}

	printf("\n\n\t\t Membership data entry  ");
	printf("\n\t\t=========================\n\n");
	printf("enter your name: \n");
	scanf("%s",info->name);
	printf("enter your mis: \n");
	scanf("%s",info->mis_no);
	printf("enter your address: \n");
	scanf("%s",info->address);
	printf("enter your dob: \n");
	scanf("%d%d%d",&info->dob.dd, &info->dob.mm, &info->dob.yy);
	printf("enter your class: \n");
	scanf("%d",&info->class);
	printf("enter your sec: \n");
	scanf("%c",&info->sec);
	if(l->head == NULL){
		info->next = NULL;
		info->prev = NULL; 
		l->head = info;
	}
	else{
		l->tail->next = info;
		info->next = NULL;
		info->prev = l->tail;
	}
	l->tail = info;	
	l->length++;
	free(info);		
}

void delete_student(list *l){
	student *p;
	p = l->head;
	char mis[16];
	printf("plese enter your mis");
	scanf("%s",mis);
	while(p != l->tail){
		if(strcmp(mis,p->mis_no) == 0);
		break;
		p = p->next;
	}
	p->prev->next = p->next;
	p->next->prev = p->prev;
}

void modify_student(list *l){
	int flag = 0;
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
				break;	
	
			case 2:
				printf("enter your new name: \n");
				scanf("%s",p->name);
				break;
			
			case 3:
				printf("enter your new address: \n");
				scanf("%s",p->address);
				break;
			
			case 4:
				printf("enter your new dob: \n");
				scanf("%d%d%d",&p->dob.dd, &p->dob.mm, &p->dob.yy);
				break;
	
			case 5 :
				printf("enter your new class: \n");
				scanf("%d",&p->class);
				break;
	
			case 6:
				printf("enter your new sec: \n");
				scanf("%c",&p->sec);
				break;
		}
		printf("do you wants to again modify anything? \n");
		printf("enter 0 for yes and 1 for no \n");
		scanf("%d", &flag);
	
	}
}
