#include <iostream>
#include <string>
using namespace std ;


  class University{

private:
    static University* ptr;
    University(){
    }

public:
     University(const University& obj)=delete;

static University* getInstance()
{

    if(ptr==NULL){
        ptr = new University();
    }
    return ptr;
}


};






class Person {
private:
    int id;
    string name;
    int age;
    char gender;

public:
    // Default constructor
    Person()
     {}

    // Parameterized constructor
    Person(int _id, const string& _name, int _age, char _gender)
        : id(_id), name(_name), age(_age), gender(_gender) {}

    // Setters
    void set_id(int _id) {
        id = _id;
    }

    void set_name(const string& _name) {
        name = _name;
    }

    void set_age(int _age) {
        age = _age;
    }

    void set_gender(char _gender) {
        gender = _gender;
    }

    // Getters
    int get_id() const {
        return id;
    }

    const string& get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    char get_gender() const {
        return gender;
    }
};
University* University::ptr = NULL;

int main() {
    // Creating objects using different constructors
    Person person1; // Default constructor
    Person person2(1, "Alice", 25, 'F'); // Parameterized constructor

    // Using setters to update values
    person1.set_id(2);
    person1.set_name("Bob");
    person1.set_age(30);
    person1.set_gender('M');

    // Using getters to retrieve values
    cout << "Person 1: ID - " << person1.get_id() << ", Name - " << person1.get_name()
              << ", Age - " << person1.get_age() << ", Gender - " << person1.get_gender() << endl;

    cout << "Person 2: ID - " << person2.get_id() << ", Name - " << person2.get_name()
              << ", Age - " << person2.get_age() << ", Gender - " << person2.get_gender() << endl;

    return 0;




}
