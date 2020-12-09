#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H

#include "state.h"
#include "mightygumball.h"

class GumballMachine;

class SoldOutState : public State
{
private:
    GumballMachine *gumballMachine;
public:
    SoldOutState(GumballMachine *gumballMachine);
    ~SoldOutState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    QString toString();
};

#endif // SOLDOUTSTATE_H
