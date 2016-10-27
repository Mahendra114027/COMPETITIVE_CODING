#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
	{
	    int N,count_1=0;
	    string ip;
	    cin>>N;
	    cin>>ip;
	    count_1=count(ip.begin(),ip.end(),'1');
	    cout<<count_1<<endl;
	}
    return 0;
}
