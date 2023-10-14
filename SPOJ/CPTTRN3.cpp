#include <iostream>
using namespace std;

// fokus ke print selesaikan kolom ( menyamping )
// print per " .. ""
// misal disuruh buat 3 grid
// print 3 x ".." ke samping
// baris dibawahnya copas baris atas

int deretAritmatika(int c){
    return 4 + (c-1)*3;
}

int main(){
    int t,l,c, titik;
    titik = 0; // titik = untuk hitung brp banyak titik
    scanf("%d", &t);
    while(t){
        
        scanf("%d %d",&l,&c);
        int batas = deretAritmatika(c);
        for (int i = 1; i<=batas; i++){
            cout<<"*";
        }cout<<endl;
        for ( int i = 1; i<=l; i++){
            for ( int k = 0; k<2; k++){
                for (int j = 1; j<=c; j++) {
                    if(titik==0) {
                        cout<<"*"; titik++;
                    }
                    else if ( titik==1){
                        titik--;;
                        cout<<"*";  // ngeprint * setiap .. belum ada atau .. udah ada 1
                    }
                    cout <<"..";
                    if(j==c){cout<<"*";}
            }
            cout<<endl;
            }
            for (int i = 1; i<=batas; i++){
            cout<<"*";
        } cout<<endl;
            }  
        cout<<endl;
        t--;
    }
}