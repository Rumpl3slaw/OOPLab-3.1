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
	out << "��'� = " << x.name << endl;
	out << "³� = " << x.age << endl;
	out << "����� = " << x.sex << endl;
	out << "���� = " << x.weight << endl;

	return out;
}
istream& operator >>(istream& in, Man& x) {
	string name;
	int age;
	string sex;
	double weight;
	cout << "������ ��'� = ";in >> name;
	cout << "������ �� = ";in >> age;
	cout << "������ ����� = ";in >> sex;
	cout << "������ ���� = ";in >> weight;
	x.name = name;
	x.age = age;
	x.sex = sex;
	x.weight = weight;

	return in;
}
Man::operator string() const{
	string str;
	stringstream sout;

	sout << "������������ � ������� �����:" << endl;
	sout << "��'�" << name;
	sout << "³�" << age;
	sout << "�����" << sex;
	sout << "����" << weight;

	return sout.str();
}
