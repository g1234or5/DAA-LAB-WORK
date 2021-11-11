#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int n,i,res=0;
    cin>>n;
    int x;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            res=i;
            x=i+1;
        }
    }
    
    if(res==0)
    {
        cout<<"Not Found!"<<endl;
    }
    else
    {
         cout<<"The element is at "<<res<<"th index."<<endl;
         cout<<x<<" elements are compared.";
    }
}
