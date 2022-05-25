#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while ( t--) {
		int num , ans = 0 , last_digit = 0 ;
		cin >> num ;
		while ( num != 0 ){
			last_digit = num % 10 ;
			if ( ans > INT_MAX / 10 || ans < INT_MIN / 10 ) {
				return 0 ;
			}
			ans = ans*10 + last_digit ;
			num = num/10 ;
		}
		cout << ans << endl ;
	}

}