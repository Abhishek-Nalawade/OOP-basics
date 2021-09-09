#include<iostream>
#include"class_bday.h"
#include"class_employee.h"


using namespace std;

void bday::print() {
	cout << "Date of birth of employee " << "\n";
	cout << "Day " << day << " ";
	cout << "Month " << month << " ";
	cout << "Year " << year << " " << "\n";

}


void employee::print() {
	cout << "Salary " << salary << "\n";
	cout << "Relationship Status " << relationship_status << "\n";
	x.print();

}

