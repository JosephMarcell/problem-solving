#include<cstdio>
#include<queue>
#include<vector>
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



int main() {
    
    int T, sum, ans, n, temp;
    T = getNum();
    while (T--)
    {
        sum = 0;
        n = getNum();
        vector<int> x;
        priority_queue<int> q, p;
        for (int i = 0; i<n; i++) {
            temp = getNum();
            x.push_back(temp);
            sum += temp;
        }
        if (sum%n != 0) printf("-1\n");
        else {
            ans = 0;
            int avg = sum/n;
            while (!x.empty())
            {
                temp = x.back();
                x.pop_back();
                if(temp > avg)p.push(temp);
                else if(temp < avg)q.push(-temp);
            }
           
            while (!p.empty() || !q.empty())
            {
                int low, high;
                low = -q.top() , q.pop();
                high = p.top(), p.pop();
                int lif = (high - low)/2;
                high -= lif;
                low += lif;
                ans++;
                if(low > avg) p.push(low);
                else if(low < avg) q.push(-low);
                if(high > avg) p.push(high);
                else if(high < avg) q.push(-high);
            }
            printf("%d\n", ans);
        } 
        
    }
    return 0;
}