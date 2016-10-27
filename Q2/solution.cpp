#include <iostream>

using namespace std;

int main()
{
    int A[101]{},rem[100]{},n,k,i,cnt=0;
    cin>>n>>k;
    for(i=0;i<n;++i)
    {
        cin>>A[i];
        A[i]%=k;
        rem[A[i]]++;
    }
    for(i=0;i<n;++i)
    {
        rem[A[i]]--;
        cnt+=rem[(k-A[i])%k];
    }
    cout<<cnt;
    return 0;
}
