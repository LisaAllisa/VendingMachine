#pragma once
#include <iostream>
#include "Snack.h"



class SnackSlot
{
private:

    int numMaxSnacks;  //максимальное количество снеков
	Snack* snacks;

public:

	SnackSlot();

	SnackSlot(int num);

    SnackSlot(const SnackSlot &other);
	
	SnackSlot &operator = (const SnackSlot &other);

    ~SnackSlot();

    friend std::ostream &operator << (std::ostream &output, const SnackSlot	&other);
   
    void addSnack(Snack* snack);
	void deleteSnack();

 //   string getsnackName() const;
 //   void setsnackName(string value);

    int getNumMaxSnacks() const;
 //   void setNumMaxSnacks(int value);

	bool isEmpty() const;
};

