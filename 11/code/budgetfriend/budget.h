#ifndef BUDGET_H
#define BUDGET_H
#include "auxil.h"  // for aux class declaration

// budget class declaration
class Budget {
    private:
        static double corpBudget;
        double divBudget;
    public:
        Budget() {divBudget = 0;}
        void addBudget(double b) {divBudget += b; corpBudget += divBudget;}
        double getDivBudget() const {return divBudget;}
        static double getCorpBudget() {return corpBudget;}
        static void mainOffice(double);
        friend void Aux::addBudget(double);
};
#endif
