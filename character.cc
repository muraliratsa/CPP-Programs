#include<iostream>
using namespace std;

int main() {
	char ch_v = 'a';
	char ch_c = 'z';
	char ch_d = '1';

	char ch = ch_c;
	
	if (		ch == '0' ||
			ch == '1' ||
			ch == '2' ||
			ch == '3' || 
			ch == '4' || 
			ch == '5' ||
			ch == '6' ||
			ch == '7' ||
			ch == '8' ||
			ch == '9' 
		) { cout << ch << " is a digit\n"; }
	else if (
		ch == 'a' ||
		ch == 'e' ||
		ch == 'i' ||
		ch == 'o' ||
		ch == 'u'
		) { cout << ch << " is a vowel\n"; }
	else {
		cout << ch << " is a consonant\n"; 
	}

	return 0;

}
