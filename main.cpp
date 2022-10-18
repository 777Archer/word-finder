/*David Archer
Word Finder*/

#include"WordClass.h"

using namespace std;

int main()
{
    string filename;
    cout << "File to read word: ";
    cin >> filename;
    WordClass obj(filename);
    string word;
    while (true)
    {
        cout << "Word to find (\"quit\" to exit): ";
        cin >> word;
        if (word == "quit")
            break;
        int pos = obj.searchWord(word);
        if (pos >= 0)
            cout << "Word " << word << " is at location " << pos << endl;
        else
            cout << "Word " << word << " not found" << endl;
    }
    system("pause");
    return 0;
}