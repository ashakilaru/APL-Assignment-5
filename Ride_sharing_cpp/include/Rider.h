#pragma once
#include "Ride.h"
#include <vector>
#include <memory>
#include <string>
#include <iostream>
using namespace std;

class Rider {
private:
    string riderID;
    string name;
    vector<shared_ptr<Ride>> requestedRides;

public:
    Rider(string id, string n);
    void requestRide(shared_ptr<Ride> ride);
    void viewRides() const;
};
