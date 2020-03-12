//Implement non-recursive linear search algorithm.

#include<iostream>
using namespace std;

int main()
{
    int i,n,search,flag=0;
    cout<<"Enter No of elements : ";
    cin>>n;
    int a[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"Element : ";
        cin>>a[i];
    }
    cout<<"\nEnter Element to be search : ";
    cin>>search;
    for ( i = 0; i < n; i++)
    {
        if(search==a[i])
        {
        cout<<"\nElement "<<a[i]<<" found at position " <<i;
        flag =1;
        }
    }
    if(flag==0)
    cout<<"\nElement NOT FOUND...";    
    
    return 0;
}