#include <iostream>
using namespace std;
int main(){
	long unsigned int n;
	cin >> n;
	if (n==2 || n==3){
		cout << "NO SOLUTION";
		return 0;
	}
	for(long long int k = n-1; k>0; k-=2){
		cout << k << " ";
	}
	for (long long int k = n; k>0; k-=2){
		cout << k << " ";
	}
	return 0;
}
