#include <iostream>
#include <vector>
#include <time.h>
#include <random>

using namespace std;

vector<int> find(vector<int> arr1, vector<int> arr2, int size, int& counter) {
	vector<int> FinalArr;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr1[i] == arr2[j] && arr1[i] != 2147483647 && arr2[j] != 2147483647) {
				FinalArr.push_back(arr2[j]);
				counter++;
				arr1[i] = 2147483647;
				arr2[j] = 2147483647;
			}
		}
	}
	return FinalArr;
}

void coutArr(vector<int> arr, int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
int main() {
	system("chcp 1251>nul");
	srand(time(NULL));
	cout << "Введiть розмiр масивiв: "; int size; cin >> size;
	vector<int> arr1(size); vector<int> arr2(size);
	vector<int> FinalArr; int counter = 0;

	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
	}
	cout << "Масив #1: "; 	coutArr(arr1, size);
	cout << "\nМасив #2: "; 	coutArr(arr2, size);

	FinalArr = find(arr1, arr2, size, counter);
	cout << "\nФiнальний масив: "; coutArr(FinalArr, counter);


	return 0;
}

/*
Розгляньте приклад використання динамічних масивів.
Створіть програму з використанням векторів, яка би
знаходила у двох векторах спільні елементи і записувала їх у третій.
Пошук і додавання спільних елементів
бажано реалізувати у вигляді функції.
*/
