#include <iostream>

using namespace std;


//void printVec(int* vec) {
//	for (int i = 0; i < 3; i++) {
//		cout << *(vec+i) << "\n";
//	}
//}
//
//int main() {
//	int vec[] = { 1,2,3 };
//	printVec(vec);
//	system("pause");
//	return 0;
//	}


void absSwap(int* arr1, int* arr) {

	for (int i = 0; i < 20; i++)
	{
		if (arr[i] < 0){
			arr1[i] = arr[i] * (-1);

		}
		arr1[i] = arr[i];
	}
}


int main() {


	int* arr1=(int*)calloc(20, sizeof(int));
	int* arr = (int*)malloc(20 * sizeof(int));
	arr[0] = 1;
	arr[1] = -2;
	arr[2] = 14;
	arr[3] = -41;
	arr[4] = 157;
	arr[5] = 71;
	arr[6] = -81;
	arr[7] = 1;
	arr[8] = 1;
	arr[9] = -81;
	arr[10] = 81;
	arr[11] = 1;
	arr[12] = 81;
	arr[13] = -1;
	arr[14] = 41;
	arr[15] = 1;
	arr[16] =- 51;
	arr[17] = 178;
	arr[18] = -1;
	arr[19] = 17;
	arr[20] = 71;


	absSwap(arr1, arr);

	cout << "arr1: ";
	for (int i = 0; i < 20; i++) {
		cout << arr1[i]<<" ";
	}
	cout << "\narr: ";
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << " ";
	}

	free(arr1);
	free(arr);
	system("pause");
	return 0;
}
