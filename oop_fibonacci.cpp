#include <bits/stdc++.h>
using namespace std;

class Fibonacci {
public:
    // Method to calculate Fibonacci number
    long long int calculate(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

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

    // Method to process and print the Fibonacci number
    void process(int n) {
        cout << "Fibonacci number for n = " << n << " is: " << calculate(n) << endl;
    }
};

int main() {
    int n = 2;

    // Create an object of the Fibonacci class
    Fibonacci fib;

    // Process the Fibonacci number for the given value of n
    fib.process(n);

    return 0;
}
