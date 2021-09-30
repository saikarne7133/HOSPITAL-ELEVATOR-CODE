#pragma once
#ifndef ELEVATOR_H
#define ELEVATOR_H
#include <iostream>
using namespace std;

class Elevator {
private:
	int no_of_elevators, no_of_floors, c_floor, d_floor;
	int elevator_id, capacity, e_current, e_weight;
	bool state, direction;
public:

	//void open();
	void close();
	Elevator(int e = 1, int f = 3, int e_id = 1, int c = 2, int ec = 1, bool dir = 1, int ew = 0);
	int request(int c_floor, int d_floor);
	int openin(int ew);
	int openout(int elev_in);

};
#endif
