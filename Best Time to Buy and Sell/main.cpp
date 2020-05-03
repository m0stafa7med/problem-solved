#include <iostream>

using namespace std;

int  maxProfit ( int prices[],int n)
{
    int maxprofit =0;
    for(int i=1; i<n; i++)
        if (prices[i] > prices [i-1])
            maxprofit += prices[i] - prices[i-1];
    return maxprofit;


};
int main()
{



    int arr[6] = {7,1,5,3,6,4};

    cout << maxProfit(arr,6) << endl;
    return 0;
}
