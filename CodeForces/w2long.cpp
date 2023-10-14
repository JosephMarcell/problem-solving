#include <iostream>
using namespace std;
#include <string>

int main(){
    string word;
    int n, length; cin>>n;
    while(n){
        cin>>word;
        if(word.length() > 10){
            length = word.length() - 2;
        cout<<word[0]<<length<<word[length+1]<<endl;
        }
        else {cout<<word<<endl;
        }
    n--;
    }
    return 0;
}