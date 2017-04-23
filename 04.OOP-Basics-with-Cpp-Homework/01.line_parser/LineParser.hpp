#pragma once

#include <vector>
#include <string>

using namespace std;

class LineParser
{
public:
	LineParser(const string &);

	vector<int> GetNumbers( ) const;
	vector<string> GetStrings( ) const;
	vector<char> GetChars( ) const;

	void ChangeLine(const string &);
	string ToString( );
private:
	string Line;
	vector<int> Numbers;
	vector<string> Strings;
	vector<char> Chars;

	void Initialize( );
	void Reset( );
	bool IsNumber(string, int &);
	template <class T> string VectorToString(vector<T>);
};