#include <iostream>
using namespace std;
int main()
{
	int i = 0, c = 0, count = 0;
	std::string fund = "ATCG", prob;
	cin >> prob;
	while(i<4){
		for (long unsigned int j = 0; j<size(prob); j++){
			if (fund[i] == prob[j]){
				c++;
			} else {
				count = max(c, count);
				c = 0;
			}
		}
		count = max(c, count);
		c = 0;
		i++;
	}
	cout << count;
	return 0;
	
}
