#include <iostream>
#include <cstring>
using namespace std;
void output_ratio(char[]);
int main()
{
    int n;
    cin>>n;
    char web[200][200];
    cin.get();
    for(int i=0;i<n;i++)
      gets(web[i]);
    for(int i=0;i<n;i++)
        output_ratio(web[i]);

    return 0;
}
void output_ratio(char a[])
{
    int cal=4;
 for(int i=4;!(a[i]=='.'&&a[i+1]=='c'&&a[i+2]=='o'&&a[i+3]=='m');i++)
 {
     if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
        cal++;
 }

 cout<<cal<<"/"<<strlen(a)<<"\n";

}
