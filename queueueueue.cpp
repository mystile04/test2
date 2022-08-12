#include <iostream>
#include <stdlib.h>
#define s 7
#include <string.h>
using namespace std;
int front=-1;
int rear=-1;
int a[s];
int b[s];
string c[s];
bool empty()
{
	if(front==-1&&rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool full()
{
	if(rear==s-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void enqueue(int v, char vv[30], int vvv)
{
	if(full())
	{
		cout<<"the queue is full:"<<endl;
	}
	else
	{
		if(front==-1)
		{
		front=0;
		}
		rear++;
		a[rear]=vvv;
		b[rear]=v;
		c[rear]=vv;
		cout<<"id:"<<v<<"\nname:"<<vv<<"\ngrade:"<<vvv<<"\nis added:"<<endl;
		cout<<endl;
	}
}
void dequeue()
{
	if(empty())
	{
		cout<<"the queue is empty:"<<endl;
	}
	else
	{	
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		cout<<a[front]<<" is deleted:"<<endl;
		front++;
	}
}
void showfront()
{
	if(empty())
	{
		cout<<"the queue is empty:"<<endl;
	}
	else
	{	
		cout<<a[front]<<" is the front:"<<endl;
	}
}
void display()
{
	if(empty())
	{
		cout<<"the queue is empty:"<<endl;
	}
	else
	{	
		cout<<"showing all student:"<<endl;
		for(int i=front; i<=rear; i++)
		{
			cout<<"student:"<<c[i]<<endl;
			cout<<"grade:"<<a[i]<<endl;
			cout<<endl;
		}
	}
}
int main()
{
	char name[30];
	int num;
	int id,g;
	char n2;
	x:
	cout<<"1=add student:"<<endl;
	cout<<"2=delete student:"<<endl;
	cout<<"3=front student:"<<endl;
	cout<<"4=display all student:"<<endl;
	cout<<"5=exit:"<<endl;
	cout<<"select:";
	cin>>num;
	if(num==1)
	{
		system("cls");
		cout<<"enter student id:";
		cin>>id;
		cin.ignore();
		cout<<"enter student name:";
		cin.getline(name,30);
		cout<<"enter "<<name<<"'s grade:";
		cin>>g;
		cout<<endl;
		cout<<"--===****************===--\n";
		cout<<endl;
		enqueue(id,name,g);
		goto x;
	}
	else if(num==2)
	{
		system("cls");
		dequeue();
		cout<<endl;
		goto x;
	}
	else if(num==3)
	{
		system("cls");
		showfront();
		cout<<endl;
		goto x;
	}
	else if(num==4)
	{
		system("cls");
		display();
		cout<<endl;
		goto x;
	}
	else if(num==5)
	{
		system("cls");
		return 0;
	}
	else
	{
		system("cls");
		cout<<"INVALID:"<<endl;
		cout<<endl;
		goto x;
	}
}

