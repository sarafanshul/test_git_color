
#include <bits/stdc++.h>
using namespace std;

int check(){
	int n;
	string x ,a ,b;
	for (string i :x){
		if (i == "2"){
			a += "1";b+="1";
		}
		else if (i == "1"){
			a += "1";b+="0";
		}
		else {
			a += "0"; b+= "0";
		} 
	}
	cout << a << "\n" <<b "\n";

}

int main(){
	int t; 
	cin >> t;
	while(t--){
		check();
	}
	return 0;
}
