#pragma once
#ifndef SystemController_H_
#define SystemController_H_


class SystemController
{
private:
	int no_of_floor;
	int no_of_elevator;
	int capacity;
	int passanger;
	int call;
	int eweight;

public:
	SystemController(int nf = 0, int ne = 0, int cap = 0, int probp = 0, int call = 0, int ewgt = 0);
	void read();


};
#endif
