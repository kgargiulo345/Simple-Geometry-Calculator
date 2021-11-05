#pragma once
#include <iostream>

using namespace std;

class geometryCalc //declare class
{
public:
	double r; //variables
	double l; 
	double w; 
	double h; 
	const double PI = 3.1415926535;
	
	void mainMenu();

	void getRadius(); //get variables
	void getLength();
	void getWidth();
	void getHeight();

	void sphereVolume(); //Sphere
	void sphereSArea();

	void recPrismSArea(); //Rectangular Prism
	void recPrismVolume();

	void cylinderSArea(); //Cylinder
	void cylinderVolume();
};