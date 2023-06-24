#include <iostream>
using namespace std;
int main()
{
    int nums[] = {3, 2,2,3};
    int k = 0;
    int val = 3;
    int count = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < count; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
           cout<<nums[k];
        }
       
    
    }
}
