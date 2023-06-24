#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8,5,0,10,0,20};
    int n = 8;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}