#include <stdio.h>
#include "raylib.h"
#include "objects.h"

void apply_gravity(point* obj) {
	obj->force.y -= 9.8 * obj->mass;
}

int main (void) {
	point p = {
		10.0, 
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

			DrawCircle((int)p.position.x, (int)p.position.y, p.radius, BLUE);
		EndDrawing();
	}	

	CloseWindow();
	return 0;
}