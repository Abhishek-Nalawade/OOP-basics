#include<string>
#include"class_bday.h"

using namespace std;

class employee {

private:
	string name;
	int salary;
	string relationship_status;
	bday x;
	

public:

	employee() {
		salary = 0;
		relationship_status = "N/A" ;
		x = bday(15, 8, 2001);
	
	}

	void print();

};