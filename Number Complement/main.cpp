#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int findComplement (int n)
{
    int mask=1;
    while(mask < n )
   {
       mask = (mask << 1 ) | 1;
   }
   return mask^n;
}
int main()
{
   int num;
   cin >> num ;


   cout << findComplement(num) << "\n";
    return 0;
}
