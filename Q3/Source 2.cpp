#include "lol.h"

void Run(const int& l) {
	cout << "Face Lenght Of Cube\tSurface Area of Cube\tVolume Of Cube" << endl;
	cout << "(cm)\t\t\t" << "(cm^2)\t\t\t" << "(cm^3)" << endl;
	for (int i = 0; i <= l; i++) {
		cout << i << "\t\t\t" << i * i << "\t\t\t" << i * i * i << endl;
	}
}



int main() {
	const int lenght = 4;
	Run(lenght);
}