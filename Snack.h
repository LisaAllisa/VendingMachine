#pragma once

#include <iostream>




class Snack
{
private:
	std::string snackName;
	int snackCalorie;
	double snackValue;
public:
	Snack();
	Snack(const std::string name, int calo, double val);
    Snack(const Snack &other);

    ~Snack();

    friend std::ostream &operator << (std::ostream &output, const Snack &other);
	
	Snack& operator = (const Snack& other);


    std::string getSnackName() const;
    void setSnackName(std::string value);

	int getSnackCalorie() const;
	void setSnackCalorie(int value);

	double getSnackValue() const;
	void setSnackValue(int value);

	bool isEmpty() const;

	void displaySnack() const;


};

