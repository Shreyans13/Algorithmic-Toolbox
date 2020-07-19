# include <bits/stdc++.h>
using namespace std;
long GCD(long a, long b) {
	long best = 0;
	for(long i = 1 ;i < a + b ; i++) {
		if(a % i == 0 && b % i == 0)
			best = i;
	}
	return best;
}

int main () {
	long a;
	long b;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
}
