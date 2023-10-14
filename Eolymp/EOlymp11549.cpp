#include <iostream>
#include <stack>
using namespace std;

int water(int height[], int n) {
    stack<int> st;
    int hasil = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
        while (!st.empty() && height[st.top()] < height[i]) {
            int top = st.top();
            st.pop();
            if (!st.empty()) {
                int distance = i - st.top() - 1;
                int mihHeight = min(height[i], height[st.top()]) - height[top];
                hasil += distance * mihHeight;
            }
        }
        st.push(i);}
    return hasil;}

int main() {
    int n; scanf("%d", &n);
    int height[n];

    int hasil = water(height,n);
    printf("%d", hasil);
}