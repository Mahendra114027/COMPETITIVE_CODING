#include <iostream>

#define SUCCESS 0

using namespace std;
 
int main()
{
    int n,a[1000],s,d,i,flag=0,cnt=0,ind;
    cin>>n;
    for(i=1;i<=n;i++){
    	cin>>a[i];
    }
    cin>>s>>d;
    ind=s;
    while(flag==0 && cnt<n){
    	if(ind==d){
    		flag=1;
    		break;
    	}
    	ind=a[ind];
    	cnt++;
    }
    if(flag==1)
    	cout<<"Possible";
    else
    	cout<<"Not_Possible";
    return SUCCESS;
}
