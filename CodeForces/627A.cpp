#include<bits/stdc++.h>

using namespace std;

int check(int a ,int b){
	if (a == b) return 0;
	if (((a > b) && (a - b)%2 == 0) || ((a < b) && (b - a)%2 == 1)) return 1;
	return 2;
}

int main(){
	int t ,a ,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << check(a ,b ) << "\n";
	}
}
