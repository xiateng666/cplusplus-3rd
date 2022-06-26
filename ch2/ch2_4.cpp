//ch2_4
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout<<left
		<<setw(5)<<1
		<<setw(5)<<2
		<<setw(5)<<3<<endl;
	cout<<right
		<<setw(5)<<1
		<<setw(5)<<2
		<<setw(5)<<3<<endl;
	return 0;
}