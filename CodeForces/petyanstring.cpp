#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
    int count = 0;
    string first, second; stack<string> st;
    cin >> first >> second;
    for(int i = 0; i<first.length(); i++) {
        for(int j = 0; j<second.length(); j++){
            if(tolower(first[i]) == tolower(second[j])) st.push(first)
        }
    }
    cout>>""


}

