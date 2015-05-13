#pragma once

#include "Vec3.h"

class AABB {
public:
	int empty;
	Vec3 min;
	Vec3 max;

	AABB(Vec3 const&, Vec3 const&);
	void set(float, float, float, float, float, float);
};