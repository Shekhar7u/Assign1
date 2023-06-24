#include<iostream>
using namespace std;
int main()
{
    int num1[]={1,2,3,0,0,0};
    int num2[]={2,5,6};
    int m=sizeof(num1)/sizeof(num1[0]);
    int n=sizeof(num2)/sizeof(num2[0]);
    int arr[m+n];
    for(int i=0; i<m+n; i++)
    {
       
        if(i<m){
            arr[i]=num1[i];
        }
        else{
            arr[i]=num2[i-m];
        }
    }
    int k=0;
    for(int i=0; i<m+n; i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    

}