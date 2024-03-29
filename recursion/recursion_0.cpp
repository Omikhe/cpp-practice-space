#include <iostream>
using namespace std;

int nSum(int n){
    // base condition to terminate the recursion when N = 0
    if (n == 0) {
        return 0;
    }

    // recursive case / recursive call
    int res = n + nSum(n - 1);

    return res;
}

int main()
{
    int n = 4;

    // calling the function
    int sum = nSum(n);

    cout << "Sum = " << sum;

    return 0;
}