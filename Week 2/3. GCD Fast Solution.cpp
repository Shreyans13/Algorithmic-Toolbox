# include <bits/stdc++.h>
using namespace std;
long GCD(a, b) {
	if (b == 0)
		return a;
	return GCD(b, a%b)
}

int main () {
	long a;
	long b;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
}