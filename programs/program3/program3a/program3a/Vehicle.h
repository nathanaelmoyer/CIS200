#pragma once
class Vehicle
{
private:
	int age;
	float price;
public:
	Vehicle();
	~Vehicle();

	void setAge(int input);
	void setPrice(float input);

	int getAge();
	float getPrice();
};

