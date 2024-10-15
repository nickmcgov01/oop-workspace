#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

typedef vector<int> Records; // Alias for storing records

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (!_file.is_open()) {
            throw runtime_error("Could not open the file: " + _filename);
        }

        string line;
        int lineNumber = 1;
        while (getline(_file, line)) {
            try {
                records.push_back(stoi(line)); // Convert to int
            } catch (const invalid_argument &e) {
                cerr << "Invalid argument at line " << lineNumber 
                     << " in file: " << _filename << endl;
                throw; // Re-throw exception to indicate error
            } catch (const out_of_range &e) {
                cerr << "Out of range error at line " << lineNumber 
                     << " in file: " << _filename << endl;
                throw; // Re-throw exception to indicate error
            }
            ++lineNumber;
        }
        _file.close();
    }
};

int main() {
    try {
        // Use one of the corrupt test files for testing
        RecordsManager recordManager("test_corrupt1.txt");
        Records myRecords;

        recordManager.read(myRecords); // Read records

        // Calculate and print the sum
        int sum = 0;
        for (int value : myRecords) {
            sum += value;
        }
        cout << "Sum: " << sum << endl;

    } catch (const runtime_error &e) {
        cerr << "Runtime error: " << e.what() << endl;
    } catch (const exception &e) {
        cerr << "An error occurred: " << e.what() << endl;
    }

    return 0;
}
