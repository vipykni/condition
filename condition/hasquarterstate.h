#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H

#include "state.h"
#include "mightygumball.h"
#include <QDateTime>

class HasQuarterState : public State
{
private:
    GumballMachine *gumballMachine;
public:
    HasQuarterState(GumballMachine *gumballMachine);
    ~HasQuarterState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    QString toString();
};

#endif // HASQUARTERSTATE_H
