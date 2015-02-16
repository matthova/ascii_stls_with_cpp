#include <iostream>
#include <fstream>
#include <string>
#include <boost/format.hpp>
using namespace std;
#include "cube.h"


int main()
{
	ofstream myfile;
	myfile.open ("stl.stl");
	myfile << "solid MYSOLID\n";
	float point1A[3] = {-5.0,-5.0,-5.0};
	float point1B[3] = {5.0,5.0,5.0};
	float width = 1.0;
	myfile << makeCube(point1A, point1B, width);
	for(float i = 0; i < 10; i++){
		float loopPointA[3] = {i,i,10.0f};
		float loopPointB[3] = {0,0,0};
		myfile << makeCube(loopPointA, loopPointB, width);
	}
	myfile << "endsolid MYSOLID";
	myfile.close();
	return 0;
}
