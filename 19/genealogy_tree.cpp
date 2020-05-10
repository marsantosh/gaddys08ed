// genealogy_tree.cpp
// this program uses a generalization of binary trees to build
// genealogy trees
#include <vector>
#include <string>
#include <iostream>
using namespace std;

enum Gender{male, female};


// person class represents a person participating in a
// genealogy
class Person {
    private:
        string name;
        Gender gender;
        vector<Person *> parents;
        vector<Person *> children;
        void addParent(Person *p) {
            parents.push_back(p);
        }
    public:
        Person(string name, Gender g) {
            this->name = name;
            gender = g;
        }
        Person *addChild(string name, Gender g);
        Person *addChild(Person *p);

        friend ostream &operator << (ostream &out, Person p);

        // member functions for getting varipus Person info
        string getName() const { return name; }
        Gender getGender() const { return gender; }
        int getNumChildren() const {return children.size(); }
        int getNumParents() const { return parents.size(); }
        Person *getChild(int k) const;
        Person *getParent(int k) const;
};


/*
 * create a child with specified name and gender, 
 * and set one of the parents to be this person.
 * Add the new child to the list of children for this person
 */
Person *Person::addChild(string name, Gender g) {
    Person *child = new Person(name, g);
    child->addParent(this);
    children.push_back(child);
    return child;
}


/*
 * add a child to the lsit of children for this person
 */
Person *Person::addChild(Person *child) {
    child->addParent(this);
    children.push_back(child);
    return child;
}


/*
 * return a pointer to the specified parent
 */
Person *Person::getParent(int k) const {
    if (k < 0 || k >= static_cast<int>(parents.size())) {
        cout << "Error indexing parents vector." << endl;
        exit(1);
    }
    return parents[k];
}


/*
 * return a pointer to a specified child
 */
Person *Person::getChild(int k) const {
    if (k < 0 || k >= static_cast<int>(children.size())) {
        cout << "Error indexing children's vector." << endl;
        exit(1);
    }
    return children[k];
}


/*
 * overloaded stream output operator
 */
ostream & operator<<(ostream & out, Person p) {
    out << "<Person name = " << p.name << ">" << "\n";

    if (p.parents.size() > 0)
        out << "   <parents>" << ' ';
    for (unsigned k = 0; k < p.parents.size(); k++) {
        out << " " << p.parents[k]->name << ' ';
    }

    if (p.parents.size() > 0)
        out << " </parents>" << "\n";
    if (p.children.size() > 0)
        out << "   <children>" << ' ';
    for (unsigned k = 0; k < p.children.size(); k++) {
        out << " " << p.children[k]->name << ' ';
    }

    if (p.children.size() > 0)
        out << " </children>" << "\n";
    out << "</person>" << "\n";
    return out;
}


int main(int argc, char** argv) {
    // here are the people
    Person adam("Adam", male);
    Person eve("Eve", female);
    Person joan("Joan", female);

    // adam and Eve are parents of Abel
    Person *pAbel = eve.addChild(new Person("Abel", male));
    adam.addChild(pAbel);

    // abel and joan are parents of Missy
    Person *pMissy = joan.addChild("Missy", female);
    pAbel->addChild(pMissy);

    // output all the people
    cout << "HEre are all the people:\n\n";
    cout << adam << eve;
    cout << *pAbel << joan;
    cout << *pMissy << "\n";

    // print parents of Missy
    cout << "Missy's parents are: " << endl;
    for (int k = 0; k < pMissy->getNumParents(); k++) {
        Person *p = pMissy->getParent(k);
        switch (p->getGender()) {
            case female: cout << "\tMother: "; break;
            case male: cout << "\tFather: "; break;
        }
        cout << p->getName() << endl;
    }
    return 0;
}