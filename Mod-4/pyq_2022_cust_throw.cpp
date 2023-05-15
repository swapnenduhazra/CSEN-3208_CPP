/*
Write a user defined exception OutOfRange, with what method. When the exception is being thrown it will give the output “your input”<input>”is out of range”. Take age of an user as an user input, if the age falls outside 18yrs-60yrs, throw OutOfRange exception with the message “your input <age input> is out of range”. If the age is in between the range, just show the input age.
*/
#include <iostream>
#include <exception>

using namespace std;


    class OutOfRange : public std::exception {
    public:
        OutOfRange(int input) : input_(input) {}

        const char* what() const throw() {
            return "Your input is out of range.";
        }

        int getInput() const {
            return input_;
        }

    private:
        int input_;
    };


int main() {
    int age;
    std::cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18 || age > 60) {
            throw OutOfRange(age);
        } else {
            cout << "Your age is: " << age << std::endl;
        }
    } catch (const OutOfRange& ex) {
        cout << ex.what() << " Input: " << ex.getInput() << endl;
    }

    return 0;
}
