#include <iostream>
#pragma once //zaczytaj tylko raz przy kompilacji

using namespace std; 

/// <summary>
/// Klasa dla obiektu 2D o zmiennych x i y
/// </summary>
class Point
{
	double x;
	double y;

public:
	/// <summary>
	/// Konstruktor ktory przypisze wartosci x=0, y=0
	/// </summary>
	Point();
	/// <summary>
	/// Konstruktor ktory przypisze dla wartosci x i y wartosc argumentu
	/// </summary>
	/// <param name="x">Argument double dla x i y</param>
	Point(double x);

	Point(double x, double y);

	double getX();
	double getY();
	void setX(double x);
	void setY(double y);
	void transX(double x);
	void transY(double y);
	void transXY(double x, double y);

	/// <summary>
	/// Metoda wyswietlajaca informacje o punkcie 2D
	/// </summary>
	void present();
	
	/// <summary>
	/// Metoda zwracajaca odleglosc miedzy dwoma punktami 2D
	/// </summary>
	/// <param name="one">Pierwszy punkt jako obiekt 2D</param>
	/// <param name="two">Drugi punkt jako obiekt 2D</param>
	/// <returns>odleglosc typu double</returns>
	static double dist(Point &one, Point &two);

};

