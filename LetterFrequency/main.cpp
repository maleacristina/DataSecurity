#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int total[26] = {0};

    ifstream infile("input.txt");
    if (!infile)
    {
        cout << "Error opening input file" << endl;
        return 0;
    }

    char c;
    while (infile.get(c))         // read characters one at a time
    {
        if (isalpha(c))           // check it is a-z or A-Z
        {
            c = toupper(c);       // make it always A-Z

                                  // char A-Z has ascii code  65 to 90
                                  // Subtract 'A' to get
            int index = c - 'A';  // index in range 0 to 25;

            total[index]++;       // increment corresponding total
        }
    }


    for (int i=0; i<26; i++)
    {
        cout << "  " << char(i+'A') << " occurs "
             << '-' <<" "<< total[i] << " times" << endl;
    }

    return 0;
}
