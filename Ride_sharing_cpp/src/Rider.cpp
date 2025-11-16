#include "Rider.h"
#include <iostream>

Rider::Rider(string id, string n) : riderID(id), name(n) {}

void Rider::requestRide(shared_ptr<Ride> ride) { requestedRides.push_back(ride); }

void Rider::viewRides() const {
    for (auto &r : requestedRides)
        cout << r->rideDetails() << endl;
}
