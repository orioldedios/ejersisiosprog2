#include<iostream>
#include "Point2D.h"

using namespace std;


enum Color { red=1,green,blue };


int main() {
	Color col = red;

	if (col == 1) {

		cout <<col<<"\n"<< "isred" << "\n";
	}
	system("pause");
	return 0;
}

//int main() {
//	Point2D p(0,0);
//	Point2D p1(1,1);
//
//	p.setX(2);
//	p.setY(3);
//
//	cout << p.maxCoord << "\n";
//
//
//
//	system("pause");
//	return 0;
//
//}