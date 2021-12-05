#include<iostream>
using namespace std;

void primefsieve(int n)
{
    int sf[100]={0};
    for(int i=2;i<=n;i++)
    {
        sf[i]=i;
    }
   

    for(int i=2;i<=n;i++)
    {
        if(sf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                  if(sf[j]==j)
                  {sf[j]=i;}
            }
        }
    }
    while(n!=1)
    {
        cout<<sf[n]<<" ";
        n=n/sf[n];
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    primefsieve(n);
    return 0;
}