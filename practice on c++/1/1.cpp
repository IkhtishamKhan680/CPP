#include <iostream>
#include <cstring>
using namespace std;

class hero
{
    int health = 100;
    char level;

public:
    char *name;

    hero()
    {
        name = new char[100];
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    hero (hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;


        this ->health = temp.health;
        this ->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "Name : " << this->name << " ,";
        cout << "health :" << this->health << " ,";
        cout << "level = " << this->level << endl;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }
};

int main()
{
    hero h1;

    h1.setHealth(12);
    h1.setLevel('d');
    char name[100] = "ikhtisham khan";
    h1.setName(name);
    h1.print();

    hero h2(h1);
    h2.print();

    *h1.name='k';
    h1.print();
    h2.print();
    return 0;
}