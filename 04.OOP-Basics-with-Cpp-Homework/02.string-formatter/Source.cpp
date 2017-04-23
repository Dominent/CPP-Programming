#include <iostream>
#include <string>
#include <vector>

#include "StringFormatter.hpp"

using namespace std;

int main( )
{
	string Text = "Dear *:0, Our company *:1 wants to make you a Donation Of *:2 Million *:3 in good faith. Please send us a picture of your credit card";

	StringFormatter Formatter(Text, "*:");
	Formatter.Format<string>({ "Ben Dover", "Totally Legit NonSpam Ltd", "13", "Leva" });
	cout << Text;

	return ( 0 );
}