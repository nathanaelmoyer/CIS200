#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int age;
	float price;
	int speed;
	string heading;
	int fuel;
	int numberOfPassengers;
	int numEngines;
	bool engineStatus;
	int distance;

public:
	Vehicle();
	~Vehicle();

	int getAge();
	void setAge(int input);

	float getPrice();
	void setPrice(float input);

	int getSpeed();
	void setSpeed(int input);

	string getHeading();
	void setHeading(string input);

	int getFuel();
	void setFuel(int input);

	int getNumberOfPassengers();
	void setNumberOfPassengers(int input);

	int getNumEngines();
	void setNumEngines(int input);

	bool getEngineStatus();
	void setEngineStatus(bool input);

	int getDistance();
	void setDistance(int input);

	void start();	//update engine status to true

	void stop();	//update speed to 0

	void move();	//add input to total distance moved

	void acelerate(int input);	//add input to speed
	
	void decelerate(int input);	//subtract input from speed

	void off();	//update engine status to fasle

	void turn(string input); //update heading
};

