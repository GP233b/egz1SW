
#include <vector>
#include "Lamp.h"
#include "HeadLamp.h"
#include "ColorLamp.h"
#include<algorithm>

using namespace std;

unsigned sumP;

template<typename T>
void printVector(vector <T> vec) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i].printLamp();
    }

}

template<typename T>
unsigned sumPower(vector<T> Lampy) {

    for (int i = 0; i < Lampy.size(); i++) {
        sumP += Lampy[i].getPower();
    }
    return sumP;
}


vector< Lamp >Lampy;

int main() {




    Lamp::aboutMe();
    unsigned maks = 0;
    cout << endl;




    Lamp L1("aaa", 5, true);
    ColorLamp C1("bb", 20, true, 0.1, 0.2, 0.3);
    HeadLamp H1("bb", 20, true, "pink", false);

    Lampy.push_back(C1);
    Lampy.push_back(H1);
    Lampy.push_back(L1);
    printVector(Lampy);
    cout << "XXXXXXXX" << endl;

    for (int i = 0; i < Lampy.size(); i++) {
        unsigned pom = 0;
        pom = Lampy[i].getPower();
        if (pom > maks) {
            maks = pom;
        }
    }

    vector<Lamp>::iterator ptr;
    
    sort(Lampy.begin(), Lampy.end(), [](Lamp& A, Lamp& B) {return A.getPower() < B.getPower(); });

    printVector(Lampy);
    cout << "XXXXXXXX" << endl;



    for (int i = 0; i < Lampy.size(); i++) {
        unsigned pom = 0;
        pom = Lampy[i].getPower();
        if (pom < maks / 2) {
            Lampy.erase(Lampy.begin() + i);
        }
    }

    printVector(Lampy);
    cout << "XXXXXXXX" << endl;

    //sort(personList.begin(), personList.end(), [](Person& A, Person& B) {return A.getAge() < B.getAge(); });
    

    sumP = sumPower(Lampy);
    cout << sumP << endl;


    return 0;

}
