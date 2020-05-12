#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <int> luckNumbers;
void pushLuck (long long num)
{
    if(num>1000000007)
        return;
    if(num)
    luckNumbers.push_back(num);

    pushLuck(num*10+4);
    pushLuck(num*10+7);

}
int main()
{
    int n;
    cin >> n;
    pushLuck(0);
    sort(luckNumbers.begin(),luckNumbers.end());
    for(int i=0;i<luckNumbers.size();i++)
    {
        if(n==luckNumbers[i])
            cout << i+1 << "\n";
        return 0;
    }


}
