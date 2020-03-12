//Implement recursive linear search algorithm.

#include<iostream>
using namespace std;


int search(int *a,int n,int sear)
{    
      if(n-- <0){
      return 0;
      }
      else if(a[n]==sear){
      return 1;
      }
      else{
      return search(a,n,sear);
      }
}

int main()
{
    int i,n,sear,res,flag;
    cout<<"Enter No of elements : ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Element : ";
        cin>>a[i];
    }
    cout<<"\nEnter Element to be search : ";
    cin>>sear;
    flag= search(a,n,sear);
    if(flag==0)
    cout<<"\nElement NOT FOUND..."; 
    else
    cout<<"\nElement FOUND...";
       
    
    return 0;
}