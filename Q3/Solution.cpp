#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,i,j,k,x,cnt,ind;
    string a,b;
    cin>>t;
    for(i=0;i<t;i++){
    	cin>>a>>b;
    	for(j=0;j<b.length();j++){
    		if(b[j]=='A')
    			b[j]='T';
    		else if(b[j]=='T')
    			b[j]='A';
    		else if(b[j]=='G')
    			b[j]='C';
    		else if(b[j]=='C')
    			b[j]='G';
    	}
    	k=0;
    	ind=0;
    	for(j=0;j<=(abs(a.length()-b.length()));j++){
    		k=j;
    		x=0;
    		cnt=0;
    		while(a[k]==b[x] && cnt<b.length()){
    			k++;x++;cnt++;
    		}
    		
    		if(cnt==b.length()){
                cout<<"YES at index "<<j<<endl;
                ind=1;
    		}
    	}
    	if(ind!=1){
            cout<<"NO"<<endl;
    	}
    }
    return 0;
}
