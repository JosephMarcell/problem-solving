#include <iostream>
using namespace std;

void starFirst(int j){
    if(j==0 || j%2==0){
        cout<<"*";
    }
    else {cout<<".";}
}

void dotFirst(int j){
    if(j==0 || j%2==0){
        cout<<".";
    }
    else {cout<<"*";}
}

void printChar(int l, int c){
    for ( int i = 0; i<l; i++){     // baris
        for (int j = 0; j<c; j++){  // kolom
            if (i==0 || i%2==0){
                starFirst(j);
            }
            else{dotFirst(j);}
        } 
        cout<<endl;                   
    }
}

int main() {
    int t,l,c; cin>>t;
    while(t){   
    cin>>l>>c;
    printChar(l,c);
    t--;
    }
}
