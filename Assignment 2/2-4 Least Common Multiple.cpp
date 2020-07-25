# include <bits/stdc++.h>
using namespace std;

long long leastCommonMultiple(long long a, long long b) {
    long long mi = min(a,b);
    long long ma = max(a,b);
    long long i = ma;
    do {
        if(i % mi == 0)
            return i;
    } while(i+= ma);
}

int main () {
	long long a,b;
	cin >> a >> b;
	cout << leastCommonMultiple(a,b) << endl;
}
