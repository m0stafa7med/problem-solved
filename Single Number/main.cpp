#include <iostream>

using namespace std;
int singleNumber (int nums[],int n)
{
    int a=0;
    for(int j=0;j<n;j++)
        a^=nums[j];
    return a;
}
int main()
{
    cout << "Enter array's size : ";
    int arrSize;
    cin >> arrSize;
    int *arr=new int [arrSize];
    for(int i=0;i<arrSize;i++)
        cin >> arr[i];

    cout << "The number is : " << singleNumber(arr,arrSize) << "\n";


    return 0;
}

