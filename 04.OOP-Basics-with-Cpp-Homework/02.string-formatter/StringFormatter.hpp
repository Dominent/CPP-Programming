#pragma once

#include <sstream>
#include <vector>
#include <regex>

using namespace std;

class StringFormatter
{
public:
	StringFormatter(string &, const string &);
	template<typename T> void Format(vector<T>);
private:
	string FormatPrefix;
	string & Text;
};

/// <summary>
///	Formats the placeholders with their corresponding values from the <see cref="Input"/> collection.
/// </summary>
/// <remarks>Template function placed here because of linker bug.</remarks>
/// <param name="Input">The input collection.</param>
/// <exception cref="InvalidArgumentExeption">
/// Possible invalid arugment exeption when parsing possition.
/// </exception>
template<typename T> void StringFormatter::Format(vector<T> Input)
{
	string TextCpy(this->Text);

	for (smatch Matches;
		 regex_search(TextCpy, Matches, regex("[" + this->FormatPrefix + "]+([0-9]+)"));)
	{
		for (auto Match : Matches)
		{
			int Pos = stoi(Matches[1].str( ));
			string Word = Input[Pos];

			stringstream Pattern;
			Pattern << "[" << this->FormatPrefix << "]+" << Pos;

			this->Text = regex_replace(this->Text, regex(Pattern.str()), Word);

			break;
		}

		TextCpy = Matches.suffix( ).str( );
	}
}