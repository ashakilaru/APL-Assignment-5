#include "Driver.h"
#include <cstdio>

Driver::Driver(string id, string n, double r) : driverID(id), name(n), rating(r) {}

void Driver::addRide(shared_ptr<Ride> ride) { assignedRides.push_back(ride); }

string Driver::getDriverInfo() const {
    char buf[200];
    snprintf(buf, 200, "Driver %s (%s) - Rating: %.1f - Rides: %zu",
             driverID.c_str(), name.c_str(), rating, assignedRides.size());
    return string(buf);
}
