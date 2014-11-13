#ifndef _ARGUMENTS
#define _ARGUMENTS

#include "winlib.h"

using namespace std;



//Argument class
class argument{
	string textBody;
public:
	//Gets
	void getTextBody();
	//Sets
	bool setTextBody(string);
};

//Class: argument, get text body
void argument::getTextBody(){
	cout << textBody << endl;
}

//Class: argument, set text body with a string
bool argument::setTextBody(string text){
	textBody = text;

	return 0;
}



//Opinion argument class
class opinion : public argument{};



//Controlled experiment argument class
class ctrlExp : public argument{
	enum{ noCorrelation, negativeCorrelation, positiveCorrelation };
	int correlation;
public:
	//Gets
	int getCorr();
	//Sets
	bool setCorr(int);
};

//Class: controlled experiment argument, get correlation
int ctrlExp::getCorr(){
	return correlation;
}

//Class: controlled experiment argument, set correlation
bool ctrlExp::setCorr(int num){
	correlation = num;

	return 0;
}

#endif