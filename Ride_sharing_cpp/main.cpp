#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main() {
    vector<shared_ptr<Ride>> rides;
    rides.push_back(make_shared<StandardRide>("R1", "Home", "Office", 5.0));
    rides.push_back(make_shared<PremiumRide>("R2", "Mall", "Airport", 12.0));

    for (auto &r : rides)
        cout << r->rideDetails() << endl;

    Driver d("D1", "Sam", 4.8);
    d.addRide(rides[0]);
    d.addRide(rides[1]);
    cout << d.getDriverInfo() << endl;

    Rider rider("U1", "Alice");
    rider.requestRide(rides[0]);
    rider.requestRide(rides[1]);
    cout << "\nRider's rides:\n";
    rider.viewRides();

    return 0;
}
