#pragma once
#include <string>
using namespace std;

class Ride {
protected:
    string rideID;
    string pickupLocation;
    string dropoffLocation;
    double distance;

public:
    Ride(string id, string pu, string doff, double dist);
    virtual ~Ride() = default;
    virtual double fare() const;
    virtual string rideDetails() const;
};
