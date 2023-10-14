#include <iostream>
#include <string>
using namespace std;

void halfSeq(string seq, int l) {
    int i = 0;
    while(i<l){
        cout << seq[i]; i+=2;
    }
}
int main() {
    int t; cin >> t;
    string seq; 
    while(t){
        cin>>seq;
        int l = seq.length() / 2;
        halfSeq(seq,l); cout << endl;
        t--;
    }
}