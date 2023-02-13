#include<iostream>
using namespace std;

bool isPrime(int num) {
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	} 
	return true;
}

int main() {
	int num = 17;
	isPrime(num) ? cout << num << " is a prime number." : cout << num << " is not a prime number.";
	cout << "\n";
	return 0;
}
