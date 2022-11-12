#ifndef ANALOGIN_H
#define ANALOGIN_H
	#include<iostream>
	#include<fstream>
	#include<sstream>
	#include<string>

	using namespace std;

	#define PATH_AIN "/sys/bus/iio/devices/iio:device0"

	class analogin
	{
		private:
			unsigned int number;

		public:
			analogin();
			analogin(unsigned int n);
			virtual unsigned int getNumber(){return number;}
			virtual void setNumber(unsigned int n);
			virtual int readADCsample();
			virtual ~analogin();
	};

#endif

