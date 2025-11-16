#pragma once
#include "Ride.h"
#include <vector>
#include <memory>
#include <string>
using namespace std;

class Driver {
private:
    string driverID;
    string name;
    double rating;
    vector<shared_ptr<Ride>> assignedRides;

public:
    Driver(string id, string n, double r);
    void addRide(shared_ptr<Ride> ride);
    string getDriverInfo() const;
};
