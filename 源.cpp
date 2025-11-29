#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,c;
	double b,d;
	for (a = 2; ; a=a * 2) {
		if (a > 100) {
			break;
		}
	}; c = a / 2;
	d = log2(c); 
	b = (pow(2, d) - 1) * 0.8 / d;
	cout <<"每天平均花费：" << b;
	return 0;
}