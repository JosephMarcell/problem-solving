#include <iostream>
using namespace std;
#include <string>

int main(){
    int n, x; x = 0;
    scanf("%d", &n);
    string op;
    while(n--){
        cin>>op; 
        if (op=="X++") x++;
        else if (op=="X--") x--;
        else if (op=="++X") ++x;
        else if (op=="--X") --x;
    } 
    cout<<x;
}