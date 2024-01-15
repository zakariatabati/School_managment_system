#include<stdio.h>
#include<unistd.h>
typedef struct {
	int id;
	char email[20];
	float note;
}student ;
void clear()
{
	system("@cls||clear");
}
void aboutus()
{
	printf("My name is Zakaria Tabati I'm Engineering student at the National School of Applied Sciences of Marrakech \n");
	printf("My Github : https://github.com/zakariatabati \n");
	printf("My Linkedin  : www.linkedin.com/in/zakariatabati \n");
	
}
void guide()
{
	printf("-> You will only be able to store the student's ID , Email , Note \n");
	printf("-> student Id unique for every student \n");
	printf("-> student email can be maximum of 20 charachters long and unique for every student \n");
	printf("-> maximum students you can store 500 students \n");
	printf("-> for search student or edit , delete use him/her   student id \n");
	printf("Thanks for read user Guideline \n");
}
void show(student *T,int i)
{
	printf("----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("             Student Id                  ||             Student Email                  ||             Moyene                  \n");
	printf("------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("     %d                                                %s                                             %f\n",T[i].id,T[i].email,T[i].note);
	printf("----------------------------------------------------------------------------------------------------------------------------------\n");
	
	
}
void add_student(student *T)
{
	printf("enter student id : ");
	scanf("%d",&(T->id));
	printf("enter student email : ");
	scanf("%s",&(T->email));
	printf("enter student moyene : ");
	scanf("%f",&(T->note));
	
}
void show_student(student *T,int n)
{
	printf("----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("             Student Id                  ||             Student Email                  ||             Moyene                  \n");
	printf("------------------------------------------------------------------------------------------------------------------------------------\n");
	for(int i=0;i<n;i++)
	{
		printf("     %d                                                %s                                             %f\n",T[i].id,T[i].email,T[i].note);
		printf("\n");
	}
	printf("----------------------------------------------------------------------------------------------------------------------------------\n");
} 
void search_student(student *T,int id,int n)
{
	bool flag =0;
	for(int i=0;i<n;i++)
	{
		if(id == T[i].id)
		{
			flag = 1;
			show(T,i);
			
		}
	}
	if(flag ==0)
	{
		printf("this student not exist \n");
	}
}
void student_edit(student *T,int id,int n )
{
	int i=0;
	for(;i<n;i++)
	{
		if (T[i].id == id)
		{
			break;
		}
	}
	int c;
	printf("if  you want to change id select ->1 , email ->2, Note ->3   : ");
	scanf("%d",&c);
	if(c==1)
	{
		printf("enter new id : ");
		scanf("%d",&(T[i].id));
	}
	else if(c==2)
	{
		printf("enter new Email : ");
		scanf("%s",&(T[i].email));
		
	}
	else
	{
		printf("enter new note  : ");
		scanf("%f",&(T[i].note));
	}
}
void delet_student(student *T,int id,int n)
{
	int i=0;
	bool flag =0;
	for(;i<n;i++)
	{
		if(T[i].id==id)
		{
			flag=1;
			break;
		}
	}
	if(flag ==0)
	{
		printf("this student not exist \n ");
		return ;
	}
	for(int j=i;j<n;j++)
	{
		T[j] = T[j+1];
	}
	
}
void delete_all_student(int *n)
{
	*n = 0;
}
