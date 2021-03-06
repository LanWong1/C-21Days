// 21Days_11.1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "animal.h"
using namespace std;


Mammal::Mammal(const Mammal &rhs) :itsAge(rhs.GetAge())
{
	cout << "Mammal copy Constructor..\n";
}
Dog::Dog(const Dog & rhs) :
	Mammal(rhs)
{
	cout << "Dog copy constuctor...\n";
}
Cat::Cat(const Cat &rhs) :
	Mammal(rhs)
{
	cout << "Cat copy constructor...\n";
}

int main()
{
	Mammal *theArray[NumAnimalTypes];
	Mammal* ptr;
	int choice, i;
	for (i = 0; i < NumAnimalTypes; i++)
	{
		cout << "(1)Dog(2)Cat(3)Mammal:";
		cin >> choice;
		switch (choice)
		{
		case DOG: ptr = new Dog;
			break;
		case CAT: ptr = new Cat;
			break;
		default: ptr = new Mammal;
			break;

		}
		theArray[i] = ptr;
	}
	Mammal *OtherArray[NumAnimalTypes];
	for (i = 0; i<NumAnimalTypes; i++)
	{
	  theArray[i]->Speak();
	  OtherArray[i] = theArray[i]->Clone();
	}
	 for (i = 0; i<NumAnimalTypes; i++)
	 OtherArray[i]->Speak();
	 return 0;
}

