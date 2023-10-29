#include <string>
#include <cmath>

using namespace std;

#ifndef STATE_H
#define STATE_H


class State
{
    public:
        State();
        State(string, double, long long int);
        //add get and set functions
        double findPercentage();


    string getName() const
    {
        return m_name;
    }


    double getPercentage() const
    {
        return m_percentage;
    }


    void getPercentage()
    {
        double panelsNeeded = ceil ((m_energy ) / 51);
        double panelArea = panelsNeeded * 18;
        m_percentage = ceil( (panelArea / m_size) * 100) ;
    }


    protected:

    private:
        string m_name;
        double m_energy;
        long long m_size;
        double m_percentage;

};

#endif // STATE_H
