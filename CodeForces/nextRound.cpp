#include <iostream>
using namespace std;

int main() {

    int n,k, count; scanf("%d %d", &n, &k);
    int arr[n+1];
    count = 0; 
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }  
    for(int i = 0;i<n;i++){
        if(arr[k-1] <= arr[i] && arr[i]!=0){
            count++;
        }
    } printf("%d", count);
}