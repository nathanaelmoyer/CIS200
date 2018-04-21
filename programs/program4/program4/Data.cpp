#include "Data.h"



Data::Data()
{
	arrivalTime = 0;
	processingTime = 0;
	jobType = 'Q';
}


Data::Data(int arrivalTimeInput, int processingTimeInput, char jobTypeInput)
{
	arrivalTime = arrivalTimeInput;
	processingTime = processingTimeInput;
	jobType = jobTypeInput;
}

Data::~Data()
{
}


bool Data::operator<(const Data &c1) const
{
	return arrivalTime > c1.arrivalTime;
}
