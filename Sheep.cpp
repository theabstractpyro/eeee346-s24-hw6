#include "Sheep.h"

// TODO: write your code to initialize the static (const) member variable
const string Sheep::SAYS = "Baa!";

// TODO: write your code of the constructor
Sheep::Sheep(string name, int age, int weight) : name(name), age(age), weight(weight) {}

// TODO: write your code of the copy constructor
Sheep::Sheep(Sheep &sheep) : name(sheep.name + " Clone"), age(sheep.age), weight(sheep.weight) {}

// TODO: write your code of the member functions (incrementAge(), setWeight(int weight), getAnimalType())
void Sheep::incrementAge() {
    age++;
}

void Sheep::setWeight(int weight) {
    this->weight = weight;
}

string Sheep::getAnimalType() {
    return "Sheep";
}

// TODO: write your code of the overloaded << operator
ostream &operator<<(ostream &out, Sheep &sheep) {
    out << "Name: " << sheep.name << "\nAge: " << sheep.age << "\nWeight: " << sheep.weight << "\n\n";
    return out;
}

