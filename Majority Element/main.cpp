#include <bits/stdc++.h>

using namespace std;
int majorityElement (int nums[] , int numsSize)
{
    int countt =0,majority=0;
    for(int i=0;i<numsSize;i++)
    {
        if(countt==0)
            majority=nums[i];
        if(majority==nums[i])
            countt++;
        else
            countt--;

    }
    return majority;
}
int main()
{
    int arrSize;
    cin >> arrSize;
    int *arr=new int [arrSize];
    for(int i=0;i<arrSize;i++)
        cin >> arr[i];

    cout << majorityElement(arr,arrSize)<< "\n";

    return 0;
}
