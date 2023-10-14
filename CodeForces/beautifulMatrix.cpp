#include <iostream>
using namespace std;
#include <cstdlib>
int main(){
    int mtrx;
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            scanf("%d", &mtrx); if (mtrx==1) printf("%d", abs(i-3) + abs(j-3));
        }
    }
}