//ch2_3
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout<<setfill('*')
		<<setw(2)<<21<<endl
		<<setw(3)<<21<<endl
		<<setw(4)<<21<<endl;
	//default set
	cout<<setfill(' ');
	return 0;
}