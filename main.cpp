#include "VendingMachine.h"
#include "SnackSlot.h"
#include "Snack.h"
#include <iostream>
#include "main.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Snack* bounty = new Snack("Bounty", 538, 78);
	Snack* snickers = new Snack("Snickers", 781, 93);
	Snack* mars = new Snack("Mars", 657, 65);
	Snack* twix = new Snack("Twix", 832, 98);

 	SnackSlot* slot = new SnackSlot(10);  
	SnackSlot* slot2 = new SnackSlot(10);  
	
	slot->addSnack(bounty);
	slot->addSnack(bounty);
	slot->addSnack(bounty);
	slot->addSnack(bounty);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	slot->addSnack(mars);
	slot->addSnack(twix);
	slot->addSnack(bounty);
	slot->addSnack(bounty);
	slot2->addSnack(bounty);
	slot2->addSnack(bounty);
	slot2->addSnack(bounty);
	slot2->addSnack(snickers);
	slot2->addSnack(mars);
	slot2->addSnack(twix);
	
	VendingMachine* machine = new VendingMachine(2);
	
	machine->addSlot(slot);
	machine->addSlot(slot2); 

	
	cout <<  endl;
	bounty->displaySnack();
	
	cout << endl;
	snickers->displaySnack();
	
	cout << endl;
	mars->displaySnack();

	cout << endl;
	twix->displaySnack();

	cout << endl;	twix->displaySnack();
		
	cout << endl;
	cout << *machine;

	cout << endl;
	cout << "Количество пустых слотов в машине - "<<machine->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков

	delete snickers;
	delete bounty;
	delete mars;
	delete twix;
	delete slot; 
	delete machine;


	system("pause");


	return 0;
}
