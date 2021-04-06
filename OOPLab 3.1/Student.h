#pragma once
#include "Man.h"


class Student :public Man {
private:
	Man x;
	int kurs;
public:
	Student();
	Student(const string name, const int age, const string sex, const double weight);
	Student(const Student& x);

	int Getkurs()const { return kurs; }
	void Setkurs(int kurs) { this->kurs = kurs ; }

	friend ostream& operator <<(ostream& out, Student& x);
	friend istream& operator >>(istream& in, Student& x);

	int Kurs(int kurs);
};