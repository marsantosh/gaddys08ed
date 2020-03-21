// main.cpp
// this program demonstrates the use of classes
// to put tabular data on the WWW
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


/*
 * this is a convenience class uses to convert
 * an array of strings into a vector of strings
 * the array of strings must be (sentinel)-terminated
 * by a string of length 0.
 */
class StringVector : public vector<string> {
    public:
        StringVector(string s[]) {
            int k = 0;
            while (s[k].length() != 0) {
                this->push_back(s[k]);
                k++;
            }
        }
};


/*
 * this class allows a 2-dimensipnal table expressed as
 * vectors of vector of strings to be transformed into HTML form
 */
class HTMLTable {
    private:
        vector<string> headers;
        vector<vector<string>> rows;
        // helper mehtod for writing an HTML row ina  table
        void writeRow(ostream &out, string tag, vector<string> row);
    public:
        // set headers for the table columns
        void setHeaders(const vector<string> &headers) { this->headers = headers; }
        // add rows to the table
        void addRow(const vector<string> &row) { rows.push_back(row); }
        // write the table into HTML from onto an output stream
        friend ostream &operator << (ostream &out, HTMLTable HTMLTable);
};


/*
 * writes a row of the table, using the given tag for the table data.
 * the tag may be td for table data or th for table header
 */
void HTMLTable::writeRow(ostream &out, string tag, vector<string> row) {
    out << "<tr>\n";
    for (unsigned int k = 0; k < headers.size(); k++) {
        out << "<" << tag << "> "
            << row[k] << " </" << tag << "> ";
    }
    out << "\n</tr>\n";
}


/*
 * overloaded stram output operator <<
 */
ostream &operator<<(ostream &out, HTMLTable htmlTable) {
    out << "<table border = \"1\">\n";
    // write the headers
    htmlTable.writeRow(out, "th", htmlTable.headers);
    
    // write the rows of the table
    for (unsigned int r = 0; r < htmlTable.rows.size(); r++) {
        htmlTable.writeRow(out, "td", htmlTable.rows[r]);
    }

    // write end tag for table
    out << "</table>\n";
    return out;
}


int main() {
    // hard.coded data for table column headers
    // the arrays must have empty string sentinels
    string headers[] = { "Name", "Address", "Phone", ""};

    // Hard-coded data for the two roes of the table
    // the arrays must have empty string sentinels
    string person1[] = { "Mike Sane", "1215 Mills St", "630-728-1293", "" };
    string person2[] = { "Natasha Upenski", "513 Briarcliff Ln", "412-672-1004", "" };

    // create the HTML table object and set its members
    HTMLTable hTable;
    hTable.setHeaders(StringVector(headers));
    hTable.addRow(StringVector(person1));
    hTable.addRow(StringVector(person2));

    // open a file and write the HTML code to the file
    ofstream outFile("table.html");
    outFile << hTable;
    outFile.close();

    // write the same HTML code to the screen for ease of viewing
    cout << hTable;
    // use the default browser to biew generated HTML table
    system("table.html");

    return 0;
}