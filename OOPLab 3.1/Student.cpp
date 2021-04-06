#include <iostream>
#include "Student.h"
Student::Student() {
	Man x;
	kurs = 0;
}
Student::Student(const string name, const int age, const string sex, const double weight)
{
	Setname(x.Getname());
	Setage(x.Getage());
	Setsex(x.Getsex());
	Setweight(x.Getweight());
}
istream& operator >>(istream& in, Student& x) {
	string name;
	int age;
	string sex;
	double weight;
	int kurs;
	cout << "¬каж≥ть ≥м'€ = ";in >> name;
	cout << "¬каж≥ть в≥к = ";in >> age;
	cout << "¬каж≥ть стать = ";in >> sex;
	cout << "¬каж≥ть вагу = ";in >> weight;
	cout << "¬каж≥ть курс = ";in >> kurs;
	x.Setname(name) ;
	x.Setage(age);
	x.Setsex(sex);
	x.Setweight(weight);	
	x.Kurs(kurs);

	return in;
}
ostream& operator <<(ostream& out, Student& x) {
	out << endl;
	out << endl;
	out << "≤м'€ = " << x.Getname() << endl;
	out << "¬≥к = " << x.Getage() << endl;
	out << "—тать = " << x.Getsex() << endl;
	out << "¬ага = " << x.Getweight() << endl;
	out << " урс = " << x.Getkurs() << endl;

	return out;
}
int Student::Kurs(int kurs)
{
	Setkurs(kurs);
	int K = kurs;
	if (kurs >= 6)
	{
		cout << "6 - ÷е випускний курс!" << endl;
	}
	else
	{
		K = kurs + 1;
	}
	return K;
}
