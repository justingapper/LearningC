// NOTE: no .h extensions in C++ standard libraries
//
// iostream: contains basic io streaming operations (cin, cout, etc.)
#include <iostream>
// true string type
#include <string>
// convert strings to streams with stringstream
#include <sstream>
// write files easily as streams
#include <fstream>

namespace foo
{
    // std:: denotes the namespace of std
    // cout takes a string as a stream and prints it to stdout
    // endl is the stream form of an end-of-line character \n
    void print() { std::cout << "This is printing from foo." << std::endl; }
}

namespace bar
{
    void print() { std::cout << "This is printing from bar." << std::endl; }
}

int main()
{
    // specify that everything in the namespace std should 
    // become available in the local scope for convenience
    using namespace std;

    //name program
    char firstname_string[20];
    char lastname_string[20];
    
    // demonstration that the std:: prefix is no longer needed
    cout << "What is your first name? ";
    // get entire line until a carriage return
    cin >> firstname_string;
    cout << "What is your last name? ";
    cin >> lastname_string;
    
    // use streams to parse the string input as different types
    //stringstream(input) >> fnum;
    //stringstream(input) >> inum;
    
    
    // show result of parsed input
    cout << "First name:  \t" << firstname_string << endl;
    cout << "Last name:  \t" << lastname_string << endl;


    // file handle
    ofstream output;
    // open a file
    output.open("output_file.txt");
    // write to file as a stream
    output << "This is the first line of the file." << endl;
    output << "Your first name is \t" << firstname_string << '\t';
    output << "Your last name is \t" << firstname_string << endl;
    output.close();

    return 0;
}
