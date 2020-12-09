#ifndef MIGHTYGUMBALL_H
#define MIGHTYGUMBALL_H

#include <iostream>
using namespace std;
#include <QString>
#include <QStringList>
#include <state.h>

class MightyGumball
{
private:
    State *soldOut;
    State *noQuarter;
    State *hasQuarter;
    State *sold;
    State *state;

public:
    MightyGumball();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void dispense();
};

#endif // MIGHTYGUMBALL_H
