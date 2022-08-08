#include<iostream>
using namespace std;
int nextEdge(int side1, int side2)
{
	if (side1<0||side2<0)
	{
		return;
	}
	else
	{
		return side1 + side2 - 1;
	}
}

