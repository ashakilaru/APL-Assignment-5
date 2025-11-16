#pragma once
#include "Ride.h"

class StandardRide : public Ride {
public:
    using Ride::Ride;
    double fare() const override;
};
