#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include "state.h"
#include "mightygumball.h"

class GumballMachine;

class NoQuarterState : public State
{
private:
    GumballMachine *gumbalMachine;
public:
    NoQuarterState(GumballMachine *gumballMachine);
    ~NoQuarterState();
     void insertQuarter() override;
     void ejectQuarter();
     void turnCrank();
     void dispense();
     QString toString();
};

#endif // NOQUARTERSTATE_H
