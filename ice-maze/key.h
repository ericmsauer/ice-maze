#ifndef __KEY_H__
#define __KEY_H__

#include <SDL.h>
#include <SDL_opengl.h>
#include <GL/glu.h>
#include <cmath>

#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>
#include <fstream>

extern std::ofstream debug_file;

class Key
{
public:
	Key(int _keyid, double x, double y);
	~Key();

	void draw();

	double get_x(){ return this->x; }
	double get_y(){ return this->y; }
	double get_radius(){ return this->radius; }
	int get_id(){ return this->keyid; }

	bool is_pickedup(){ return !(this->showing); }
	void pickup_key(){ this->showing = false; }
	void drop_key(){ this->showing = true; }
private:
	double x, y;

	int keyid;
	bool showing = true;

	//Attributes
	double radius = .2;
};
#endif
