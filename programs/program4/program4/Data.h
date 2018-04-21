#pragma once
class Data
{

	
	

public:
	Data();
	Data(int arrivalTimeInput, int processingTimeInput, char jobTypeInput);
	~Data();

	int arrivalTime;
	int processingTime;
	char jobType;

	bool operator< (const Data &c1) const;
};

