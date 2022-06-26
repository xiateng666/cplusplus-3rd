//ch1_3.cpp
#include <iostream>
#include <cmath>
using namespace std;

double max(double x, double y);

int main() {
	double a,b,c;
	cout<<"input two numbers:\n";
	cin>>a>>b;
	c= max(a,b);
	cout<<"the squart of maximum="<<sqrt(c);
	return 0;	
}

double max(double x, double y) {
	if(x>y) {
		return x;
	}else {
		return y;
	}
}