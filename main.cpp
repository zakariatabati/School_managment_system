#include<stdio.h>
#include "function.h"
#define T_max 500
int main()
{
	int c;
	int n=0;
	student T[T_max];
	do
	{
		printf("             Student Managment system\n ");
		printf("             ------------------------\n");
		printf("                    Main Menu         \n");
		printf("             ------------------------ \n");
		printf("             1 - add new student       \n");
		printf("             2 - show all students      \n");
		printf("             3 - search student          \n");
		printf("             4 - edit student           \n");
		printf("             5 - delete student         \n");
		printf("             6 - delete all students    \n");
		printf("             7 - user guideline         \n");
		printf("             8 - about us            \n");
		printf("             9 - clear screen             \n");
		printf("             10 - Exit               \n");
		printf("             ------------------------ \n");
		printf("             Enter your choice : ");
		scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(n>=T_max)
			{
				printf("storage space is full\n");
				break;
			}
			add_student(&T[n]);
			n++;
			break;
		case 2 : 
			show_student(T,n);
			break;
		case 3 :
			int a;
			printf("enter student id : ");
			scanf("%d",&a);
			search_student(T,a,n);
			break;
		case 4 : 
			int b;
			printf("enter student id : ");
			scanf("%d",&b);
			student_edit(T,b,n);
			break;
		case 5 : 
			int x;
			printf("enter student id : ");
			scanf("%d",&x);
			delet_student(T,x,n);
			n--;
			break;
		case 6 :
			delete_all_student(&n);
			break;
		case 7 : 
			guide();
			break;
		case 8 :
			aboutus();
			break;
		case 9:
			clear();
			break;
		default : 
			if(c!=10)
				printf("System error !!!!\n");	
	}	
	}while(c!=10);
	return 0;
}
