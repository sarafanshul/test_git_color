

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	string s;
	cin >> s;
	for (int i = 0; i < n ; i += max(i ,0)) cout << s[i];
	return 0;
}