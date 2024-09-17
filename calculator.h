#pragma once

#include<iostream>
#include<string>
using namespace std;


class calculator
{
public:
	int add(int n1, int n2); 
	int add(int n1, int n2, int n3);
	double add(double n1, double n2);
	string add(string a, string b);
	// static method 
	static int addd(int n1, int n2);
	static int multiply(int n1, int n2);
	static int subtract(int n1, int n2);



};

