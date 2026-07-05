#include "objects.h"
#include "forces.h"

void apply_gravity(point* obj){
	obj->force.y -= 9.8 * obj->mass;
}

void update_velocity(point* obj, int frame_rate){
	obj->velocity.x += obj->force.x / obj->mass / frame_rate; //framerate
	obj->velocity.y += obj->force.y / obj->mass / frame_rate;
}

void update_position(point* obj, int frame_rate){
	obj->position.x += obj->velocity.x / frame_rate;
	obj->position.y += obj->velocity.y / frame_rate;
}
