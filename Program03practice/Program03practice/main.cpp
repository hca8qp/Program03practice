#include <iostream>
#include <fstream>
#include <vector>
#include "Medialib.h"
using namespace std;

int main() {
	vector<Media> mediaCollection;
	ifstream mediaFile("mediaList.txt");
	ifstream mediaCommandsFile("mediaCommands.txt");
	ofstream outFile("output.txt");
	ofstream errorFile("error.txt");



	if (!mediaFile.is_open() || !outFile.is_open() || !outFile.is_open() || !errorFile.is_open()) {
		cerr << "Error opening files." << endl;
		return 1; //Exiting with an error code
	}

	if (readMediaList(mediaFile, errorFile, mediaCollection) != 0) {
		cerr << "Error: Failed to read media information." << endl;
		return 1; // Exit with an error code.
	}

	char option;

	while (true) {
		cout << "Enter a command (M, B, S, A, N, Q): ";
		cin >> option;

		if (option == 'M') {
			printMovieList(cin, outFile, errorFile, mediaCollection);
		}
		else if (option == 'B') {
			printBookList(cin, outFile, errorFile, mediaCollection);
		}
		else if (option == 'A') {
			printAllMedia(cin, outFile, errorFile, mediaCollection);
		}
		else if (option == 'S') {
			//printSongList(cin, outFile, errorFile, mediaCollection);
		}
		else if (option == 'N') {
			addNewMedia(cin, outFile, errorFile, mediaCollection);
		}
		else if (option == 'Q') {
			break;
		}
		else {
			cout << "Invalid command.Try again." << endl;
		}
	}
	printTotals(outFile);

	mediaFile.close();
	mediaCommandsFile.close();
	outFile.close();
	errorFile.close();


	return 0; //Exiting with a sucess code

}