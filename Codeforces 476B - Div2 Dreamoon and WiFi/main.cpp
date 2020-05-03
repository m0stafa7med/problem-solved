#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact (int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    string signal1,signal2;
    int i;
    int positionSignal1=0,positionSignal2=0,numOfQuestionMarks=0,ans=0;
    cin >>signal1>>signal2;
    for(i=0; i<signal1.size(); i++)
    {
        if(signal1[i]=='+')
            positionSignal1++;
        else
            positionSignal1--;

        if(signal2[i]=='+')
            positionSignal2++;
        else if(signal2[i]=='-')
            positionSignal2--;
        else
            numOfQuestionMarks++;

    }


    if(!numOfQuestionMarks)
    {

        if(positionSignal1==positionSignal2)
            cout << "1.00000000000\n";
        else
            cout <<"0.00000000000\n";
    }
    else
    {
        i=numOfQuestionMarks+(positionSignal1-positionSignal2);
        if(i%2==0 && i/2 >=0 && i/2<=numOfQuestionMarks)
        {
            ans= fact(numOfQuestionMarks)/(fact(numOfQuestionMarks-i/2)*fact(i/2));
            printf("%.12f",(double)(ans)/(double)(pow(2,numOfQuestionMarks)));

        }
        else
            cout << "0.00000000000";
    }

    return 0;
}
