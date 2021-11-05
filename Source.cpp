#include <iostream>
#include <iomanip>
#include <cmath>
#include "Header.h"

using namespace std;

void geometryCalc::mainMenu()
{
	cout << "***GEOMETRY CALCULATOR***" << endl;
	cout << "This program can calculate Geometric Equations." << endl;
	cout << "Let's get started!" << endl;
}

void geometryCalc::getRadius()
{
	cout << "Enter the Radius: ";
	cin >> this->r; //point to double
	cout << endl;
}

void geometryCalc::getLength()
{
	cout << "Enter the Length: ";
	cin >> this->l; //point to double
	cout << endl;
}

void geometryCalc::getWidth()
{
	cout << "Enter the Width: ";
	cin >> this->w; //point to double
	cout << endl;
}

void geometryCalc::getHeight()
{
	cout << "Enter the Height: ";
	cin >> this->h; //point to double
	cout << endl;
}

void geometryCalc::sphereVolume() 
{
	double sphereVolume;

	sphereVolume = (4 * PI * (pow(r, 3))) / 3;
	cout << fixed << showpoint << setprecision(2);
	cout << "The volume is: " << sphereVolume << endl;
}

void geometryCalc::sphereSArea()
{
	double sphereArea;

	sphereArea = 4 * PI * pow(r, 2);
	cout << fixed << showpoint << setprecision(2);
	cout << "The surface area is: " << sphereArea << endl;
}

void geometryCalc::recPrismSArea()
{
	double PrismSArea;

	PrismSArea = ((w * l) + (h * l) + (h * w)) * 2;
	cout << fixed << showpoint << setprecision(2);
	cout << "The surface area is: " << PrismSArea << endl;
}

void geometryCalc::recPrismVolume()
{
	double PrismVolume;

	PrismVolume = l * w * h;
	cout << fixed << showpoint << setprecision(2);
	cout << "The volume is: " << PrismVolume << endl;
}

void geometryCalc::cylinderSArea()
{
	double cylSArea;

	cylSArea = (2 * PI * r * h) + (2 * PI * pow(r, 2));
	cout << fixed << showpoint << setprecision(2);
	cout << "The surface area is: " << cylSArea << endl;
}

void geometryCalc::cylinderVolume()
{
	double cylVolume;

	cylVolume = PI * h * pow(r, 2);
	cout << fixed << showpoint << setprecision(2);
	cout << "The volume is: " << cylVolume << endl;
}


