#include<iostream>
using namespace std;

int isEven(int num);

int main() {
	int num = 24;
	int res = isEven(num);
	if (res == 1) {
		cout << num << " is an even number\n";
	} else {
		cout << num << " is an odd number\n";
	}
}

int isEven(int n) {
	return n&1 == 0;
}
