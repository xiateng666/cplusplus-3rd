//ch3_4
#include <iostream>
using namespace std;

const int k= 3*5*7;

int main() {
	int x;
	cin>>x;
	if(x%k==0) {
		cout<<"能同时被3,5,7整除"<<endl;
		return 0;
	}
	return 0;
}