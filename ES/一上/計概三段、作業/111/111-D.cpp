#include<iostream>
using namespace std;
void useLocal();
void useSL();
void useG();
int x=1;

int main()
{
	cout<<"global x in main is "<<x<<endl;
	int x=5;
	cout<<"local x in main's outer scope is "<<x<<endl;
	{
		int x=7;
		cout<<"local x in main's inner scope is"<<x<<endl;
	}
	useLocal(); useSL(); useG();
	useLocal(); useSL(); useG();
	cout<<"\nlocal x in main is "<<x<<endl;
}
void useLocal()
{
	int x=25;
	cout<<"\nlocal x is "<<x<<" in useLocal"<<endl;
	x++;
	cout<<"local x is "<<x<<" on exiting useLocal"<<endl;
}
void useSL()
{
	static int x=50;//syatic int ��Ʒ|�@���s�b��{�������A���]���o�Ө�ƬO�ϰ줺��ơA
	cout<<"\n x is "<<x<<" in useSL"<<endl;//�ҥH�u����o�Ӱϰ�A���Q�I�s�ɤ~���~��ϥΡA�]�N�O���A�Ĥ@�����}�O51,�ĤG���i�h���ȴN�O51 
	x++;
	cout<<"x is "<<x<<" on exiting useSL"<<endl;
}
void useG()
{
	cout<<"\n x is "<<x<<" in useG"<<endl;
	x*=10;
	cout<<"x is "<<x<<" on exiting useG"<<endl;
}
