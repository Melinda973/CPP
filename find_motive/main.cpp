#include <iostream>
#include <iosfwd>
#include <fstream>

using namespace std;

int main(int argc , char *argv[])
{
    ifstream file(argv[1]);
    if (file.fail())
    {
        cout << "The file " << argv[1] << " could not be opened." << endl;
        return 1;
    }

    string word;
    int x = 0;

    while(file >> word)
    {
       if (word.find(argv[2]) != string::npos)
            x++;
    }
    cout << "The file " << argv[1] << " contains "<< x << " words containing the motive " << argv[2] << endl;
    return 0;
}
