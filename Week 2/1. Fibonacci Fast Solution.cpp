# include <bits/stdc++.h>
using namespace std;

long FibRecurs(long n) {
	vector<long> v(n);
	v[0] = 0;
	v[1] = 1;

	for ( long i = 2 ;i <= n ;i++){
		v[i] = v[i-1] + v[i-2];
		cout << v[i]<<endl;
	}

	return v[n];
}

int main () {
	long n;
	cin >> n;
	cout << FibRecurs(n) << endl;
}
