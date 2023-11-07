
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Media {
public:
	Media();
	Media(char type, string title, string keyname, int rating, string genre, int length, int yearReleased);

	char getType();
	string getTitle();
	string getKeyName();
	int getRating();
	int getLength();
	int getYearReleased();

	void setType(char type);
	void setTitle(string title);
	void setKeyname(string keyName);
	void setrating(int rating);
	void setGenre(string genre);
	void setlength(int length);
	void setYearReleased(int yearReleased);

private: 
	char type; 
	string title; 
	string keyName; 
	int rating; 
	string genre; 
	int length; 
	int yearReleased;

};

int readMediaList(istream& in, ostream& outErr, vector<Media>& m);
void printAllMedia(istream& in, ostream& out, ostream& outErr, const vector<Media>& m);
void printMovieList(istream& in, ostream& out, ostream& outErr, const vector<Media>& m);
void printBookList(istream& in, ostream& out, ostream& outErr, const vector<Media>& m);
void printSongList(istream& in, ostream& out, ostream& outErr, const vector<Media>& m);
void printTotals(ostream& out);
void addNewMedia(istream& inCommands, ostream& out, ostream& outErr, vector<Media>& m);