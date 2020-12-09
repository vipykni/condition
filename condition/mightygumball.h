#ifndef MIGHTYGUMBALL_H
#define MIGHTYGUMBALL_H

#include <iostream>
using namespace std;
#include <QString>
#include <QStringList>
#include <state.h>
#include "state.h"
#include "soldoutstate.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"
#include "winnerstate.h"


class  GumballMachine
{
private:
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *winnerState;
    State *state;
    int count;

public:
    GumballMachine(int numberGum);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void releaseBall();
    int getCount();
    void refill(int count);
    State* getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    State* getWinnerState();
    QString toString();
};

#endif // MIGHTYGUMBALL_H
