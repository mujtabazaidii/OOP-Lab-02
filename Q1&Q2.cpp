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
void OutputArray(const int* myArray, const int& size) {
	cout << "Given Array" << endl;
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
	OutputArray(s, size);
	cout << endl << endl << endl << endl;
	return 0;
}