#include "Navigator.h"

namespace Navigator {
	float getHeadingToLocation(Location *current, Location *waypoint) {
		float lat1 = radians(current->latitude);
		float lon1 = radians(current->longitude);
		float lat2 = radians(waypoint->latitude);
		float lon2 = radians(waypoint->longitude);
		float y = sin(lon2-lon1)*cos(lat2);
		float x = cos(lat1)*sin(lat2) - sin(lat1)*cos(lat2)*cos(lon2-lon1);
		return atan2(y,x);
	}
}