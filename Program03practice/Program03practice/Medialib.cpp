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
    type = type;
    title = title;
    keyName = keyName;
    rating = rating;
    genre = genre;
    length = length;
    yearReleased = yearReleased;
}

void Media::setType(char type) {
    type = type;
}
char Media::getType() const{
    return type;
}
void Media::setTitle(string title) {
    rating = rating;
}
string Media::getTitle() const {
    return title;
}

void Media::setKeyname(string keyName) {
    keyName = keyName;
}
string Media::getKeyName() const{
    return keyName;
}
void Media::setrating(int rating) {
    rating = rating;
}
int Media::getRating() const{
    return rating;
}
void Media::setlength(int length) {
    length = length;
}
int Media::getLength() {
    return length;
}

void Media::setGenre(string genre) {
    genre = genre;
}
string Media::getGenre() {
    return genre;
}
void Media::setYearReleased(int yearReleased) {
    yearReleased = yearReleased;
}
int Media::getYearReleased() const {
    return yearReleased;
}
int readMediaList(istream& in, ostream& outErr, vector<Media>& m) {///can be void
        string line;
        int lineNumber = 0;  // To keep track of the line number being processed

        while (getline(in, line)) {
            lineNumber++;
            
            istringstream iss(line);
            vector<string> fields;
            string field;
            while (getline(iss, field, ',')) {
                fields.push_back(field);
            }// Parse and extract information, create Media objects, and add them to the vector

            // If an error occurs while reading or parsing the data, return an error code
            //if (/* some error condition */) {
                //outErr << "Error: Failed to read media information on line " << lineNumber << "." << endl;
                //return 1;  // Or any other appropriate error code
            }
        }

        // Return 0 to indicate success
        return 0;
    }
}
void printAllMedia(istream& in, ostream& out, ostream& outErr, const vector<Media>& m) {
    out << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    out << "             YOUR MEDIA LIST" << endl;
    out << endl;
    out << "#           TITLE                           YEAR    RATING   TYPE" << endl;

    int counter = 1;
    for (const Media& mediaItem : m) {
        out << counter << "  " << setw(42) << left << mediaItem.getTitle();
        out << setw(8) << mediaItem.getYearReleased();
        out << setw(7) << mediaItem.getRating();
        out << setw(7) << mediaItem.getType() << endl;
        counter++;
    }
   
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