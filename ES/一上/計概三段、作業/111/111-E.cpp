#include<iostream>
using namespace std;
int power();//�ȥ����ŧi��ƥB�{�����w��main,�L�k�ŧi��ƫ�S��main 
int main()
{
	cout<<"please enter  base x and exponent y"<<endl;
	cout<<"the answer is "<<power()<<endl;
}
int power()
{
	int x,y,r;//r=result 
	cin>>x>>y;
	r=x;
	for(int n=1;n<y;n++)
		r=r*x;
	return r;
}
