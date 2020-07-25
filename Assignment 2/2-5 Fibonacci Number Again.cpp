#include <bits/stdc++.h>
using namespace std;

int get_pisano(long long m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}
long long get_fibonacci_huge_advance(long long n, long long m) {
    long long pisano=get_pisano(m);
    n=n%pisano;
    long long prev=0,curr=1;
    long long temp=n;
    for(int i=2;i<=n;i++)
    {
        temp=(prev+curr)%m;
        prev=curr;
        curr=temp;
    }
    return temp%m;
}
int main() {
    long long n, m;
    cin >> n >> m;
    cout << get_fibonacci_huge_advance(n, m) << '\n';
}
