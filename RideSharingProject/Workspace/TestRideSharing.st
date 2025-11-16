"Create rides"
| rides driver rider |
rides := Array new.
rides := rides copyWith: (StandardRide new initializeWithID: 'R1' pickup: 'Home' dropoff: 'Office' distance: 5.0).
rides := rides copyWith: (PremiumRide new initializeWithID: 'R2' pickup: 'Mall' dropoff: 'Airport' distance: 12.0).

"Print ride details"
rides do: [:r | Transcript show: r rideDetails; cr].

"Create driver and assign rides"
driver := Driver new initializeWithID: 'D1' name: 'Sam' rating: 4.8.
rides do: [:r | driver addRide: r].
Transcript show: driver getDriverInfo; cr.

"Create rider and request rides"
rider := Rider new initializeWithID: 'U1' name: 'Alice'.
rides do: [:r | rider requestRide: r].
Transcript show: 'Rider''s rides:'; cr.
rider viewRides.
