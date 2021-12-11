/* count inversion is  no of elements are less than the element
  i.e if i th element is current element ,
  count inversion is no.of elements are less than ith element fro m i+1 position*/

  #include<bits/stdc++.h>
  using namespace std;

long long mearge(int a[],int l,int mid,int r)
{ 
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int b[n1],c[n2];
    for(int i=0;i<n1;i++)
    {
        b[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        c[i]=a[mid+1+i];
    }

    int i=0,j=0,k=l;
    
    while(i<n1&&j<n2)
    {
        if(b[i]<c[j])
        {a[k]=b[i];
       k++; i++;}
        
        else
        {
          a[k]=c[j];
          k++;
          j++;
          inv += n1-i;
        }
    }

    while(i<n1)
    {
        a[k]=b[i];
        k++;i++;
    }
    while(j<n2)
    {
        a[k]=c[j];
        k++;j++;
    }
    return inv;
}
 long long meargesort(int a[],int l,int r)
  { 
      long long inv=0;
      if(l<r)
      {
          int mid=(l+r)/2;
         inv += meargesort(a,l,mid);
         inv += meargesort(a,mid+1,r);
         inv += mearge(a,l,mid,r);
      }
      return inv;
  }

int main()
{
    int a[]={3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout << meargesort(a,0,n-1);
    return 0;
}

/***  out put  *//
  3
  
  // (3,2)  ,(3,1) ,(2,1)   these are the inversions 
