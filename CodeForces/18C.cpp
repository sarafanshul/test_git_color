
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	long n; 
	cin >> n;
    vector<long long> numbers(n);
    long long total(0), leftSum(0), ways(0);

    for(long k = 0; k < n; k++){
    	cin >> numbers[k]; 
    	total += numbers[k];
    }
    for(long k = 0; k < n - 1; k++){
    	leftSum += numbers[k]; 
    	if(2 * leftSum == total) ++ways;
    }
    cout << ways;
}