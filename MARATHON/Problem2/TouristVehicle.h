#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H
#include <iostream>
#include "VehicleType.h"

class TouristVehicle
{
private:
    std::string _number;
    VehicleType _Vtype;
    int _seat_count;
    float _per_hour_booking_charge;
public:
    TouristVehicle() = default;
    TouristVehicle(const TouristVehicle &val) = default;
    TouristVehicle(std::string number,
                    VehicleType Vtype,
                    int seat_count,
                    float per_hour_booking_charge);

    ~TouristVehicle() {
        std::cout<<"Tourist Vehicle with ID: "
        <<_number
        <<"Is now deleted";
    }

    std::string number() const { return _number; }

    VehicleType vtype() const { return _Vtype; }

    int seatCount() const { return _seat_count; }

    float perHourBookingCharge() const { return _per_hour_booking_charge; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);

    
};
std::string DisplayEnum(VehicleType val);

#endif // TOURISTVEHICLE_H
