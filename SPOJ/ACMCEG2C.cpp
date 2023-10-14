#include <cstdio>
#include <deque>
#include <vector>

using namespace std;

int getNum() {
    int res = 0;
    char c;
    int b = 0;
    while (1) {
        c = getchar_unlocked();
        if (c == '-') b = 1;
        if (c == ' ' || c == '\n') continue;
        else break;
    }
    if (c != '-') res = c - '0';
    while (1) {
        c = getchar_unlocked();
        if (c >= '0' && c <= '9') res = 10 * res + c - '0';
        else break;
    }
    if (b == 1) res *= -1;
    return res;
}

int main() {
    int t;
    t = getNum();
    
    while (t--) {
        int n, k;
        n = getNum();
        k = getNum();
        vector<int> arr(n);  // Coba pake vector
        for (int i = 0; i < n; i++) {
            arr[i] = getNum();
        }
        deque<int> dq;
        dq.push_back(0);
        for (int i = 0; i < n; i++) {
            if (dq.front() <= (i - k)) {
                dq.pop_front();
            }
            while (!dq.empty() && arr[i] >= arr[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if (i >= (k - 1)) {
                printf("%d ", arr[dq.front()]);
            }
        }
        printf("\n");
    }
    return 0;
}
