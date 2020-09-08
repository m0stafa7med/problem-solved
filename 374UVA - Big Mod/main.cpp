#include <bits/stdc++.h>
#include <math.h>
using namespace std;
long long answer(long long x,long long y,long long m)
{
    long long ans = 1;
    while(y)
    {
        if(y&1)
        {
            ans *= x;
            ans %= m;
        }
        y >>= 1;
        x *= x;
        x %= m;
    }
    return ans;
}
int main()
{
    long long B, P, M;

    while(cin>>B>>P>>M)
    {
        cout << answer(B, P, M);
    }


    return 0;
}
