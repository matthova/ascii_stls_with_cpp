#include <string>
using namespace std;

string v2s(float x, float y, float z){
	return to_string(x) + "  " + to_string(y) + "  " + to_string(z);
}
//12 facets make up a cube

string facet1(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal  0.0  0.0  -1.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet2(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal 0.0  0.0  -1.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet3(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal  -1.0  0.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet4(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal -1.0  0.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet5(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal  0.0  1.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet6(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal 0.0  1.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet7(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal  1.0  0.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] + width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet8(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal 1.0  0.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet9(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal  0.0  -1.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointA[0] + width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet10(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal 0.0  -1.0  0.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointA[0] - width / 2, pointA[1] - width / 2, pointA[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet11(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal  0.0  0.0  1.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string facet12(float pointA[3], float pointB[3], float width) {
	string facetString = "";
	facetString += "  facet normal 0.0  0.0  1.0\n";
	facetString += "    outer loop\n";
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] - width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] + width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "      vertex  " + v2s(pointB[0] - width / 2, pointB[1] + width / 2, pointB[2]);
	facetString += "    endloop\n";
	facetString += "  endfacet\n";
	return facetString;
}

string makeCube(float point1A[3], float point1B[3], float width){
	string cubeString = "";
	cubeString += facet1(point1A, point1B, width);
	cubeString += facet2(point1A, point1B, width);
	cubeString += facet3(point1A, point1B, width);
	cubeString += facet4(point1A, point1B, width);
	cubeString += facet5(point1A, point1B, width);
	cubeString += facet6(point1A, point1B, width);
	cubeString += facet7(point1A, point1B, width);
	cubeString += facet8(point1A, point1B, width);
	cubeString += facet9(point1A, point1B, width);
	cubeString += facet10(point1A, point1B, width);
	cubeString += facet11(point1A, point1B, width);
	cubeString += facet12(point1A, point1B, width);
	return cubeString;
}
