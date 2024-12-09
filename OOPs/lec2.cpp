#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    // function declaration
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

// function defination
void binary ::read(void)
{
    cout << "Enter a binary number = " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        
        else 
        {
        s.at(i) = '0';
        }
        
    }
}

void binary ::display(void)
{
    cout<< " Displaying your binary number --->>> "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    // OOPs - Classes and objects

    // C++ --> intially called -->> C with classes by Stroustroup
    // class --> extension of structures (in C)
    // Structures had limitations
    // --> members are public
    // --> no methods

    // classes = Structures + More
    // classes -->> can have methods and properties
    // classes -->> can make few members as private and few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declarartion like this :
    /* class Employee{

        // class definition

    } harry , rohan , lovish;     */

    // harry.salary =8 , makes no sense if salary is private

    // Nesting of member functions
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    cout<<endl;
    b.display();
    

    return 0;
}