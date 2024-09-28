#include <iostream>
using namespace std;
int main(){
	long unsigned int siz, ans=0;
	cin >> siz;
	long long int input1=0, input2=0;
	cin >> input1;
	input2 = input1;
	for (long unsigned int i=0; i<siz-1 && siz != 1; ++i){
		cin >> input2;
		if (input2<input1){
			ans += input1-input2;
		} else {
			input1 = input2;
		}
	}
	cout << ans;
}
