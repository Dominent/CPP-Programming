#include <iostream>
#include <string>

using namespace std;

int main ( void )
{
    int MaxSequence = 0;
    int MaxNumber = 0;
    
    int Input[] = { 5, 17, 34, 125, 125, -7, 5, 14, 127, 5, 3, 1, 5 };
    int Number = Input[0];
    int Sequence = 1;

    int Size = (sizeof(Input) / sizeof(int));
    
    for(int i = 1; i < Size; ++i)
    {
	if(Number == Input[i])
	{
	    ++Sequence;
	}
	else
	{
	    // NOTE(Domi): Add check when loop ends!
	    if(Sequence > MaxSequence)
	    {
		MaxSequence = Sequence;
		MaxNumber = Number;
	    }
	    
	    Sequence = 1;
	    Number = Input[i];
	}
    }

    string Output = "";
    for(int i = 0; i < MaxSequence - 1; ++i)
    {
	Output += (to_string(MaxNumber) + " ");
    }
    Output += to_string(MaxNumber);

    cout << Output << endl;

    return ( 0 );
}
