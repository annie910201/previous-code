#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	//double x;
	int x, y;
    double r;
    cin>>x>>y;
    r=static_cast<double>(x)/y;//��x�নdouble,y�|��ۥHdouble�Φ��p��,��X�Ӫ�r��
    cout<<fixed<<showpoint<<x<<endl;//�Yx,y��int,�h�Hint�p��A�Gr�X�Ӥ]�Oint(���M�������Odouble) 
    cout<<r;
    return 0;
}
