#include <iostream>
using namespace std;

void lineofStar(int c, int w){
    //int q1 = c*w;
    //int q2 = 2 + (c-1);
   // return c*w + 2 + (c-1);
    for ( int i = 1; i<=c*w + 2 + (c-1); i++){
        cout<<"*";
    }
    cout <<endl;
}


int main(){
    int t,l,c,h,w;
    int cc,ww;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d %d",&l,&c, &h, &w); cc = c; ww = w;
        for (int i = 0; i<l; i++){
            lineofStar(c,w);
            for ( int j = 0; j<h; j++){
                for ( int k = 0; k<c; k++){
                    cout<<"*";
                    for (int g = 0; g<w; g++){
                        cout<<".";
                        
                    }
                    
                }
                cout<<"*"; cout<<endl;
            }
        //cout<<endl;
        }
        lineofStar(cc,ww);
        
    }

       
}