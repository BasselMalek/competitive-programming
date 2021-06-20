#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long long int n, result;
    cin >> n;
    if (n % 2 == 0)
    {
        result = (pow(-1.0,n)*n)/2;
    }
    else
    {
        result = ((pow(-1.0,n)*n)-1)/2;
    }
    
    cout << result;
}