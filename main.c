#include<stdio.h>
#include<stdlib.h>
#include"mini.h"
void main() {
	int choice;
	printf("\t\tStudent Library System\n");
	printf("1. Membership\n");
	printf("2. Issue/Return Books\n");
	printf("3. List of Books \n");
	printf("4. Quit from Library\n");
	printf("Enter your choice : \n");
	scanf("%d", &choice);
	switch(choice){   
		case 1:
			mem_ship(list *l);
		  	break;
	  	case 2:				
			issue_return();
			break;
	        case 3:
			list_of_books();
			break;
		case 4:
			return 0;
			break;
		default:
			break;
	}
}

void mem_ship(list *l){
	int choice;
	printf("\tMembership\n");
	printf(" ************\n");
	printf("1.Add Members\n");
	printf("2. Delete Members\n");
	printf("3. Modify Members\n");
	printf("4. Back to previous Menu\n\n");
	printf("\n  Enter your choice : ");
	scanf("%d", &choice);

	switch(choice) {
		
		case 1:
			add_student(list *l);
			break;
	   	case 2:
			delete_student(list *l);
			break;
		   	case 3:
			modify_student(list *l);
				break;

		 	case 4:
				break;

		   	default:
				break;

		}
}
	
void issue_return_book(){
	int choice;

		printf("\t\tAdd/Issue/Return Books\n");
		printf("**********************\n");
		printf("1. Issue Books\n");
		printf("2. Return Books\n");
		printf("3. Back to previous Menu\n\n");
		printf("\n Enter your choice : ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				issue_book();
				break;

			case 2:
				return_book();
				break;

			case 3:
				break;

		  	default:	
				break;
		}
	
}

void list_of_books(){
	int choice;
	

		printf("List of Books\n");
		printf("*************\n");
		printf("1. Total Books\n");
		printf("2. Books Issued\n");
		printf("3. Books in stock\n");
		printf("4. Back to Previous Menu.\n\n");
		printf("  Enter your Choice : ");
		scanf("%d", &choice);

	     	switch (choice){
			case 1:
				total_book();
				break;

		    	case 2:
			 	stock_issue_book();
			 	break;

		    	case 3:
				 stock_issue_book();

			case 4:
				break;

			default:
				break;
		}
	
}

