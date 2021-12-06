
#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    { 
        return ;
    }
       // cout<<n<<" ";         //for descending order
       print(n-1);

       cout<<n<<" ";            //for acending order

}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}