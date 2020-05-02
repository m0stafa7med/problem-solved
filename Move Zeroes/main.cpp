#include <iostream>

using namespace std;
void moveZeroes (int nums[],int n)
{
    int nonZero=0;
    for (int curr=0; curr<n; curr++)
    {
        if (nums[curr]!=0)
        {

        int temp = nums[nonZero];
        nums[nonZero]=nums[curr];
        nums[curr]=temp;
        nonZero++;
        }
    }


}
int main()
{
    cout << "Enter array's size : ";
    int arrSize;
    cin >> arrSize;
    int *arr=new int [arrSize];
    for(int i=0;i<arrSize;i++)
        cin >>arr[i];
    moveZeroes(arr,arrSize);
    for(int i=0;i<arrSize;i++)
        cout << arr[i] << " " ;
        cout << "\n";

    return 0;
}

