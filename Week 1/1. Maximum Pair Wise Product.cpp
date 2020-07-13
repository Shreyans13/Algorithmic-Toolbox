# include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0 ;i < n ;i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end()); 
	
	cout << (long long)a[n-1] * a[n-2] << endl;
}