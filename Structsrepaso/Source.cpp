#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
	char* name;
	char* position;
	int number;
} player;

typedef struct {
	char* name;
	player players[6];
} team;

void printTeam(team t);
void printByPosition(team t, char* position);

int main() {
	team c = {
		"carboners",
		{
			{ "Olaf", "goalkeeper", 798	},
			{ "Javiersitoh", "goalkeeper", 8 },
			{ "Ori", "defense", -98 },
			{ "Moo", "forward", -99 },
			{ "Apu", "midfield", 492837 },
			{ "tioooo", "goalkeeper", 1 }
		}
	};
	printTeam(c);
	printByPosition(c, "goalkeeper");
	printByPosition(c, "defense");
	printByPosition(c, "midfield");
	printByPosition(c, "forward");

	system("pause");
	return 0;
}

void printTeam(team t) {
	for (int i = 0; i < 6; i++) {
		cout << "Player " << t.players[i].number << ": " << t.players[i].name << "\n";
	}
}

void printByPosition(team t, char* position) {
	for (int i = 0; i < 6; i++) {
		if (strcmp(position, t.players[i].position) == 0) {
			cout << "Player that is " << t.players[i].position << ": " << t.players[i].name << "\n";
		}
	}
}