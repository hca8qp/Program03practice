#include "Medialib.h"

using namespace std;

Media::Media() {
    type = ' ';
    title = "";
    keyName = "";
    rating = 0;
    genre = "";
    length = 0;
    yearReleased = 0;
}

Media::Media(char type, string title, string keyname, int rating, string genre, int length, int yearReleased) {

}

char Media::getType() {

}
string Media::getTitle() {

}
string Media::getKeyName() {

}
int Media::getRating() {

}
int Media::getLength() {

}
int Media::getYearReleased() {

}
void Media::setType(char type) {

}
void Media::setTitle(string title) {

}
void Media::setKeyname(string keyName) {

}
void Media::setrating(int rating) {

}
void Media::setGenre(string genre) {

}
void Media::setlength(int length) {

}
void Media::setYearReleased(int yearReleased) {

}


int readMediaList(istream& in, ostream& outErr, vector<Media>& m) {

}
void printAllMedia(istream& in, ostream& out, ostream& outErr, const vector<Media>& m) {

}

void printMovieList(istream& in, ostream& out, ostream& outErr, const vector<Media>& m) {

}

void printBookList(istream& in, ostream& out, ostream& outErr, const vector<Media>& m) {

}

void printSongList(istream& in, ostream& out, ostream& outErr, const vector<Media>& m) {

}

void printTotals(ostream& out) {

}

void addNewMedia(istream& inCommands, ostream& out, ostream& outErr, vector<Media>& m) {

}