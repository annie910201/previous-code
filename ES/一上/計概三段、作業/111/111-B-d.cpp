#include<iostream>
using namespace std;
int main()
{
	int counter;
	cin>>counter;
	switch(counter%2) //�����o�� 
	{
		case 0:
			cout<<"An even integer."<<endl;//casec�᭱�u��O�r���μƦr�A����O���� 
			break;
		case 1:
			cout<<"An odd integer."<<endl;
			break;
	}
	return 0;
}
