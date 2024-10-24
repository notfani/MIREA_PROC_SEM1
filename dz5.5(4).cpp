#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> readWordsFromFile(const string& filename) {
    vector<string> words;
    ifstream file(filename);
    string word;
    while (file >> word) {
        words.push_back(word);
    }
    file.close();
    return words;
}

void writeWordsToFile(const string& filename, const vector<string>& words) {
    ofstream file(filename);
    for (const auto& word : words) {
        file << word << endl;
    }
    file.close();
}

int main() {
    setlocale(LC_ALL, "Ru");
    string filename = "yourfile.txt";
    vector<string> words = readWordsFromFile(filename);
    sort(words.begin(), words.end());
    string newWord = "Kosoy";
    words.insert(upper_bound(words.begin(), words.end(), newWord), newWord);
    writeWordsToFile(filename, words);
    cout << "Готово" << endl;
    return 0;
}