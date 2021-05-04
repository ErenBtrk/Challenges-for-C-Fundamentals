#include <iostream>

using namespace std;

class Time{
private:
    int second;
    int minute;
    int hour;
    // If time in AM, amPm is true. If time in PM, amPm is false
    bool amPm;
    bool format12;
public:
    Time();
    Time(int,int,int,bool);
    Time(int,int,int);
    void displayTime();
    void convertTo24();
    void convertTo12();

};
Time::Time(){
    second=0;
    minute=0;
    hour=0;
    // Default time set to midnight
    // Default time format set to 12 hour
    amPm=true;
    format12=true;
}
Time::Time(int second,int minute,int hour,bool amPm){ //constructor for 12 hour time format
    if(hour>=0 && hour <=12 && minute>=0 && minute<=59 && second>=0 && second<=59){
        this->second=second;
        this->minute=minute;
        this->hour=hour;
        this->amPm=amPm;
        this->format12=true;
            if(hour == 12 && amPm == true){
                hour=0;
            }
    }
    else{
        cout << "One or more value(s) are not in valid range" << endl ;
        cout << "Setting time to default" << endl ;
        hour = 0 ;
        minute = 0 ;
        second = 0 ;
        amPm = true ;
        format12 = true ;
    }
}

Time::Time(int second,int minute,int hour){
    if(hour>=0 && hour <=23 && minute>=0 && minute <=59 && second>=0 && second <=59){
        this->second=second;
        this->minute=minute;
        this->hour=hour;
        this->format12=false;
    }
    else{
        cout << "One or more value(s) are not in valid range" << endl;
        cout << "Setting time to default" << endl;
        second=0;
        minute=0;
        hour=0;
        amPm=true;
        format12=true;
    }
}

void Time::convertTo24(){
    if(format12 == true){
        if(amPm == false){
            if(hour != 12){
                hour=hour+12;
            }
        }
    }
    format12=false;
}

void Time::convertTo12(){
    if(format12 == false){
        if(hour > 12){
            hour=hour-12;
            amPm=false;
        }
        else if(hour == 12){
            amPm=false;
        }
        else{
            amPm=true;
        }
    }
    format12=true;
}

void Time::displayTime(){
    cout << "Time :" ;
    if(format12 == true){
        cout << hour << ":" <<minute << ":" << second << " " ;
        if(amPm == true){
            cout << "AM" << endl;
        }
        else{
            cout << "PM" << endl;
        }
    }
    else{
            cout << hour << ":" << minute << ":" << second << "hrs" << endl;
    }

}

int main(){
    Time t1 ;
    t1.displayTime( ) ;

    Time t2 = Time ( 34, 35, 21 ) ;
    t2.displayTime( ) ;

    t2.convertTo12( ) ;
    t2.displayTime( ) ;

    Time t3 = Time ( 43, 5, 2, true ) ;
    t3.displayTime( ) ;

    t3.convertTo24( ) ;
    t3.displayTime( ) ;





	return 0;
}
