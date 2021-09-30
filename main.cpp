#include <iostream>
#include"SystemController.h"
#include "Passanger.h"
#include"Trafficgen.h"
#include"StatisticKeeper.h"
#include"Elevator.h"
#include <stdlib.h>  
#include <time.h>
#include <stdio.h> 
#include <vector>
#include<string>
#include <fstream> 
#include "main.h"
using std::vector;
using namespace std;


int main() {




	SystemController sys;
	StatisticKeeper sk;
	Trafficgen trag;
	ifstream fin("traffic.txt");
	Passanger **p;
	p = new Passanger*[200];

	while (fin >> trag)
	{
		cout << trag << endl;
	}

	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		trag.Trafficg(sk, p[i]);
		
	}

	//vector<vector<t_PCB> > ele;
	

	
	

  //sys.read();
  //sk.display();
	Elevator e1;
	e1.request(1, 3);
	e1.request(3, 1);
	
	system("pause");

	return 0;
}