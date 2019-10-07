#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string,int> dic;
	dic["dip"] = 10;
	dic["pikku"] = 20;

	for(map<string,int>::iterator it = dic.begin(); it != dic.end(); it++)
	{
		cout<<it->first<<' '<<it->second<<endl;
	}	
}
