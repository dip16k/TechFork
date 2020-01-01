#include<iostream>
using namespace std;

class Abc {
	public:
		Abc(){
		cout<<"constructor"<<endl;
	}
	static int a;
	static Abc *p;
	int getVal()
	{
		return a;
	}	
	~Abc()
	{
		cout<<"destructor"<<endl;
	}
};
int Abc::a = 10;
int main()
{
	Abc obj;
	cout<<obj.getVal()<<endl;
}
