#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "state.h"
#include "mightygumball.h"

class GumballMachine;

class SoldState : public State
{
private:
    GumballMachine *gumballMachine;
public:
    SoldState(GumballMachine *gumballMachine);
    ~SoldState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    QString toString();
};

#endif // SOLDSTATE_H
