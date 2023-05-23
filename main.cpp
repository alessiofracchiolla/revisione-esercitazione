/// @file 

#include "polygon.h" 
#include "rectangle.h"
#include "rhombus.h"
#include "isoTrapezoid.h"
#include <iostream>

//#define SIZE 100

//MAIN MODIFICATO DA ALESSIO FRACCHIOLLA, IL CODICE ORIGINALE SI TROVA UN FONDO AL PROGRAMMA COMMENTATO

int main(){


	//verifico i metodi del rettangolo

	Rectangle rettangolo1 = Rectangle();    //default
	Rectangle rettangolo2 = Rectangle(2, 3);   //costruttore
	Rectangle rettangolo3 = rettangolo2;      //copia

	rettangolo2.Dump();

	if (rettangolo2 == rettangolo3) {

		rettangolo2.Dump();

	}


	//verifico i metodi del rombo

	Rhombus rombo1=Rhombus();         //default
	Rhombus rombo2 = Rhombus(2, 3);   //costruttore
    Rhombus rombo3 = rombo2;          //copia

	rombo2.Dump();

	if (rombo2==rombo3){

		rombo2.Dump();

	}

	//verifico i metodi del trapezio

	isoTrapezoid trapezio1 = isoTrapezoid();          //default
	isoTrapezoid trapezio2 = isoTrapezoid(2, 3, 6);   //costruttore
	isoTrapezoid trapezio3 = trapezio2;               //copia

	trapezio2.Dump();

	if (trapezio2 == trapezio3) {

		trapezio2.Dump();

	}

	return 0;
}
















/*
int main()
{
	int a = 0;
	int cont = 0;

	Polygon* figure[SIZE];


	for (int i = 0; i < SIZE; i++)
	{

		cout << "what polygon do you want?" << endl;
		cout << "1 - rectangle " << endl;
		cout << "2 - rhombus " << endl;
		cout << "3 - isosceles trapezoid " << endl;
		cout << "4 - draw all object " << endl;
		cout << "5 - exit " << endl;

		scanf_s("%d", &a);

		switch (a)
		{
		case (1):
			cout << "new rectangle" << endl;
			cout << "insert length e width " << endl;
			
			float l, w;
			scanf_s("%f%f", &l, &w); 
			figure[cont]= new Rectangle(w, l);

			cout << "\n" << endl;

			cont++;
			break;

		case (2):
			cout << "new rhombus" << endl;
			cout << "insert diagH e diagV " << endl;

			float dH, dV;
			scanf_s("%f%f", &dH, &dV);
			figure[cont]= new Rhombus(dH,dV);

			cout << "\n" << endl;

			cont++;
			break;
		
		case (3):
			cout << "new isoceles trapezoid" << endl;
			cout << "insert topside, bottomside and height\n" << endl;
			
			float t, b, h;
			scanf_s("%f%f%f", &t, &b, &h);
			figure[cont] = new isoTrapezoid(t, b, h);

			cout << "\n" << endl;

			cont++;
			break;

		case (4):
			if (cont != 0) {
				cout << "draw all of object" << endl;

				for (int t = 0; t < cont; t++) {
					figure[t]->Draw();
					cout << "\n" << endl;
				}
			}
			else {
				cout << "there are not objects" << endl;
				cout << "\n" << endl;
			}


			break;

		case (5):
			for (int p = 0; p < cont; p++) {
				figure[p]->~Polygon();
			}
			cout << "all objects have been delated" << endl;
			cout << "\n" << endl;
			return 0;

			break;

		default:
			cout << "not possible number" << endl;
			cout << "\n" << endl;

			break;
		}
	}
}

*/