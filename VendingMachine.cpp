#include "VendingMachine.h"
#include "SnackSlot.h"
#include "Snack.h"
#include <iostream>

using namespace std;

VendingMachine::VendingMachine()
{
	this->numMaxSlots = 0;
	this->slots = NULL;
}

VendingMachine::VendingMachine(int count)
{
    this->numMaxSlots = count;
	this->slots = new SnackSlot[count];
}


VendingMachine::VendingMachine(const VendingMachine& other)
{
    this->numMaxSlots = other.numMaxSlots;
	this->slots = new SnackSlot[other.numMaxSlots];
	
	for (int i = 0; i < this->numMaxSlots; i++)
	{
		this->slots[i] = other.slots[i];
	}
}




void VendingMachine::addSlot(SnackSlot* slot)
{
	//находим первый не пустой элемент

	int firstEmpty = -1;

	for (int i = 0; i < this->numMaxSlots; i++)
	{
		if (this->slots[i].isEmpty()) 
		{
			firstEmpty = i;
			break;
		}
	}
	
	if (firstEmpty >= 0)
	{
		slots[firstEmpty] = *slot;
	}
}





std::ostream &operator<<(std::ostream &output, const VendingMachine &other)
{
	output << "Количество слотов в машине: " << other.numMaxSlots << endl;

	for (int i = 0; i < other.numMaxSlots; i++)
	{
		output << "  Слот " << i << " : ";
		if (other.slots[i].isEmpty()) 
		{
			output << "пустой" << endl;
		}
		else 
		{
			output << endl;
			output << other.slots[i];
		}

	}


	return output;
}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}


int VendingMachine::getslotCount()  const
{
    return this->numMaxSlots;
}


void VendingMachine::setslotCount(int value)
{
    this->numMaxSlots = value;
}

int VendingMachine::getEmptySlotsCount() const
{
	int nEmptySlots = 0;

	for (int i = 0; i < this->numMaxSlots; i++)
	{
		if (this->slots[i].isEmpty())
		{
			nEmptySlots++;
		}
	}

	return nEmptySlots;
}