#include <string>
#include <cstdlib>

class Skill{
public:
    Skill();

    //setters
    void setAgility(int agl);
    void setFighting(int fit);
    void setShooting(int sht);
    void setAwareness(int awr);
    void setPsyche(int psy);
    void setSpeed(int spd);
    void setHp(int hp);

    //getters
    int getAgility();
    int getFighting();
    int getShooting();
    int getAwareness();
    int getPsyche();
    int getSpeed();
    int getHp();


private:
    int agility;
    int fighting;
    int shooting;
    int awareness;
    int psyche;
    int speed;
    int hitPoints;
};

