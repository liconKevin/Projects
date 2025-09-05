
#include <cstring>
#include <stdexcept>

using namespace std;

class Player {

    char name[50];
    int credit;

    void setCredit(int newCredit) {
        if(newCredit < 0) {

            throw invalid_argument("Credit cannot be negative");

        }

        this->credit = newCredit;
    }

    public:

    Player(char newName[50], int startCredit) {
        setName(newName);
        setCredit(startCredit);
    }

    void setName(const char userName[50]) {

        if(userName == nullptr) {
            throw invalid_argument("Name cannot be null");
        }

        if(strlen(userName) >= sizeof(name)) {
            throw invalid_argument("Name is too long");
        }

        strncpy(name, userName, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';

    }

    void addCredit(int amount) {

        if(amount < 0) {
            throw invalid_argument("Amount to add cannot be negative");
        }

        setCredit(credit + amount);

    }

    void deductCredit(int amount) {

        if(amount < 0) {
            throw invalid_argument("Amount to deduct cannot be negative");
        }

        if(credit - amount < 0) {
            throw invalid_argument("Insufficient credit");
        }

        setCredit(credit - amount);

    }

};