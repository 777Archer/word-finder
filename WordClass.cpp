/*David Archer
Word Finder*/

#include"WordClass.h"

WordClass::WordClass(string filename)
{
    filename = "data.txt";
    fstream data;
    data.open(filename.c_str());
    if (data.fail())
    {
        cout << "ERROR: " << filename << " is not found. Exiting...." << endl;
        system("exit");
    }
    numWords = 0;
    while (!data.eof())
    {
        data >> words[++numWords];
    }
    sort();
}

int WordClass::searchWord(string word)
{
    return binarySearch(words, 0, numWords - 2, word);
}

void WordClass::sort()
{
    for (int i = 0; i < numWords - 1; ++i)
    {
        for (int j = i; j < numWords; ++j)
        {
            if (words[i] > words[j])
            {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
}

int WordClass::binarySearch(string arr[], int start, int end, string val)
{
    if (end >= start) 
    {
        int middle = start + (end - start) / 2;
        if (arr[middle] == val)
            return middle;
        if (arr[middle] > val)
            return binarySearch(arr, start, middle - 1, val);
        return binarySearch(arr, middle + 1, end, val);
    }
    return -1;
}