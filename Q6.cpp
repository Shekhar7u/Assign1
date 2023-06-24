# include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2};
    int n= 4;
    for(int i=0; i<3;i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(arr[i]!=arr[j])
            {
               
               continue;
            }
            else{
                cout<<"true";
                break;
                
            }
        
        }
        
    }
}