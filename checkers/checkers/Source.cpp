#include <iostream>
#include <string>

#define SIZE 8
#define WHITE "Wh"
#define BLACK "Bl"
#define KING_WHITE "kWh"
#define KING_BLACK "kBl"
#define EMPTY "-"

using namespace std;

void starting_field(string** field) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			field[i][j] = EMPTY;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				field[i][j] = WHITE;
			}
			if (i % 2 != 0 && j % 2 != 0) {
				field[i][j] = WHITE;
			}
		}
	}

	for (int i = 5; i < 8; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i % 2 != 0 && j % 2 == 0){
				field[i][j] = BLACK;
			}
			if (i % 2 == 0 && j % 2 != 0) {
				field[i][j] = BLACK;
			}
		}
	}
}
int main() {
	string** field = new string*[SIZE];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			field[i] = new string[SIZE];
		}
	}

	starting_field(field);

	int player_white, player_black;
	cout<<""

	return 0;
}