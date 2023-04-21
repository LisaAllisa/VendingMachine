#include "Snack.h"


using namespace std;

Snack::Snack()
{
	this->snackName = "";
}


Snack::Snack(const std::string name, int calo, double val)
{
    this->snackName = name;
	this->snackCalorie = calo;
	this->snackValue = val;
}


Snack::Snack(const Snack &other)
{
    this->snackName = other.snackName;
	this->snackCalorie = other.snackCalorie;
	this->snackValue = other.snackValue;
}


std::ostream &operator<<(std::ostream &output, const Snack &other)
{
    output << "Название снека: " << other.snackName.c_str() << endl;
//	output << "Количество калорий в снеке: " << other.snackCalorie << " кДж" << endl;
//	output << "Стоимость одного снека: " << other.snackValue << " рублей" << endl;

    return output;
}


Snack::~Snack()
{
	snackName.clear();
}


Snack &Snack::operator=(const Snack & other)
{
	if (&other == this) return *this;
	this->snackName = other.snackName;
	this->snackCalorie = other.snackCalorie;
	this->snackValue = other.snackValue;
	return *this;
}


std::string Snack::getSnackName()  const
{
    return snackName;
}

void Snack::setSnackName(std::string value)
{
    snackName = value;
}


int Snack::getSnackCalorie()  const
{
	return snackCalorie;
}

void Snack::setSnackCalorie(int value)
{
	snackCalorie = value;
}

double Snack::getSnackValue()  const
{
	return snackValue;
}

void Snack::setSnackValue(int value)
{
	snackValue = value;
} 

bool Snack::isEmpty() const
{
	if (this->snackName == "") return true;
	return false;
}

void Snack::displaySnack() const
{
	cout << "Название снека: " << snackName.c_str() << endl;
	cout << "Количество калорий в снеке: " << snackCalorie << " кДж" << endl;
	cout << "Стоимость одного снека: " << snackValue << " рублей" << endl;
}

