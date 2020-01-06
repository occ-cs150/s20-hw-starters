/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "sgilbert"; //"WHO AM I?"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
using namespace std;

string digit(int digit, const string& symbols)
{
    string one = symbols.substr(0, 1);
    string five = symbols.substr(1, 1);
    string ten = symbols.substr(2, 1);

	if (digit == 9) return one + ten;   // IX or XC, etc
	if (digit == 4) return one + five;	// IV

	string digitStr;
	if (digit >= 5)
	{
		digitStr = five;		// assume digit 7 -> digitStr = "V"
		digit = digit - 5;      // digit becomes 2
	}

	switch (digit)
	{
    	case 3:	return digitStr + one + one + one; // VIII
    	case 2: return digitStr + one + one; // II
    	case 1: return digitStr + one;
    	default: return digitStr;
	}
}

const string OOR = "OUT OF RANGE";
string toRoman(int num)
{
    // Make sure it's in range
    if (num <= 0 or num >= 4000) { return OOR; }

	string roman = ones(num % 10);
    num /= 10;
    roman = tens(num % 10) + roman;
    num /= 10;
    roman = hundreds(num % 10) + roman;
    num /= 10;

	switch(num)
	{
    	case 3:	return "MMM" + roman;
    	case 2: return "MM" + roman;
    	case 1: return "M" + roman;
    	default: return roman;
	}
}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}