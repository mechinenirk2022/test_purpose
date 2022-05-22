#include<iostream>
using namespace std;
int add(int x,int y);
int sub();
void mul(int x,int y);
void div();
void mdiv(int x,int y);
int main()
{
	int a,b,c,d=0,e;
	while(d!=6)
	{
		cout<<"Please select option:"<<endl<<"1.add 2.sub 3.mul 4.div 5.mdiv 6.exit"<<endl;
		cin>>a;
		switch (a)
		{
		case 1:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				e=add(b,c);
				cout<<"addition= "<<e<<endl;
				break;
			}
		case 2:
			{
				e=sub();
				cout<<"subtraction= "<<e<<endl;
				break;
			}
		case 3:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				mul(b,c);
				//cout<<"multiplication= "<<b*c<<endl;
				break;
			}
		case 4:
			{
				div();
				break;
			}
		case 5:
			{
				cout<<"1st number=";
				cin>>b;
				cout<<"2nd number=";
				cin>>c;
				mdiv(b,c);
				break;
			}
		case 6:
			{
				d=6;
				break;
			}
		default:
			{
				cout<<"Wrong selection"<<endl<<"Please select again"<<endl;
				break;
			}
		}
	}
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int sub()
{
	int z,b,c;
	cout<<"1st number=";
	cin>>b;
	cout<<"2nd number=";
	cin>>c;
	z=b-c;
	return z;
}
void mul(int x,int y)
{
	int z;
	z=x*y;
	cout<<"multiplication= "<<z<<endl;
}
void div()
{
	int z,b,c;
	cout<<"1st number=";
	cin>>b;
	cout<<"2nd number=";
	cin>>c;
	if(c==0)
		cout<<"Input error"<<endl;
	else
	{
		z=b/c;
		cout<<"division= "<<z<<endl;
	}
}
void mdiv(int x,int y)
{
	if(y==0)
		cout<<"Input error"<<endl;
	else
		cout<<"m.division= "<<x%y<<endl;
}