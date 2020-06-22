#include <iostream>

using namespace std;

int main()
{
    int n,x,postition=0,dollars=0,energy=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(postition<x )
        {
            if(energy+postition < x)
            {
                dollars+=(x-postition)-energy;
                energy=0;
            }
            else
                energy-=(x-postition);
        }
        else
        {
            energy+=postition-x;
        }
        postition=x;

    }
    cout << dollars << endl;
    return 0;
}
