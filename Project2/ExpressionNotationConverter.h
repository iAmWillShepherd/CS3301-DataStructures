#pragma once
#include <string>
#include "Stack.h"

using namespace std;

class ExpressionNotationConverter
{
	//Fields
	static const int OPERAND = -1;

	static int DeterminePrecidence(char c);

public:
	//Members
	static string ConvertInfixToPostfix(string expression);
};

