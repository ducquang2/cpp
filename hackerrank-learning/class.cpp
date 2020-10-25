#include <iostream>
#include <sstream>
using namespace std;

/* 
Enter code for class here
*/
class Student
{
private:
    int age, standard;
    string first_name, last_name;
public:
    
    // setter
    void set_age(int age_in) {
        age = age_in;
    }
    void set_standard(unsigned standard_in) {
        standard = standard_in;
    }
    void set_first_name(string first_name_in) {
        first_name = first_name_in;
    }
    void set_last_name(string last_name_in) {
        last_name = last_name_in;
    }

    // getter
    int get_age() {
        return age;
    }
    int get_standard() {
        return standard;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << "\n";
    cout << endl;
    cout << st.to_string();

    return 0;
}