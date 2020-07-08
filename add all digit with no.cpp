#include<iostream>
using namespace std;
main()
{
    int n,rem,k,res=0,t=0;
    cout<<"Enter the no\t";
    cin>>n;
    cout<<"Enter the number to be added\t";
    cin>>k;
    while(n>0)
    {
        rem=n%10;
        t=t*10+rem;
        n=n/10;
    }
    while(t>0)
    {
        rem=t%10;
        rem=rem+k;
        rem>9?res=res*100+rem:res=res*10+rem;
        t=t/10;
    }
    cout<<"Result---->"<<res;
}
