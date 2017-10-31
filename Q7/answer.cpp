#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 10;
    cin>>n;
    vector<int> v(200,0);
    v[0] = 1;

    int carry=0, index=1;
    for(int k=1;k<=n;k++)
    {
    	for(int i=0;i<index;i++){
	    	int product = k*v[i] + carry;
	    	v[i] = product%10;
	    	carry = product/10;
	    }
	    while(carry)
	    {
	    	v[index++]=carry%10;
	    	carry /= 10;
	    }
    }
    for(int i=index-1;i>=0;i--)
    	cout<<v[i];
    cout<<endl;
    return 0;
}