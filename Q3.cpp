#include<iostream>
using namespace std;
int* InputArray(int& size) {
	int* arr = new int[size];
	cout << "Enter Array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	return arr;
}
int* CompressArray(int* originalArr, int& size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size;) {
			if (*(originalArr + i) == *(originalArr + j)) {
				for (int k = j; k < size - 1; k++) {
					originalArr[k] == originalArr[k + 1];
				}
				size--;
			}
			else {
				j++;
			}
		}
	}
	return originalArr;
}
void OutputArray(const int* myArray, const int& size) {
	cout << "Compressed Array" << endl;
	for (int i = 0; i < size; i++) {
		cout << *(myArray + i);
		cout << endl;
	}
}
int main() {
	int size;
	cout << "Enter Size : ";
	cin >> size;
	cout << endl;
	int* s = InputArray(size);
	cout << endl;
	int* t = CompressArray(s, size);
	cout << endl;
	OutputArray(t, size);
	cout << endl << endl << endl;
	return 0;
}
