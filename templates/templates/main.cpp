#include <iostream>

using namespace std;


template <class type> type sum(type a, type b) {
	return (a + b);
	}

int main() {



		cout << sum<float>(1.5, 2.2) << endl;
		cout << sum<int>(3, 4) << endl;




	system("pause");
	return 0;
}