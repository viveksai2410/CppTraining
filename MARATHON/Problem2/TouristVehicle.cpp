#include "TouristVehicle.h"

TouristVehicle::TouristVehicle(std::string number, VehicleType Vtype, int seat_count, float per_hour_booking_charge)
: _number(number), _Vtype(Vtype), _seat_count(seat_count), _per_hour_booking_charge(per_hour_booking_charge)
{
}
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _Vtype: " << DisplayEnum(rhs._Vtype)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}

std::string DisplayEnum(const VehicleType val){
    if(val == VehicleType::BIKE)
    {
        return "BIKE";
    }
    else if(val == VehicleType::BUS)
    {
        return "BUS";
    }
    else {
        return "CAB";
    }
}
