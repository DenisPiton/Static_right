#pragma once
#include <iostream>

using namespace std;

class Area {
	int a = 0;
	int b = 0;
	int c = 0;
public:
	Area(int side1, int side2, int side3) :a{ side1 }, b{ side2 }, c{ side3 }{}
	Area(int side1, int side2) :a{ side1 }, b{ side2 }{}
	Area() :a{ 0 }, b{ 0 }, c{ 0 }{}
	Area(int side1) :a{ side1 } {}


	int Pl_square()
	{
		static int counter = 0;
		counter++;
		return pow(a,2);
	}
	int Pl_priam()
	{
		static int counter = 0;
		counter++;
		return a * b;
	}
	int Pl_romb()
	{
		static int counter = 0;
		counter++;
		int edge = 0;
		cout << "¬ведите больший угол: ";
		cin >> edge;
		return pow(a, 2) * sin(edge);
	}
	int Pl_treugolnic()
	{
		static int counter = 0;
		counter++;
		int p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	int Pl_priamtreugolnic()
	{
		static int counter = 0;
		counter++;
		return (a * b) / 2;


	}

};