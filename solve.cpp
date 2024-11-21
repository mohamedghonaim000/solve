#include <iostream>
using namespace std;

void prime_function(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        if (i < 2)
            continue;
        bool isPrime = true;

        for (int p = 2; p < i; p++)
        {
            if (i % p == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << endl;
        }
    }
}

int main(){
    int n , m;
    cout<<"enter the frist number in the range "<<endl;
    cin>>n;
    cout<<"enter the last number in the range "<<endl;
    cin>>m;
    cout<<"the prime numbers between : "<<n<<" and : "<<m <<endl;
    prime_function(n, m);
}