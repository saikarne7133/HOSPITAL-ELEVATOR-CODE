#pragma once
#ifndef PARTITION_H_
#define PARTITION_H_
class Partition {
	//Elevator *elevator;
	Partition *nextp;
	int delay;
public:
	void setDelay(int d);
	int getDelay() const { return delay; }
};
#endif