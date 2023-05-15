

/*
Write class mytime to operate overloaded operators on time objects.
post& pre increment
post& pre decrement
greater than equal to
less than equal to
equal to
not equal to
*/

#include <iostream>

using namespace std;

class mytime
{
    int hours;
    int minutes;
    
public:

    mytime();
    mytime(int, int);

    void display();

    mytime operator++(); // pre increment
    mytime operator++(int); // post increment
    mytime operator--(); // pre decrement
    mytime operator--(int); // post decrement
    friend bool operator>=(const mytime&, const mytime&);
    bool operator<=(const mytime&);
    friend bool operator==(const mytime&, const mytime&);
    bool operator!=(const mytime&);
    friend mytime operator+(const mytime&, const mytime&);
    mytime operator-(const mytime&);
    friend ostream& operator<<(ostream&, const mytime&);
    friend istream& operator>>(istream&, mytime&);
};

mytime::mytime()
{
    hours = 0;
    minutes = 0;
}

mytime::mytime(int h, int m)
{
    hours = h;
    minutes = m;
}

void mytime::display()
{
    cout << "Time: " << hours << ":" << minutes << endl;
}

mytime mytime::operator++() // pre increment
{
    ++minutes;

    if (minutes >= 60)
    {
        ++hours;
        minutes = 0;
    }

    return *this;
}

mytime mytime::operator++(int) // post increment
{
    mytime temp(hours, minutes);

    ++minutes;

    if (minutes >= 60)
    {
        ++hours;
        minutes = 0;
    }

    return temp;
}

mytime mytime::operator--() // pre decrement
{
    --minutes;

    if (minutes < 0)
    {
        --hours;
        minutes = 59;
    }

    return *this;
}

mytime mytime::operator--(int) // post decrement
{
    mytime temp(hours, minutes);

    --minutes;

    if (minutes < 0)
    {
        --hours;
        minutes = 59;
    }

    return temp;
}

bool operator>=(const mytime& t1, const mytime& t2)
{
    int t1_mins = t1.hours * 60 + t1.minutes;
    int t2_mins = t2.hours * 60 + t2.minutes;

    return t1_mins >= t2_mins;
}

bool mytime::operator<=(const mytime& t)
{
    int t1_mins = hours * 60 + minutes;
    int t2_mins = t.hours * 60 + t.minutes;

    return t1_mins <= t2_mins;
}

bool operator==(const mytime& t1, const mytime& t2)
{
    int t1_mins = t1.hours * 60 + t1.minutes;
    int t2_mins = t2.hours * 60 + t2.minutes;

    return t1_mins == t2_mins;
}

bool mytime::operator!=(const mytime& t)
{
    int t1_mins = hours * 60 + minutes;
    int t2_mins = t.hours * 60 + t.minutes;

    return t1_mins != t2_mins;
}

mytime operator+(const mytime& t1, const mytime& t2)
{
    mytime temp;

    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours;

    if (temp.minutes >= 60)
    {
        ++temp.hours;
        temp.minutes -= 60;
    }

    return temp;
}

mytime mytime::operator-(const mytime& t)
{
    mytime temp;

    temp.minutes = minutes - t.minutes;
    temp.hours = hours - t.hours;

    if (temp.minutes < 0)
    {
        --temp.hours;
        temp.minutes += 60;
    }

    return temp;
}

ostream& operator<<(ostream& out, const mytime& t)
{
    out << "Time: " << t.hours << ":" << t.minutes << endl;

    return out;
}

istream& operator>>(istream& in, mytime& t)
{
    cout << "Enter hours: ";
    in >> t.hours;
    cout << "Enter minutes: ";
    in >> t.minutes;

    return in;
}





int main()
{
    mytime t1(2, 30), t2(3, 45), t3, t4 , t5;

    t3 = t1 + t2;

    t3.display();

    t3 = t1 - t2;

    t3.display();

    if(t1 >= t2)
        cout << "t1 is greater than or equal to t2" << endl;
    else
        cout << "t1 is not greater than or equal to t2" << endl;
    
    if(t1 <= t2)
        cout << "t1 is less than or equal to t2" << endl;
    else
        cout << "t1 is not less than or equal to t2" << endl;

    if(t1 == t2)
        cout << "t1 is equal to t2" << endl;
    else
        cout << "t1 is not equal to t2" << endl;
    if(t1 != t2)
        cout << "t1 is not equal to t2" << endl;
    else
        cout << "t1 is equal to t2" << endl;
    
    t4 = ++t1;

    cout<<t4<<t1;

    t5 = t2++;

    cout<<t5<<t2;

    t4 = --t1;

    cout<<t4<<t1;

    t5 = t2--;

    cout<<t5<<t2;

    cin >> t1;

    cout << t1;

    return 0;
}


