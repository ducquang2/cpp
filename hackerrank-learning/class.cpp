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
    
    


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_lasr_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << "\n";
    cout << endl;
    cout << st.to_string();

    return 0;
}