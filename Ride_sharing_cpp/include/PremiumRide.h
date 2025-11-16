#pragma once
#include "Ride.h"

class PremiumRide : public Ride {
public:
    using Ride::Ride;
    double fare() const override;
};
