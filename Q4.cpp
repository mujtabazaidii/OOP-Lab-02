#include<iostream>
using namespace std;
int* InputArray1(int& size) {
	int* arr1 = new int[size];
	cout << "Enter First Array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(arr1 + i);
	}
	return arr1;
}
int* InputArray2(int& size) {
	int* arr2 = new int[size];
	cout << "Enter Second Array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(arr2 + i);
	}
	return arr2;
}
int* Intersection(int* setA, int& size1, int* setB, int& size2, int& size3) {
	int* setC = new int[size3];
	int c = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (*(setA + i) == *(setB + j)) {
					*(setC + c) = *(setA + i);
					c++;
			}
		}
	}
	int* s = new int[c];
	for (int i = 0; i < c; i++) {
		*(s + i) = *(setC + i);
	}
	size3 = c;
	return s;
}
void OutputArray(const int* myArray, const int& size) {
	cout << "Intersection of Array" << endl;
	for (int i = 0; i < size; i++) {
		cout << *(myArray + i);
		cout << endl;
	}
}
int main() {
	int size1,size=0;
	cout << "Enter First Array Size : ";
	cin >> size1;
	int* s = InputArray1(size1);
	cout << endl;
	int size2;
	cout << "Enter Second Array Size : ";
	cin >> size2;
	int* t = InputArray2(size2);
	cout << endl;
	int size3;
	if(size1>size2){
    size3=size1;
	}else{
	size3=size2;
	}
	int *u = Intersection(s, size1, t, size2, size3);
	cout << endl;
	OutputArray(u, size3);
	cout << endl << endl << endl << endl;
	return 0;
}
