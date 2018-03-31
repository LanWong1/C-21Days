// 21Days_11.1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

enum BREED { Golden, Cairn, Dandie, SHETLAND, DOBERMAN, LAB};
class Mammal
{
public:
	Mammal() :itsAge(2), itsWeight(5) {}

	~Mammal() {}

	int GetAge() const { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }


	void Speak() const { cout << "I am Mammal" << endl; }
	void Sleep() const { cout << "I am sleepping " << endl; }


protected:
	int itsAge;
	int itsWeight;
};
class Dog : public Mammal
{
public:
	Dog() :itsBreed(Golden) {}
	~Dog() {}

	BREED GetBreed()const { return itsBreed; }
	void SetBreed(BREED breed) { itsBreed = breed; }


	void WagTail() const { cout << "Tail wagging...\n"; }
	void BegFordFood()const { cout << "Begging for food...\n"; }

protected:
	BREED itsBreed;
};


int main()
{
	Dog Fido;
	Fido.Speak();
	Fido.WagTail();
	cout << "Fido is "<< Fido.GetAge() << " years old"<< endl;
	return 0;

}

