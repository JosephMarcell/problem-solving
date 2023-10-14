#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
 
using namespace std;
 
int getNum(){
	int res = 0;
	char c;
	int b = 0;
	while(1)
    {
		c=getchar_unlocked();
		if(c=='-') b = 1;
		if(c==' '||c=='\n') continue;
		else break;
	}
	if(c!='-')res=c-'0';
	while(1)
    {
		c=getchar_unlocked();
		if(c>='0' && c<='9') res =10 * res +c -'0';
		else break;
	}
	if(b==1) res *= -1;
	return res;
}



void getString(string &input) {
    char c;

    while (1) {
        c = getchar_unlocked();

        if (c == '\n' || c == ' ' || c == EOF) {
            if (!input.empty()) {
                break;
            }
            continue;
        }

        input.push_back(c);
    }
}
 
int main() {
    int t;
    t = getNum();
 
    while (t--) {
        int n;
        char c;
        n = getNum();
        c = getchar_unlocked();

        string s;
        getString(s);

        priority_queue<int> pq;
        pq.push(0);
        int distance = 0;
        bool flag = false;

 
        for (int i = 0; i < n; i++) {
            if (!flag && s[i] == c) {
                distance = 0;
                flag = true;
            } 
            if (flag && s[i] == 'x') {
                pq.push(distance);
                flag = false;
            }
 
            distance++;
        }
 
        if (flag) {
            for (int i = 0; i < n; i++) {
                if (s[i] == 'x') {
                    pq.push(distance); 
                    break;}
                distance++;
            }}

       printf("%d\n", pq.top());
    }
 
    return 0;
}