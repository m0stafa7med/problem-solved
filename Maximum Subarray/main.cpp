#include <iostream>

using namespace std;
int maxSubArr (int arr[],int n)
{
    int maxSum =arr[0],maxCurrent=arr[0];
    for(int i=1; i<n; i++)
    {
        maxCurrent=max(maxCurrent+arr[i],arr[i]);
        maxSum=max(maxSum,maxCurrent);
    }
    return maxSum;
}
int main()
{
    cout << "Enter array's size :";
    int arrSize;
    cin >> arrSize;
    int *array=new int [arrSize];
    for(int i=0; i<arrSize; i++)
        cin >> array[i];
    cout << "the max sum :  " << maxSubArr(array,arrSize) << "\n";

    return 0;
}
