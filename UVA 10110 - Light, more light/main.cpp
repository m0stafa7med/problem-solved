#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int num;
    while(cin>>num && num!=0)
    {
      unsigned  int x=(int) sqrt(num);
      if(x*x==num)
        cout << "yes\n";
      else
        cout << "no\n";
    }
    return 0;
}
