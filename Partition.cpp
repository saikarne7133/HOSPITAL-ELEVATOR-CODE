#include "Elevator.h" 
#include "Partition.h"
#include "assert.h"

void Partition::setDelay(int d) {
	assert(d >= 0);
	this->delay = d;
}

//int Partition::getDelay() const {
	//return delay;
//}
