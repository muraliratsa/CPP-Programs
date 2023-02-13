#include<iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5};
	int len = sizeof(arr) /sizeof(arr[0]);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
	return 0;
}
