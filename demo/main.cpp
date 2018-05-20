#include "Interpreter.h"

int main()
{
	//cout << "Scanning ..." << endl;
	//ScannerPrint();
	//cout << "Parsing ..." << endl;
	//Parser par;
	//par.ParseStart();
	Interpreter inter;
	double a = inter.rtclock();
	inter.EvalStart();
	double b = inter.rtclock();
	cout << b - a << endl;
	return 0;
}