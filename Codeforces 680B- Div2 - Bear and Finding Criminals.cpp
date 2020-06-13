#include <iostream>

using namespace std;

int main()
{
    int numberOfCities,home;
    cin >> numberOfCities >> home;
    int*arr=new int [numberOfCities];
    for(int i=0; i<numberOfCities; i++)
        cin>>arr[i];
    int sum=0,level=1;
    if(arr[home-1])
        sum++;

    while(home-level-1 >=0&&home+level-1<numberOfCities)
    {
        if( arr[home-level-1]+ arr[home+level-1]==2)
        {
            sum+=2;
        }
        level++;
    }
    while(home-level-1 >=0 )
    {
        if(arr[home-level-1])
        sum++;
        level++;
    }
    while(home+level-1<numberOfCities )
    {
        if(arr[home+level-1])
        sum++;
        level++;
    }


    cout << sum << endl;

    return 0;
}


