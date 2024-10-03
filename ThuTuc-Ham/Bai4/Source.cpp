#include <stdio.h>
#include <conio.h>
int timUCLN(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a; // tra ve a hay b cung duoc vi chugn bang nhau 
}
int main() {

	_getch;
	return 0;
}