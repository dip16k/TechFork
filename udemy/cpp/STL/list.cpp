#include<iostream>
#include<list>

using namespace std;

int main()
{
	list <int> num;

	num.push_back(10);
	num.push_front(20);
	num.push_back(30);

	for(list<int>::iterator it=num.begin(); it != num.end(); it++)
	{
		cout<<*it<<endl;
	}
}
