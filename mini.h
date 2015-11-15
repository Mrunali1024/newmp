
/*****************************************************************************
 * Copyright (C) Abhijit A.M. abhijit13@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your o0ption) any later version.
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
	char sec[4];
	struct student *next;
	struct student *prev;
}student;

typedef struct books {
	int book_no;
	char book_name[35];
	char a_name[35];
	char p_name[35];
	char st;
	char stock;
	int add_book;

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
void return_book();
void issue_book();
void list_of_books();
void init (list *l);
//id add_book();

