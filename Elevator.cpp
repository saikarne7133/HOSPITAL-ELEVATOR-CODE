#include"Elevator.h"

Elevator::Elevator(int e, int f, int e_id, int c, int ec, bool dir, int ew) {
	no_of_elevators = e;//1
	no_of_floors = f;//3
	elevator_id = e_id;//1
	capacity = c;//2
	//state = 1;//moving
	direction = dir;//up 1
	e_current = ec; //1
	e_weight = ew;



	cout << "Constructor of base class: elevator\n";
}

int Elevator::request(int c_floor, int d_floor)
{
	int ec = c_floor;
	cout << "elevator is at : " << ec << endl;

	int elev_in = openin(e_weight);

	if (elev_in <= ec)
	{
		close();
		ec = d_floor;
		//cout<<"Destination Floor: "<<ec<<endl;
		cout << "elevator is at : " << ec << endl;
		int elev_out = openout(elev_in);
		//cout<<"Elevator Capacity is : "<<elev_out<<endl;
		close();
	}
	else
	{
		cout << "Elevator is full" << endl;

	}


	return 0;
}

int Elevator::openin(int ew)
{
	cout << "open" << endl;

	ew++;
	return ew;

}

void Elevator::close()
{
	cout << "Elevator is closed" << endl;

}

int Elevator::openout(int elev_in)
{
	elev_in--;
	return elev_in;
}

