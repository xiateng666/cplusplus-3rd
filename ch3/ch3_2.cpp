//ch3_2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x= 2.5, y= 4.7;
	int a= 7;
	//2.5
	x= x+a%3*(int)(x+y)%2/4;
	cout<<x<<endl;
}