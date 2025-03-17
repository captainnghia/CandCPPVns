#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	string s = "1 + 2 * 3 -4 / 5";

	vector<string> a;// kieu string 

	int start = 0;
	int end;

	for (int i = start + 1; i < s.length(); ++i) {
		if (s[i] == ' ') {
			end = i;
			cout << s.substr(start, end - start) << endl;
			start = end + 1;
		}
	}
	
	cout << s.substr(start, s.length() - start) << endl;
	system("pause");
	return 0;
}