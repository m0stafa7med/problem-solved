#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x,y="";
    int n; cin >>n;
    cin >> x;
    y=x[0];
    for(int i=1;i<n;i++)
        if(i%2==0)
            y+=x[i];
        else
            y=x[i]+y;

        if(n%2==0)
        {
           reverse(y.begin(), y.end());
        }
        cout << y << endl;

    return 0;
}
