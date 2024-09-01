#include <bits/stdc++.h>
using namespace std;

long long int fibo(int n) {

    long long int* dp = new long long int[n + 1];


    dp[0] = 0;
    dp[1] = 1;


    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }


    long long int result = dp[n];


    delete[] dp;

    return result;
}

int main() {
    int n = 2;
    cout << fibo(n) << endl;
    return 0;
}
