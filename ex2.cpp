#include<iostream>
#include"ex2.h"

using namespace std;


void swapoint(int *a,int*b)
{
	int temp;
	int x;
	temp=(*a);
	(*a)=(*b);
	(*b)=temp;
	x = 4;
	return;

}

void swaprefrance(int&a,int&b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return;
}