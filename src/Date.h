/*
 * Date.h
 *
 *  Created on: 01/11/2017
 *      Author: Francisco Maria / Jo�o Gama Amaral
 */

#ifndef DATE_H_
#define DATE_H_

#include "Libraries.h"

class Date{
	int day;
	int month;
	int year;
	//time_t ??
public:
	Date(){};
	Date(int d, int m, int y);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	bool operator <(const Date& d1);
	bool operator ==(const Date& d1);
	friend std::ostream& operator <<(std::ostream& o, const Date& d){
		o << d.day << "/" << d.month << "/" << d.year;
		return o;
	}
};




#endif /* DATE_H_ */