#include "Man.h"
#include <sstream>

Man::Man() {
	name = "";
	age = 0;
	sex = "";
	weight = 0;
}
Man::Man(string nname,int aage,string ssex,double wweight) {
	name = nname;
	age = aage;
	sex = ssex;
	weight = wweight;
}
Man::Man(const Man& x) {
	name = x.name;
	age = x.age;
	sex = x.sex;
	weight = x.weight;
}
ostream& operator <<(ostream& out, Man& x) {
	out << "Ім'я = " << x.name << endl;
	out << "Вік = " << x.age << endl;
	out << "Стать = " << x.sex << endl;
	out << "Вага = " << x.weight << endl;

	return out;
}
istream& operator >>(istream& in, Man& x) {
	string name;
	int age;
	string sex;
	double weight;
	cout << "Вкажіть ім'я = ";in >> name;
	cout << "Вкажіть вік = ";in >> age;
	cout << "Вкажіть стать = ";in >> sex;
	cout << "Скажіть вагу = ";in >> weight;
	x.name = name;
	x.age = age;
	x.sex = sex;
	x.weight = weight;

	return in;
}
Man::operator string() const{
	string str;
	stringstream sout;

	sout << "Перетворення в літерний рядок:" << endl;
	sout << "Ім'я" << name;
	sout << "Вік" << age;
	sout << "Стать" << sex;
	sout << "Вага" << weight;

	return sout.str();
}
