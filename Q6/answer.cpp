#include<bits/stdc++.h>

using namespace std;

int64_t findMax(priority_queue<int64_t> p, int k){
	int64_t ans = 0;
    while(k--)
    {
        int64_t x = p.top();
        p.pop();
        ans += x;
        p.push(x/2);
    }
    return ans;
}

int64_t a[1000000];
int main()
{	
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        priority_queue <int64_t> pq;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        
        cout<<findMax(pq,k)<<endl;
    }
    return 0;
}

