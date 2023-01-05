#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
namespace p {
	void power() {
		srand(time(NULL));
		float x = 2.8;
		float y = 3.5;
		float a = pow(x, y);
		cout << setprecision(5)<< a << endl;
	}
}

int main() {
	p::power();






}
