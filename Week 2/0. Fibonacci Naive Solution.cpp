# include <cbits/stdc++.h>
using namespace std;
long FibRecurs(n) {
	if (n <= 1)
		return n;
	else
		return FibRecurs(n-1) + FibRecurs(n-2);
}

int main () {
	int n;
	cin >> n;
	cout << FibRecurs(n) << endl;
}