#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int rolldice();

int main()
{
	srand(time(0));//�@�}�l���x�ؤl 
	int n,sumofdice;
	cin>>n;
	for(int y=1;y<=n;y++)
	{
    sumofdice=rolldice();//�̭��o�˥N��C�����n�srolldice�^�Ǥ@�ӭ�,�Ȫ�rand����U�ɶ��y�� 
	cout<<sumofdice<<endl;
    }
	
}
int rolldice()
{
	int die1=1+rand()%6;
	int die2=1+rand()%6;
	int die3=1+rand()%6;
	int sum;
	sum=die1+die2+die3;
	return sum;
}
