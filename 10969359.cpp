#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int num =2; num<e; num++)
    {
        if(e%num==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    float sum=0.0;
    int c=0;
    int e;
    cout<<"type a number"<<endl;
    cin>>e;

    for (int num=1; num<e; num++)
    {
        if (isPrime(num))
        {
            sum+=num;
            c+=num;
        }
    }

    cout << "The sum of the Prime numbers below " << e << " is " << sum <<endl;
    float avg=sum/c;
    cout<<"The average of the prime numbers is "<<avg<<endl;
}
