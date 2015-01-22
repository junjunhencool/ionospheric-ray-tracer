//============================================================================
// Name        : Intersection.h
// Author      : Rian van Gijlswijk
// Description : Contains the intersection information of the ray and an object
//============================================================================

#ifndef INTERSECTION_H_
#define INTERSECTION_H_

#include "Ray.h"
#include "../math/Vector2f.h"
#include "../scene/Geometry.h"

namespace raytracer {
namespace tracer {

	using namespace math;
	using namespace scene;

	class Intersection {

		public:
			Intersection();
			Ray r;
			Geometry::object_type o;
			Geometry g;
			Vector2f pos;

	};

} /* namespace tracer */
} /* namespace raytracer */

#endif /* INTERSECTION_H_ */
