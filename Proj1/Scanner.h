#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#ifndef SCANNER_H
#define SCANNER_H

const int OpenParenthesis = 1, ClosingParenthesis = 2, LiteralAtom = 3, NumericAtom = 4;
const int ErrorToken = 5, Eof = 6;

struct Tokenizer {
	string TokenString;
	int TokenType;
} ;

class Scanner {
private:
	Tokenizer current;
public:
	void Init();
	Tokenizer GetCurrent();
	void MoveToNext();

	bool IsLiteralAtom(string S);
	bool IsNumericAtom(string S);
	Tokenizer getNextToken(istream & inputFile);
	void ScannerPrint();
};

#endif