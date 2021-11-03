
#include <iostream>

using namespace std;
/*************************************** swaping  numbers*******************************************/
void swap(int*p,int*q){
    int temp=*p;
    *p=*q;*q=temp;
}

/**************************************arrangment of array ************************************/
void rarrang(int a[],int n){
    int i=-1;
                                /***************************first make +ve and -ve separate***************/
    for(int k=0;k<n;k++){
        if(a[k]<0){i++;
            swap(&a[i],&a[k]);
            
        }
        
    }
    int pos=i+1,neg=0;
                                  /*********************swap alternate elements with +ve **************/
    while(pos<n&&neg<pos&&a[neg]<0){
        swap(&a[neg],&a[pos]);
        pos++;
        neg+=2;
    }
}



int main()
{
   
   int a[]={1,2,3,4,-5,-6,-2,-7,-8};
   int n=sizeof(a)/sizeof(a[0]);
   
   rarrang(a,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

    return 0;
}

/*****************output*********************/
2 -6 3 -7 4 -5 1 -8 -2 
