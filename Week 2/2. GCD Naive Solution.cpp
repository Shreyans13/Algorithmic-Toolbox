# include <bits/stdc++.h>
using namespace std;
long GCD(a, b) {
	long best = 0;
	for(long i =0 ;i < a + b ; i++) {
		if(i/a == 0 && b/i == 0)
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