#include <iostream>

using namespace std;
int getSumSquare(int n)
{
    int sum=0;
    while(n>0)
    {
        int d=n%10;
        sum+=d*d;
        n/=10;
    }
    return sum;
}
bool isHappy (int n)
{
    int num1,num2;
    num1=num2=n;
    do
    {
        num1=getSumSquare(num1);
        num2=getSumSquare(num2);
        num2=getSumSquare(num2);


    }
    while(num1!=num2);
    if(num1==1)
        return true;
    else
        return false;
}

int main()
{
    cout << "Enter the number u wanna test : ";
    int num;
    cin >> num;

    if(isHappy(num))
        cout << "the num is a happy number\n";
    else
        cout << "the num is not a happy number\n";

    return 0;
}
