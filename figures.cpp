// Displays five different figures with nested loops
// Kaila Anderson
// September 12, 2022

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	int figureSize;
	char paintCharacter;

	cout << "Input figure size ";
	cin >> figureSize;
	cout << "Input paint character ";
	cin >> paintCharacter;

	cout << "Figure One" << endl;

	for (int row = 0; row < figureSize; ++row) {
		for (int column = 0; column < figureSize; ++column) {
			cout << paintCharacter;
		}
		cout << endl;
	}

	cout << "------------------- " << endl << "Figure Two" << endl;

	for (int row = 0; row < figureSize; ++row) {
		for (int column = 0; column < figureSize; ++column) {
			if (row == 0)
				cout << paintCharacter;

			else if (column == 0)
				cout << paintCharacter;

			else if (column == figureSize - 1)
				cout << paintCharacter;

			else if (row == figureSize - 1)
				cout << paintCharacter;

			else
				cout << " ";

		}
		cout << endl;
	}

	cout << "-----------------------" << endl << "Figure Three" << endl;

	for (int row = 0; row < figureSize; ++row) {
		for (int column = 0; column < figureSize; ++column) {

			if (row == column)
				cout << paintCharacter;
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << "--------------" << endl << "Figure Four" << endl;

	for (int row = 0; row < figureSize; ++row) {
		for (int column = 0; column < figureSize; ++column) {

			if (row + column == figureSize - 1)
				cout << paintCharacter;
			else
				cout << " ";
		}
		cout << endl;
	}


	cout << "------------------" << endl << "Figure Five" << endl;


	for (int row = 0; row < figureSize; ++row) {
		for (int column = 0; column < figureSize; ++column) {

			if (figureSize / 2 == row + column)
				cout << paintCharacter;

			else if (column - row == figureSize / 2)
				cout << paintCharacter;

			else if (row == figureSize / 2)
				cout << paintCharacter;

			else
				cout << " ";



		}cout << endl;
	}


}