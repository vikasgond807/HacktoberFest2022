//  factorial_top_down.cpp: Rishabh Dev
//  Description: Factorial using Dynamic Programming(Top Down).
#include <iostream>
#include <vector>
using namespace std;

vector<long long int> dp(INT16_MAX, -1);

long long int factorial(int num)
{
    if (num == 0)
        return 1;

    if (dp[num] != -1)
        return dp[num];

    return (dp[num] = num * factorial(num - 1));
}

int main()
{

    int num;
    cin >> num;
    cout << factorial(num) << endl;
    cin >> num;
    cout << factorial(num);
    return 0;
}
