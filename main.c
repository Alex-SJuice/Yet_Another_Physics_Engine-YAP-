#include<stdio.h>

typedef struct {
	double x;
	double y;
} vector;

//the simplest object to simulate
typedef struct {
	//constants
	double radius;		// m
	double mass;		// kg

	//variable
	vector position;	// m
	vector velocity;	// m/s
	vector force; 		// m/s2
} point;


void apply_gravity(point* obj) {
	obj->force.y -= 9.8;
}

int main () {
	point p = {
		1.0, 
		1.0, 
		{0.0, 0.0},
		{0.0, 0.0},
		{0.0, 0.0}
	};
	while (1) {
		
	}	
	return 0;
}