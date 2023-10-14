#include <iostream>
using namespace std;
typedef unsigned long long ull;


ull factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}


ull calculateWays(int m, int n) {
    if (n > m) {
        return 0; // Invalid input
    }

   
    ull ways_alternate = factorial(m - n) * factorial(m - n + 1);

    
    ull ways_remaining_boys = factorial(m - n);

    
    return ways_alternate * ways_remaining_boys;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> m >> n;

        ull ways = calculateWays(m, n) % 1000000007;
        cout << ways << endl;
    }

    return 0;
}
