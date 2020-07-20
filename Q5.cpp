	#include <bits/stdc++.h>
	using namespace std;
	
	long long get_fibonacci_huge_naive(long long n, long long m) {
	    if (n <= 1)
	        return n;
	
	    long long previous = 0;
	    long long current  = 1;
	
	    for (long long i = 0; i < n - 1; ++i) {
	        long long tmp_previous = previous;
	        previous = current;
	        current = tmp_previous + current;
	    }
	
	    return current % m;
	}
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
//       		cout<<"curr:"<<curr<<"   temp:"<<temp<<endl;
		}
		return temp%m;
	}
	int main() {
//		while(true)
//		{
//			long long n=rand()%100+2;
//			long long m=rand()%100+2;
//			long long naive=get_fibonacci_huge_naive(n,m);
//			long long advance=get_fibonacci_huge_advance(n,m);
//			if(naive!=advance)
//			{
//				break;
//			}
//		}
	    long long n, m;
	    std::cin >> n >> m;
	    std::cout << get_fibonacci_huge_advance(n, m) << '\n';
	}
