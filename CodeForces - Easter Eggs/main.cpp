#include <bits/stdc++.h>

using namespace std;

int main() {
 int n,c=0;
 char arr[9]={'z','R','O','Y','G','B','I','V'};
 cin>>n;
 for(int i=1;i<=n;i++){
            c++;
         cout<<arr[c];
    if(c==7){
        c=3;

    }
 }
return 0;
}
