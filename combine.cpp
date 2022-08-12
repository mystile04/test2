#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
using namespace std;
int main()
{

	queue<int>yearcode;
	queue<string>n;
	queue<string>program;
	queue<string>yyy;
	queue<int>tuition;
	queue<int>misc;
	string pg,yy;
	int age,code;
	int pc,yc,enrol;
	int pcfee,td;
	int gt;
	char a[10];
	string name;
	char si;
	while(code!=3)
	{
	cout<<"student to process:("<<n.size()<<")student processed("<<n.size()<<"):"<<endl;
	cout<<"last student you processed:"<<endl;
	cout<<"1=add student:"<<endl;
	cout<<"2=serving number:"<<endl;
	cout<<"3=exit:"<<endl;
	cout<<"select:";
	cin>>code;
	if(code==1)
	{
		system("cls");
	cin.ignore();
	cout<<"enter student name:";
	getline(cin,name);
	n.push(name);
	prog:
	cout<<"enter student program code:";
	cin>>pc;
	if(pc==1001)
	{
		pg = "BSIT";
		pcfee = 5000;
		tuition.push(pcfee);
		program.push(pg);
	}
	else if(pc==1002)
	{
		pg = "BSCS";
		pcfee = 6000;
		tuition.push(pcfee);
		program.push(pg);
	}
	else if(pc==1003)
	{
		pg = "BSIS";
		pcfee = 3000;
		tuition.push(pcfee);
		program.push(pg);
	}
	else if(pc==1004)
	{
		pg = "BSCPE";
		pcfee = 7000;
		tuition.push(pcfee);
		program.push(pg);
	}
	else
	{
		cout<<"invalid code:"<<endl;
		goto prog;
	}
	year:
	cout<<"enter student year code:";
	cin>>yc;
	if(yc==1001)
	{
		yy = "first year";
		td = 190;
		misc.push(td);
		yyy.push(yy);
	}
	else if(yc==1002)
	{
		yy = "second year";
		td = 200;
		misc.push(td);
		yyy.push(yy);
	}
	else if(yc==1003)
	{
			yy = "third year";
		td = 220;
		misc.push(td);
		yyy.push(yy);
	}
	else if(yc==1004)
	{
		yy = "fourth year";
		td = 250;
		misc.push(td);
		yyy.push(yy);
	}
	else
	{
		cout<<"invalid code:"<<endl;
		goto year;
	}
	cout<<"enter unit enrolled:";
	cin>>enrol;
	cout<<"student("<<n.back()<<") is added to the list:"<<endl;
	cout<<endl;
}
	else if(code==2)
	{
		system("cls");
		cout<<"now serving student: no."<<n.size()<<endl;
		cout<<"display student info?(Y/N):";
		cin>>si;
		if(si=='y'||si=='Y')
		{
			cout<<"student name:"<<n.back()<<endl;
			cout<<"student program:"<<program.back()<<endl;
			cout<<"student year:"<<yyy.back()<<endl;
			cout<<"student tuition:"<<tuition.back()<<endl;
			cout<<"student misc:"<<misc.back()<<endl;
			gt = td+pcfee;
			cout<<"student grand total:"<<gt<<endl;
		}
		
	}
	else if(code==3)
	{
		cout<<"showing all transaction:"<<endl;
	}
	
}
	
}
