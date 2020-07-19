# include <bits/stdc++.h>
using namespace std;
long FibRecurs(long n) {
	if (n <= 1)
		return n;
	else
		return FibRecurs(n-1) + FibRecurs(n-2);
}

int main () {
	long n;
	cin >> n;
	cout << FibRecurs(n) << endl;
}