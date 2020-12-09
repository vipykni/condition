#include "hasquarterstate.h"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine)
{
    this -> gumballMachine;
    qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);

}

HasQuarterState::~HasQuarterState()
{

}

void HasQuarterState::insertQuarter() {
    cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter() {
    cout << "Quarter returned" << endl;
    gumballMighty->setState(gumballMighty->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    cout << "You turned..." << endl;
    int winner = qrand() % 10;
    if (winner == 0 && gumballMighty->getCount() > 1) {
        gumballMighty->setState(gumballMighty->getWinnerState());
    }
    else {
        gumballMighty->setState(gumballMighty->getSoldState());
    }
}
