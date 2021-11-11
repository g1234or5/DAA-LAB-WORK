#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int n,left=0,right=9,mid,res=0;
    int com=0;
    cin>>n;
    while(left<=right)
    {
        mid=(left+right)/2;
        com++;
        if(arr[mid]==n)
        {
            res=mid;
            break;
        }
        else if(arr[mid]<n)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    if(res==0)
    {
        cout<<"Not Found!"<<endl;
    }
    else
    {
        cout<<"The element is at "<<res<<"th index"<<endl;
        cout<<com<<" elements are compared.";
    }
}
