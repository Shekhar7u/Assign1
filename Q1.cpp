#include <iostream>
using namespace std;    
int main()
{
    int array[] = {2,7,11,15};
    int target=30;
    int n=sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            if(array[i]+array[j] == target)
            cout<<i<<" "<<j<<endl;
            else{
                cout<<"no index found ";
            }
        }
        
    }
    
}