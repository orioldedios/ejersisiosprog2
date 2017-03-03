#include <iostream>

using namespace std;


void printVec(int* vec) {
	for (int i = 0; i < 3; i++) {
		cout << *(vec+i) << "\n";
	}
}

int main() {
	int vec[] = { 1,2,3 };
	printVec(vec);
	system("pause");
	return 0;
	}
