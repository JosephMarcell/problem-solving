#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
    string op; cin>>op;
    stack<int>st;
    for(int i = 0; i<op.length(); i++) {
        int temp;
        if(st.empty()) st.push(op[i] - '0');
        else if (st.top() < op[i] - '0') {
        temp = st.top(); 
        st.pop(); st.push(op[i]); st.push(temp);}
        else {st.push(op[i]-'0');}
    }
        
}