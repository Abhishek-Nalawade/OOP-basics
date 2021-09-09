#ifndef class_bday
#define class_bday

class bday{
private:
	int day, month, year;
public:
	bday() {
		day = 1;
		month = 1;
		year = 2000;
	}

	bday(int d, int m, int y) {
		day = d;
		month = m;
		year = y;

	}

	void print();
	

};


#endif