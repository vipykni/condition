#ifndef MIGHTYGUMBALL_H
#define MIGHTYGUMBALL_H

#include <iostream>
using namespace std;
#include <QString>
#include <QStringList>
#include <state.h>

class  GumballMachine
{
private:
    State *soldOut;
    State *noQuarter;
    State *hasQuarter;
    State *sold;
    State *state;
    int count;

public:
     GumballMachine(int numberGum);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void dispense();
    int getCount();
    void refill(int count);
    State* getState();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    QString toString();
};

#endif // MIGHTYGUMBALL_H
