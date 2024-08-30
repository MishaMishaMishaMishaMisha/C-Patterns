#include "MobilePhone/MobilePhone.h"
#include "MobilePhone/ConcreteUsbCharger.h"
#include "FastCharger/Adapter.h"
#include "FastCharger/ConcreteFastCharger.h"




int main()
{

    MobilePhone phone;

    MicroUSBCharger* charger = new ConcreteMicroUSBCharger(2.0, 3.0);

    phone.getChargingPercent();
    phone.make_call(10);
    phone.getChargingPercent();

    phone.charge(10);
    phone.pluginCharger(charger);
    phone.charge(10);
    phone.unplugCharger();
    
    phone.getChargingPercent();

    TypeCCharger* fast_charger = new ConcreteTypeCCharger(15.0);
    // phone.pluginCharger(fast_charger)
    Adapter* adapter = new Adapter(fast_charger);
    phone.pluginCharger(adapter);
    phone.charge(10);
    phone.unplugCharger();

    phone.getChargingPercent();



    delete charger;
    delete fast_charger;

	return 0;
}