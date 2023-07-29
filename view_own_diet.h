#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;




void view_diet()
{
      cout << "\n\n\n\n\t\t\t Days" << "\t\t\t\t\t\t\t\tMeals\n";
          cout << "\t\t\t_______________________________________________________________________________\n";
          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << mon_break <<endl;
          cout << "\t\t\tMonday " <<  "\t\t\t|Lunch"<< "\t\t\t\t|" <<mon_lunch<<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" <<mon_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl<<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << tue_break <<endl;
          cout << "\t\t\tTuesday " <<  "\t\t|Lunch"<< "\t\t\t\t|" << tue_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" << tue_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << wed_break <<endl;
          cout << "\t\t\tWednesday " <<  "\t\t|Lunch"<< "\t\t\t\t|"<< wed_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|"<< wed_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << thurs_break <<endl;
          cout << "\t\t\tThursday " <<  "\t\t|Lunch"<< "\t\t\t\t|" << thurs_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|"<< thurs_dinner << endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << fri_break <<endl;
          cout << "\t\t\tFriday " <<  "\t\t\t|Lunch"<< "\t\t\t\t|"<< fri_lunch<<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|"<< fri_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << satur_break <<endl;
          cout << "\t\t\tSaturday " <<  "\t\t|Lunch"<< "\t\t\t\t|" << satur_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" << satur_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;

          cout << "\t\t\t\t\t\t|Breakfast" << "\t\t\t|" << sun_break <<endl;
          cout << "\t\t\tSunday " <<  "\t\t\t|Lunch"<< "\t\t\t\t|" << sun_lunch <<endl;
          cout << "\t\t\t\t\t\t|dinner" << "\t\t\t\t|" << sun_dinner <<endl;
          cout << "\t\t\t_______________________________________________________________________________" <<endl <<endl;
}