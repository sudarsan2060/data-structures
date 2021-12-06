#include<iostream>
using namespace std;


void tower(int n,char src, char dst,char helper)
{

    if(n==0)
    return ;
    tower(n-1,src,helper,dst);
    cout<<"move from "<<src<<"to"<<dst<endl;
    tower(n-1,helper,dst,src);
}
 int main()
 {
    tower(3,'A','B','C');
     return 0;
 }