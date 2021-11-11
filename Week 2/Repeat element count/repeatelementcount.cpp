#include<iostream>
using namespace std;
int binary_search(int *arr, int f, int r, int k){
    if(f>r){
        return -1;
    }
    int mid = (f+r)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]<k){
        return binary_search(arr, mid+1, r, k);
    }
    else 
        return binary_search(arr, f, mid-1, k);
}
int repeating_element_count(int *arr, int n,int k){
    int i, c=1;
    int pos = binary_search(arr, 0, n-1, k);
    if(pos==-1) 
        return -1;
    for(i=0;i<pos;i++){
        if(arr[i]==k) 
            c++;
    }
    for(i=pos+1;i<n;i++){
        if(arr[i]==k) 
            c++;
    }
    return c;
}
int main(){
    int t, n, i, k;
    cin >> t;
    while(t>0){
        cin >> n;
        int* arr = new int[n];
        for(i=0; i<n; i++){
            cin >> arr[i];
        }
        cin >> k; 
        int res = repeating_element_count(arr, n, k);
        if(res!=-1){
            cout << k << " is present " << res <<" number of times."<<endl;
        }
        else{
            cout << "Not Present" << '\n';
        }
        --t;
    }
    return 0;
}
