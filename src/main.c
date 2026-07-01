#include<stdio.h>
#include "raylib.h"

typedef struct {
	double x;
	double y;
} vector;

//the simplest object to simulate
typedef struct {
	//constants
	double radius;		// m
	double mass;		// kg

	//variables
	vector position;	// m
	vector velocity;	// m/s
	vector force; 		// m/s2
} point;


void apply_gravity(point* obj) {
	obj->force.y -= 9.8 * obj->mass;
}

int main (void) {
	point p = {
		1.0, 
		1.0, 
		{0.0, 0.0},
		{0.0, 0.0},
		{0.0, 0.0}
	};

	InitWindow(800, 450, "YAP");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		
		BeginDrawing();
			ClearBackground(RAYWHITE);
		EndDrawing();
	}	

	CloseWindow();
	return 0;
}