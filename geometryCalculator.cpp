// geometryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    int choice;

    geometryCalc cal; //class object

    cal.mainMenu();

    do
    {
        cout << endl;
        cout << "What shape would you like to do?" << endl;
        cout << "1. Sphere Calculations" << endl;
        cout << "2. Cube/Rectangular Prism Calculations" << endl;
        cout << "3. Cylinder Calculations" << endl;
        cout << "4. Exit Program" << endl;
        cout << "Enter (1/2/3) " << endl;
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "***Error. Please Enter (1/2/3)***" << endl;
        }

        else if (choice == 1) //Sphere Calculations
        {
            int option;

            cout << endl;
            cout << "Okay, Sphere Calculations" << endl;
            cout << "Would you like to..." << endl;
            cout << "1.Find the Volume" << endl;
            cout << "Or" << endl;
            cout << "2.Find the Surface Area ? " << endl;
            cout << "Enter (1/2): ";
            cin >> option;

            if (option == 1) //Sphere Volume
            {
                char ch;
                do
                {
                    cout << endl;
                    cout << "Great! Let's find the volume!\n";
                    cal.getRadius();
                    cout << endl;
                    cal.sphereVolume();
                    cout << endl;
                    cout << "Preform another similar calculation? (y/n): ";
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
            }
            else if (option == 2) //Sphere Surface Area
            {
                char ch;
                do
                {
                    cout << endl;
                    cout << "Great let's find the surface area!\n";
                    cal.getRadius();
                    cout << endl;
                    cal.sphereSArea();
                    cout << endl;
                    cout << "Preform another similar calculation? (y / n) :";
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
            }
        }

        else if (choice == 2) //Rectangle Calculations
        {
            int option;

            cout << endl;
            cout << "Okay, Rectanglular Prism Calculations" << endl;
            cout << "Would you like to..." << endl;
            cout << "1. Find the Volume " << endl;
            cout << "Or" << endl;
            cout << "2. Find the Surface Area" << endl;
            cout << "Enter (1/2): ";
            cin >> option;

            if (option == 1) //Rectangle Volume
            {
                char ch;
                do
                {
                    cout << endl;
                    cout << "Great! Let's find the volume!\n";
                    cal.getLength();
                    cal.getWidth();
                    cal.getHeight();
                    cal.recPrismVolume();
                    cout << "Preform another similar calculation? (y/n): ";
                    cin >> ch;
                    cout << endl;
                } while (ch == 'y' || ch == 'Y');
            }
            else if (option == 2) //Rectangle Surface Area
            {
                char ch;
                do
                {
                    cout << endl;
                    cout << "Great! Let's find the surface area\n";
                    cal.getLength();
                    cal.getWidth();
                    cal.getHeight();
                    cal.recPrismSArea();
                    cout << endl;
                    cout << "Preform another similar calculation? (y/n): ";
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
            }
        }

        else if (choice == 3) //Cylinder Calculations
        {
            int option;

            cout << endl;
            cout << "Okay, Cylinder Calculations" << endl;
            cout << "Would you like to..." << endl;
            cout << "1.Find the Volume" << endl;
            cout << "Or" << endl;
            cout << "2.Find the Surface Area ? " << endl;
            cout << "Enter (1/2): ";
            cin >> option;
            if (option == 1) //Cylinder Volume
            {
                char ch;
                do
                {
                    cout << endl;
                    cout << "Great! Let's find the volume!\n";
                    cal.getRadius();
                    cal.getHeight();
                    cal.cylinderVolume();
                    cout << endl;
                    cout << "Preform another similar calculation? (y/n): ";
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
            }
            else if (option == 2) //Cylinder Surface Area
            {
                char ch;
                do
                {
                    cout << endl;
                    cout << "Great let's find the surface area!\n";
                    cal.getRadius();
                    cal.getHeight();
                    cal.cylinderSArea();
                    cout << endl;
                    cout << "Preform another similar calculation? (y / n) :";
                    cin >> ch;
                } while (ch == 'y' || ch == 'Y');
            }
        }

        else if (choice == 4) //exit program
        {
            cout << "Goodbye!" << endl;
        }
        
        else
        {
            cout << "***Error. Please Enter (1/2/3)***" << endl; 
        }

    } while (choice != 4);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
