#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
#define println(x) cout << x << endl;
#define print(x) cout << x;

void Horizontal(const string& p1, const string& p2) {
	int space1 = 13 + p1.length();
	int space2 = 12 + p2.length();
	int total = space1 + space2 + 3;
	string StrTotal(total, '*');
	string StrSpace1(space1, ' ');
	string StrSpace2(space2, ' ');
	cout << StrTotal << endl;
	cout << "*" << StrSpace1 << "*" << StrSpace2<<"*" << endl;
	cout << "* Player 1 : " << p1 << " * Player 2 : " << p2 << "*" << endl;
	cout << "*" << StrSpace1 << "*" << StrSpace2 << "*" << endl;
	cout << StrTotal << endl;
}

void Vertical(const string& p1, const string& p2) {
	int diff = abs(int(p1.length() - p2.length()));
	int total = p1.length() > p2.length() ? 15+p1.length() : 15+p2.length();
	int space = p1.length() > p2.length() ? 13 + p1.length() : 13 + p2.length();
	string StrTotal(total, '*');
	string StrSpace(space, ' ');
	string StrDiff(diff, ' ');
	if (p1.length() > p2.length()) {
		println(StrTotal);
		cout << "*" << StrSpace << "*" << endl;
		cout << "* Player 1 : " << p1 << " *" << endl;
		cout << "*" << StrSpace << "*" << endl;
		println(StrTotal);
		cout << "*" << StrSpace << "*" << endl;
		cout << "* Player 2 : " << p2<< StrDiff << " *" << endl;
		cout << "*" << StrSpace << "*" << endl;
		println(StrTotal);

	}
}
//26 + p1 +p2
int main() {
	string p1;
	string p2;

	print("Enter First Player:");
	cin >> p1;
	print("Enter Second Player:");
	cin >> p2;
	
	Horizontal(p1, p2);
	Vertical(p1, p2);



}