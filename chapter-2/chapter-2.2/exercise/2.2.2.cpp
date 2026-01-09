#include<iostream>
#include <chrono>       // time duration এর জন্য
#include <thread>
#include<ctime>
using namespace std;

class t{
private:
    int hour,minute,second;

public:
    t(int h,int m,int s)
    {
        hour=h;
        minute=m; second=s;
    }

    void showtime()
    {
        cout<<"time="<<endl;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};

class d{

private:
    int day, month,year;

public:
    d(int d,int mon,int y)
    {
        day=d; month=mon; year=y;
    }

    void showdate()
    {
        cout<<"date=";
        cout<<day<<":"<<month<<":"<<year<<endl;
    }
    };

    int main()
    {
        while (1) {
                    time_t now=time(0);
        tm*ltm=localtime(&now);

        t currentTime(ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
        d currentDate(ltm->tm_mday, 1+ltm->tm_mon, 1900+ltm->tm_year);

        currentTime.showtime();
        currentDate.showdate();

            this_thread::sleep_for(chrono::seconds(1));
        system("cls");
        }

    }

