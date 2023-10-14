#include <iostream>
using namespace std;


int main(){
    int t,l,c;
    scanf("%d", &t);
    while(t){
        scanf("%d %d",&l,&c);
        for ( int i = 1; i<=l; i++){
            for (int j = 1; j<=c; j++){
                if(i==1 || i==l){
                     cout<<"*";
                }
                else if ( j == 1 || j == c) {cout << "*";}
                else{
                    cout<<".";
                }  
            }
            cout<<endl;
        }
        cout<<endl;
        t--;
    }
        
}