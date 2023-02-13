#include<iostream>
using namespace std;

int len(char* str);
void swap(char* str, int a, int b);

char* revStr(char* str) {
	int length = len(str);
	int s = 0, e = length - 1;
	while (s < e) {
		swap(str, s, e);
		s++; 
		e--;
	}
	return str;
}

int len(char* str) {
	int i = 0;
	int k = 0;
	while (str[i] != '\0') {
		k++; i++;
	}
	return k;
}

void printStr(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i++];
	}
	cout << endl;
}

void swap(char* str, int a, int b) {
	char temp = str[a];
	str[a] = str[b];
	str[b] = temp;
}

int main() {
	char str[] = "c e l e b - A I";
	printStr(str);
	char* rev = revStr(str);
	printStr(rev);
	return 0;
}
