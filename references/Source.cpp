#include <iostream>

using namespace std;

////EXERCICE 1
//void doubleNum(unsigned short* number){
//	*number *= 2;
//}
//
//int main() {
//	unsigned short number;
//	cout << "Give me a number between 1 and 100: ";
//	cin >> number;
//	doubleNum(&number);
//	cout << number << "\n";
//	system("pause");
//	return 0;
//}

//EXERCICE 2
//It makes a constant pointer that can't be changed, only read.

//EXERCICE 3

struct pirate {
	char* name ;
	int lifeunits ;
};

struct weapon {
	char* name ;
	int damage ;
};

void printpirateinfo(const pirate& p) {
	cout << "\n-- Pirate --\nname = " << p.name << "\nlife units = " << p.lifeunits<<"\n";
}

void printweaponinfo(const weapon& w) {
	cout << "\n-- Weapon --\nname = " << w.name << "\ndamage units = " << w.damage << "\n";
}

void attack(pirate p, weapon w) {
	p.lifeunits -= w.damage;
}

int main() {
	pirate p;
	p.name = { "leChuck" };
	p.lifeunits = 100;
	weapon w;
	w.name = { "sword" };
	w.damage = 10;
	attack(p, w);
	printpirateinfo(p);
	system("pause");
	return 0;
}