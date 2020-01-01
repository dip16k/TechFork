#include<iostream>

using namespace std;

class Abc 
{
	static Abc *obj;
	public:
	static Abc *getInstance()
	{
		cout<<"get instance"<<endl;
		if(obj == NULL) {
			obj = new Abc();
			return obj;
		}	
	}
	private:
		Abc(){
			cout<<"private constructor"<<endl;
		}
};

Abc *Abc::obj = NULL;

int main()
{
		Abc *p=Abc::getInstance();
		return 0;
}
