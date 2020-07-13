# include <cbits/stdc++.h>
using namespace std;

long FibRecurs(n) {
	vector<int> v(n);
	v[0] = 0;
	v[1] = 1;
	
	for ( int i =2 ;i <= n ;i++)
		v[2] = v[i-1] + v[i-2];

	return v[n];
}

int main () {
	int n;
	cin >> n;
	cout << FibRecurs(n) << endl;
}