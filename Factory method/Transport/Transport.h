#pragma once

class Transport
{
public:
	virtual void deliver() = 0;
	virtual int getCapacity() = 0;
	virtual ~Transport() = default;
};