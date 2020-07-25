#include <iostream>
using namespace std;

long long get_fibonacci_last_digit_fast(long long n) {
    if (n <= 1)
        return n;

    long long v[n] = {0};

	v[0] = 0;
	v[1] = 1;

	for ( long i = 2 ;i <= n ;i++){
		v[i] = (v[i-1] + v[i-2]) % 10;
	}

	return v[n];
}

int fibonacci_sum_fast(long long n) {
    int new_n = (n + 2) % 60;
    int new_last = get_fibonacci_last_digit_fast(new_n);
    if (new_last == 0) {
        return 9;
    } else {
        return new_last - 1;
    }
}

int main() {
    long long n = 0;
    cin >> n;
    cout << fibonacci_sum_fast(n);
}
