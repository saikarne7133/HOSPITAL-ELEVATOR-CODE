#include"SystemController.h"
#include "Passanger.h"
#include"Trafficgen.h"
#include"StatisticKeeper.h"
#include <stdlib.h>  
#include <time.h>
#include <stdio.h> 
#include <vector>
#include<string>
#include <iostream>
#include <stdio.h> 
#include <vector>
#include<string>
using std::vector;



SystemController::SystemController(int nf, int ne, int cap, int probp, int call, int ewgt)
{
	no_of_floor = nf;
	no_of_elevator = ne;
	capacity = cap;
	passanger = probp;
	call = call;
	eweight = ewgt;

}




/*void SystemController::check(int p,int c,int wt)
{
  if(p >= 15)
  {
	cout<<"visitor";
  }


}*/



/*void SystemController::read()
{
  FILE *f;
  char sWord[100];
  string input[100];
  f = fopen("traffic.txt","r");
  if(f)
 {

   while(!feof(f))
   {

	 fscanf(f,"%s",sWord);


	 //input[i]=sWord;

	 //cout<<"input done"<<endl;
  }
	fclose(f);

 }*/





