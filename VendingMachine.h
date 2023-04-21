#pragma once
#include <iostream>
#include "SnackSlot.h"



class VendingMachine
{
private:

	int numMaxSlots;
	SnackSlot* slots;

public:
	VendingMachine();

    VendingMachine(int slotCount);

    VendingMachine(const VendingMachine &other);

    ~VendingMachine();

	friend std::ostream &operator << (std::ostream &output, const VendingMachine &v);

    void addSlot(SnackSlot* slot); 
	


    

    int getslotCount() const;

    void setslotCount(int value);

	int getEmptySlotsCount() const; 



};

