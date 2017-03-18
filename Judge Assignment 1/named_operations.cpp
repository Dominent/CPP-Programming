#include <iostream>
#include <vector>
#include <sstream>
#include <climits>
#include <map>
#include <cstdlib>

using namespace std;

#define SIZE 4
#define DEFAULT_NUMBERS_SIZE 10

typedef int FUNC(int *, int, int);

int Min(int *, int, int);
int Max(int *, int, int);
int Avg(int *, int, int);
int Sum(int *, int, int);

int main(void)
{
    string Input;

    int * Numbers = ( int * ) calloc(DEFAULT_NUMBERS_SIZE, sizeof(int));
    if (!Numbers)
    {
	return ( 1 );
    }
    int Size = DEFAULT_NUMBERS_SIZE;
    
    getline(cin, Input);

    stringstream InputStr(Input);
    int i = 0;
    for (int Tmp = 0; InputStr >> Tmp;)
    {
	if (i >= Size)
	{
	    Size *= 2;
	    int * NewPtr = ( int * ) calloc(Size, sizeof(int));
	    
	    copy(Numbers, Numbers + i, NewPtr);

	    free(Numbers);

	    Numbers = NewPtr;
	}

	Numbers[i] = Tmp;
	++i;
    }

    Size = i;
    
    int P = 0;

    cin >> P;

    map<string, int> Commands;

    for (int i = 0; i < P; ++i)
    {
	string Key = "";
	int Value = 0;

	cin >> Key >> Value;

	Commands[Key] = Value;
    }

    FUNC * Opperations[SIZE] = { Sum, Avg, Min, Max };

    int Start = 0;
    int End = 0;
    string Command;
    int Count = 0;
    string Output = "{";
    while (cin >> Command )
    {
	if (Command == "end")
	{
	    break;
	}
	cin >> Start >> End;

	int Result = Opperations[Commands[Command]]( Numbers, Start, End );
	
	Output += Command + "(" + to_string(Start) +
	    "," + to_string(End) + ")=" + to_string(Result);
	Output += ",";
	++Count;
    }

    cout << "[" <<Count << "]" << Output.substr(0, Output.size( ) - 1) << "}" <<  endl;

    return ( 0 );
}

int Min(int * Numbers, int Start, int End)
{
    int MinR = INT_MAX;
    for (int i = Start; i < End; ++i)
    {
	if (MinR > Numbers[i])
	{
	    MinR = Numbers[i];
	}
    }

    return MinR;
}

int Max(int * Numbers, int Start, int End)
{
    int MaxR = INT_MIN;
    for (int i = Start; i < End; ++i)
    {
	    if (MaxR < Numbers[i])
	    {
		MaxR = Numbers[i];
	    }
    }
	
    return MaxR;
}

int Sum(int * Numbers, int Start, int End)
{
    int Sum = 0;
    for (int i = Start; i < End; ++i)
    {
	Sum += Numbers[i];
    }

    return Sum;
}

int Avg(int * Numbers, int Start, int End)
{
    int Average = Sum(Numbers, Start, End) / ( End - Start );
    
    return Average;
}
