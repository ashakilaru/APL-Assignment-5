#include "Ride.h"
#include <cstdio>

Ride::Ride(string id, string pu, string doff, double dist)
    : rideID(id), pickupLocation(pu), dropoffLocation(doff), distance(dist) {}

double Ride::fare() const {
    return distance * 1.5;
}

string Ride::rideDetails() const {
    char buf[200];
    snprintf(buf, sizeof(buf), "Ride %s: %s -> %s (%.2f mi) - $%.2f",
             rideID.c_str(), pickupLocation.c_str(), dropoffLocation.c_str(),
             distance, fare());
    return string(buf);
}
