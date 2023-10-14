#include <iostream>
using namespace std;

int main(){
    int n, count, prob, prob1, prob2; cin>>n; count = 0; int hasil = 0;
    while(n){
        cin>>prob>>prob1>>prob2;
        if((prob+prob1+prob2)>=2) hasil++;
    n--;
    }
    cout<<hasil;
    return 0;
}