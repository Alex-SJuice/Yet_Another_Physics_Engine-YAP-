#pragma once

//simple vector
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
