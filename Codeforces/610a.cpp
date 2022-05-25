#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n ;
	cin >> n ;
	int count = 0 ;
	if ( n % 2 != 0 ) {
		cout << count << endl ;
	}
	else{
		for ( int  i = 2 ; i <= n ; i=i+2 ) {
			if(  i % 4 != 0 && i != 2 ) {
				count ++ ;
			}
		}
		cout << count ;
	}
}

