#include "analogin.h"

analogin::analogin()
{
    number = 0;
}

analogin::analogin(unsigned int n)
{
    number = n;
}

void analogin::setNumber(unsigned int n)
{
    number = n;
}

int analogin::readADCsample()
{
    ostringstream ss;
    ss << PATH_AIN << "/in_voltage" << number << "_raw";
    string path = string(ss.str());
    
    ifstream fs;
	fs.open(path.c_str());
	string In;
	getline(fs,In);
	fs.close();

	return stoi(In);	
}

analogin::~analogin()
{
}