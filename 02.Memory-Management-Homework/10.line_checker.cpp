#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define TEXT_FILE_NAME_1 "Text_1.txt"
#define TEXT_FILE_NAME_2 "Text_2.txt"

int main ( void )
{
    string FileOutput1;
    string FileOutput2;

    ifstream TextFile1(TEXT_FILE_NAME_1);
    ifstream TextFile2(TEXT_FILE_NAME_2);
    bool AreEqual = true;
    
    if(TextFile1.is_open() && TextFile2.is_open())
    {
	while ( getline(TextFile1, FileOutput1) && getline(TextFile2, FileOutput2) )
	{
	    if(FileOutput1 != FileOutput2)
	    {
		AreEqual = false;
		break;
	    }
	}
	
	TextFile1.close();
	TextFile2.close();
    }

    cout << AreEqual << endl;

    return ( 0 );
}
