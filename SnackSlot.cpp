#include "SnackSlot.h"

#include <iostream>
using namespace std;



SnackSlot::SnackSlot()
{
	this->numMaxSnacks = 0;
	this->snacks = NULL;
}

SnackSlot::SnackSlot(int num)
{
    this->numMaxSnacks = num;
	this->snacks = new Snack[num];
}


SnackSlot::SnackSlot(const SnackSlot& other)
{
    this->numMaxSnacks = other.numMaxSnacks;
	this->snacks = new Snack[other.numMaxSnacks];

	for (int i = 0; i < other.numMaxSnacks; i++)
	{
		this->snacks[i] = other.snacks[i];
	}
}


std::ostream &operator<<(std::ostream &output, const SnackSlot &other)
{
    output << "Максимальное количество в слоте: " << other.numMaxSnacks << endl;
	output << "Состав слота: " << endl;
	for (int i = 0; i < other.numMaxSnacks; i++)
	{
		output << "    " << other.snacks[i] << endl;
	}

    return output;
}


SnackSlot &SnackSlot::operator=(const SnackSlot &other)
{
	if (&other == this) return *this;
	this->numMaxSnacks = other.numMaxSnacks;
	this->snacks = new Snack[other.numMaxSnacks];

	for (int i = 0; i < other.numMaxSnacks; i++)
	{
		this->snacks[i] = other.snacks[i];
	}
	return *this;
}


SnackSlot::~SnackSlot()
{
	delete[] snacks;
}


void SnackSlot::addSnack(Snack* newSnack)
{
	int firstEmpty = -1;
	
	for (int i = 0; i < this->numMaxSnacks; i++)
	{
		if (this->snacks[i].isEmpty())
		{
			firstEmpty = i;
			break;
		}
	}

   	if (firstEmpty >= 0)  
	{
		snacks[firstEmpty] = *newSnack;
	}
	else 
	{
		cout << "Слот заполнен" << endl;
		cout << "Поместите батончик в другой незаполненный слот" << endl;
	}
}


int SnackSlot::getNumMaxSnacks()  const
{
	return numMaxSnacks;
}


bool SnackSlot::isEmpty() const
{
	if (this->numMaxSnacks == 0) 
	{
		return true;
	}
	else 
	{
		for (int i = 0; i < this->numMaxSnacks; i++) 
		{
			if (!this->snacks[i].isEmpty()) 
				return false;
		}
	}
	
	return false;
}



void SnackSlot::deleteSnack()
{

}

/*
string SnackSlot::getsnackName()  const
{
    return snackName;
}

void SnackSlot::setsnackName(string value)
{
    snackName = value;
}
*/

/*
void SnackSlot::setNumMaxSnacks(int value)
{
	numMaxSnacks = value;
}
*/

