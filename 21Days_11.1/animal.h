#pragma once
#include<iostream>

using namespace std;

class Mammal
{
public:
	Mammal(): 
	itsAge(1) 
	{ cout << "Mammal constructor...\n"; }
	virtual ~Mammal() { "Mammal destructor...\n"; }
	Mammal(const Mammal & rhs);
	virtual void Speak() const { cout << "Mammal speak!\n"; }
	virtual Mammal *Clone() { return new Mammal(*this); }
	int GetAge() const { return itsAge; }
protected:
	int itsAge;

};

class Dog : public Mammal
{
public:
	Dog() { cout << "Dog constructor...\n"; }

	virtual ~Dog() { cout << "Dog destructor...\n"; }
	Dog(const Dog & rhs);
	void Speak()const { cout << "Woof!..\n"; }
	virtual Mammal* Clone() { return new Dog(*this); }
};



class Cat : public Mammal
{
public:
	Cat() { cout << "Cat constructor...\n"; }
	~Cat() { cout << "Cat destructor...\n"; }
	Cat(const Cat &);
	void Speak()const { cout<<"Meo...\n"; }
	virtual Mammal *Clone() { return new Cat(*this); }

};



enum ANIMALS {MAMMAL, DOG, CAT};

const int NumAnimalTypes = 3;



