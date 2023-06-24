# include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=n-1 ;
    arr[i]=arr[i]+1;
    if(arr[i]>9)
    {
        arr[i]=0;
        arr[i-1]++;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}