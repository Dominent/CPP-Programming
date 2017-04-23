#pragma once

#include <sstream>

#include "LineParser.hpp"

LineParser::LineParser(const string & Line) :
	Line(Line)
{
	Initialize( );
}

void LineParser::ChangeLine(const string & Line)
{
	this->Line = Line;

	Reset( );
	Initialize( );
}

vector<int> LineParser::GetNumbers( ) const
{
	return this->Numbers;
}

vector<string> LineParser::GetStrings( ) const
{
	return this->Strings;
}

vector<char> LineParser::GetChars( ) const
{
	return this->Chars;
}

string LineParser::ToString( )
{
	stringstream OutputStream;

	OutputStream << "Strings: " << VectorToString<string>(Strings) << endl;
	OutputStream << "Numbers: " << VectorToString<int>(Numbers) << endl;
	OutputStream << "Chars: " << VectorToString<char>(Chars) << endl;

	return ( OutputStream.str( ) );
}

bool LineParser::IsNumber(string Input, int & Output)
{
	Output = atoi(&Input[0]);

	return Output != 0;
}

void LineParser::Initialize( )
{
	stringstream LineStream(this->Line);

	string Input = "";
	while (LineStream >> Input)
	{
		int Number = 0;
		if (IsNumber(Input, Number))
		{
			this->Numbers.push_back(Number);
		}
		else if (Input.size( ) == 1)
		{
			this->Chars.push_back(Input[0]);
		}
		else
		{
			this->Strings.push_back(Input);
		}
	}
}

void LineParser::Reset( )
{
	this->Numbers.clear( );
	this->Strings.clear( );
	this->Chars.clear( );
}

template<class T> string LineParser::VectorToString(vector<T> Input)
{
	stringstream InputStream;

	for (auto Item : Input)
	{
		InputStream << Item << " ";
	}

	return InputStream.str( );
}
