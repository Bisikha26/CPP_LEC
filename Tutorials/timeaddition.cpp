#include<iostream>
#include <cstring>
using namespace std;
class Time
{  
  public:
  int hour;
  int minute;
  int second;
  
  void gettime()
  {   
      cout<<"Enter the time"<<endl;
      cout<<"Hour :"<<endl;
      cin>>hour;
      cout<<"Minute :"<<endl;
      cin>>minute;
      cout<< "Second :"<<endl;
      cin>>second;
      
  }
  void sum(Time time1,Time time2)
  {
   second = time1.second + time2.second;
   minute = time1.minute + time2.minute + (second/60);
   hour = time1.hour + time2.hour + (minute/60);
   minute = minute%60;
   second = second%60;
  }

  void display(char* t) {
    if (hour>12){
        hour = hour - 12 ;
        strcpy(t, "P.M");
    }
      cout<<"The time is "<<hour<<"hr-"<<minute<<"min-"<<second<<"sec"<< t<<endl;
  }
};
int main()
{
    Time time1,time2,result;
    char time[] = "A.M";
    time1.gettime();
    time2.gettime();
    result.sum(time1,time2);
    result.display(time);
}