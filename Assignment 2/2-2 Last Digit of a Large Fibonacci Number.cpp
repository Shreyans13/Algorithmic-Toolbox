# include <bits/stdc++.h>
using namespace std;

long FibRecurs(long n) {
	long v[n] = {0};

	v[0] = 0;
	v[1] = 1;

	for ( long i = 2 ;i <= n ;i++){
		v[i] = (v[i-1] + v[i-2]) % 10;
	}

	return v[n];
}

int main () {
	long n;
	cin >> n;
	if(n == 0){
        cout << 0 << endl;
	} else {
        cout << FibRecurs(n) << endl;
	}
}
