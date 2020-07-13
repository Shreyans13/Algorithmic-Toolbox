# include <bits/stdc++.h>
using namespace std;

long naiveSolution(vector<long> v) {
	long mul = 0;
	for (long i = 0; i < v.size() ; i++ ) {
		for (long j = i + 1 ; j < v.size() ; j++) {
			if ((long)a[i] * a[j] > mul)
				mul = (long) a[i] * a[j];
		}
	}
	return mul;
}

long fastSolution(vector<long> v) {
	sort(a.begin(), a.end());
	return (long long)a[n-1] * a[n-2];
}
int main() {
	while(true) {
		int n = rand() % 100 + 2;
		cout << n << endl;
		vector<long> v;
		for (int i = 0 ;i < n ; i++){
			v.push_back(rand() % 10000)
		}
		for (int i = 0; i< n ; i++) {
			cout << v[i] << ' ';
		}
		cout << endl;

		if (fastSolution(v) != naiveSolution(v))
			cout << "wrong answer" << fastSolution(v) << "\t" << naiveSolution(v) << endl;
		else
			cout << "OK" << endl;
	}
}