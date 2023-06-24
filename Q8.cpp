#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        if(arr[i]==arr[j])
        cout<<arr[i];
        if(arr[i])
    }
}