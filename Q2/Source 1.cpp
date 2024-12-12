#include "lol.h"

void Half(const int& s) {
	for (int i = 0; i < s; i++) {
		string x(i+1,'*');
		println(x);
	}
}

void Full(const int& s) {
	Half(s);
	for (int i = s; i > 0; i--) {
		string x(i + 1, '*');
		println(x);
	}
}

int main() {
	
	print("Size:");
	int size;
	cin >> size;
	Full(size);

}
