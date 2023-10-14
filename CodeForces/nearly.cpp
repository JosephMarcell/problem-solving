#include <iostream>
using namespace std;
typedef long long int lln;

int main(){
    
    lln n; cin>>n; int tes;
    int hasil = 0;
    while (n>0){
        tes = n%10; if (tes == 4 || tes == 7) hasil++;
        n = n/10;
    }
    if(hasil==4 || hasil==7) cout<<"YES";
    else cout<<"NO";
}