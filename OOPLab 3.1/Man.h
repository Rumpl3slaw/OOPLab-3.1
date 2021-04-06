#pragma once
#include <iostream>
#include <string>

using namespace std;

class Man {
private:
	string name;
	int age;
	string sex;
	double weight;
public:
	Man();
	Man(const string nname,const int aage,const string ssex,const double wweight);
	Man(const Man& x);

	string Getname() const{ return name; }
	int Getage() const{ return age; }
	string Getsex() const{ return sex; }
	double Getweight() const{ return weight; }

	void Setname(string name) { this->name = name; }
	void Setage(int age) { this->age = age; }
	void Setsex(string sex) { this->sex = sex; }
	void Setweight(double weight) { this->weight = weight; }

	friend ostream& operator <<(ostream &out, Man& x);
	friend istream& operator >>(istream& in, Man& x);

	operator string() const;
};
