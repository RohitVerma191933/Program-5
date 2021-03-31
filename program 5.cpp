#include<iostream>
using namespace std;
class account
{
	public:
		string name,type;
		int ac,w,d,b,i;
		void input()
		{
			cout<<"ENTER ACCOUNT HOLDER NAME: ";  cin>>name;
			cout<<"ACCOUNT NUMBER: ";  cin>>ac;
			cout<<"TYPE OF ACCOUNT: ";  cin>>type;
			cout<<"BALANCE IN THE ACCOUNT: "; cin>>b;
		}
		void display()
		{
			int n;
			float intrest,rate,time;
			cout<<"1. FOR PERSONAL INFORMATION . "<<endl<<"2. FOR MONEY DEPOSITION."<<endl<<"3. FOR MONEY WITHDRAWL"<<endl;
			cout<<"Enter n: ";
			cin>>n;
			cout<<endl;
			switch(n)
				{
					case 1:
						cout<<"Name: "<<name<<endl<<"Account number: "<<ac<<endl<<"Net Balance: "<<b<<endl<<"Type of account: "<<type<<endl;
						break;
					case 2:
						cout<<"DEPOSIT: ";  cin>>d;
						b=b+d;
						cout<<"Balance: "<<b<<endl;
						cout<<"RATE: ";  cin>>rate;
						cout<<"TIME: ";  cin>>time;
						intrest=(b*rate*time)/100;
						cout<<"Net Balance: "<<b+intrest;
						break;
					case 3:
						cout<<"Withdraw: ";  cin>>w;
						b=b-w;
						cout<<"Balance: "<<b<<endl;
						cout<<"RATE: ";  cin>>rate;
						cout<<"TIME: ";  cin>>time;
						intrest=(b*rate*time)/100;
						cout<<"Net Balance: "<<b+intrest;
						break;
					default:
						cout<<"Net Balance: "<<b;	
				}
				cout<<endl;
				if(b<=500)
			{
				cout<<"Balance is insufficient.";
			}
		};
};
int main()
{
	account a1;
	a1.input();
	a1.display();
}
