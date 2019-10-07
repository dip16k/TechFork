#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> num;

	num.push_back(10);
	num.push_back(20);
	num.push_back(30);

	for(vector<int>::iterator it=num.begin(); it!=num.end(); it++)
	{
		cout<<*it<<endl;
	}
}

