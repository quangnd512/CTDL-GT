#include <iostream>

using namespace std;

int gcd(int n, int m){
	int r;
	if (m < n) return gcd(n,m);
	r = m%n;
	if (r == 0) return (n);
	else return(gcd(n,r));
}

int main(int argc, char** arrgv ){
	int n =25, m=5;
	int kq = gcd(n,m);
	cout<<kq;
	return 0;
}

