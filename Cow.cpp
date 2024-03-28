#include "Cow.h"

// TODO: write your code to initialize the static (const) member variable
const string Cow::SAYS = "Moo!";

// TODO: write your code of the constructor
Cow::Cow(string name, int age, int weight) : name(name), age(age), weight(weight) {}

// TODO: write your code of the member functions (incrementAge(), setWeight(int weight), getAnimalType())
void Cow::incrementAge() {
    age++;
}

void Cow::setWeight(int weight) {
    this->weight = weight;
}

string Cow::getAnimalType() {
    return "Cow";
}

// TODO: write your code of the overloaded << operator
ostream &operator<<(ostream &out, Cow &cow) {
    out << "Name: " << cow.name << "\nAge: " << cow.age << "\nWeight: " << cow.weight << "\n";
    return out;
}
