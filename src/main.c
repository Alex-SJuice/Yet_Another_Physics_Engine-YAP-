#include <stdio.h>
#include "raylib.h"
#include "objects.h"
#include "forces.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450
#define SCREEN_SCALE 0.1
#define FRAME_RATE 60

vector to_screen_space(vector* v) {
	return (vector){v->x/SCREEN_SCALE + SCREEN_WIDTH/2.0, -v->y/SCREEN_SCALE + SCREEN_HEIGHT/2.0};
}

int main (void) {
	point p = {
		1.0, 
		1.0, 
		{0.0, 0.0},
		{0.0, 0.0},
		{0.0, 0.0}
	};

	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "YAP");
	SetTargetFPS(FRAME_RATE);

	while (!WindowShouldClose()) {
		p.force = (vector){0.0, 0.0};

		apply_gravity(&p);
		update_velocity(&p, FRAME_RATE);
		update_position(&p, FRAME_RATE);

		vector screen_position = to_screen_space(&p.position);
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawCircle((int)screen_position.x, (int)screen_position.y, p.radius / SCREEN_SCALE, BLUE);
		EndDrawing();
	}	

	CloseWindow();
	return 0;
}