
/**
 * libemulation
 * MOS6522
 * (C) 2012 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Implements a MOS 6522 (ROM, RAM, I/O, Timer)
 */

#include "OEComponent.h"

class MOS6522 : public OEComponent
{
public:
    MOS6522();
    
    bool setValue(string name, string value);
    bool getValue(string name, string& value);
    bool setRef(string name, OEComponent *ref);
    
    OEChar read(OEAddress address);
    void write(OEAddress address, OEChar value);
    
private:
    OEComponent *controlBus;
    OEComponent *portA;
    OEComponent *portB;
    OEComponent *controlBusB;
    
    OEAddress addressA;
    OEChar ddrA;
    OEChar dataA;
	bool ca1;
	bool ca2;
    
    OEAddress addressB;
    OEChar ddrB;
    OEChar dataB;
	bool cb1;
	bool cb2;
};