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
	cout << "������ ��'� = ";in >> name;
	cout << "������ �� = ";in >> age;
	cout << "������ ����� = ";in >> sex;
	cout << "������ ���� = ";in >> weight;
	cout << "������ ���� = ";in >> kurs;
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
	out << "��'� = " << x.Getname() << endl;
	out << "³� = " << x.Getage() << endl;
	out << "����� = " << x.Getsex() << endl;
	out << "���� = " << x.Getweight() << endl;
	out << "���� = " << x.Getkurs() << endl;

	return out;
}
int Student::Kurs(int kurs)
{
	Setkurs(kurs);
	int K = kurs;
	if (kurs >= 6)
	{
		cout << "6 - �� ��������� ����!" << endl;
	}
	else
	{
		K = kurs + 1;
	}
	return K;
}
