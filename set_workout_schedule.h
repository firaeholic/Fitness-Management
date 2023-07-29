#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

string mon,tue, wed, thurs, satur, sun;

int chk, t1, t2, t3, t4, t5, t6;
int get_time()
          {
            
            monday:
              system("cls");
              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Monday" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t     <0>Go back" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
              cin >> mon;
              cout << "\t\t\t\t\t\t\t\tEnter duration (in minute):     ";
              cin >> t1;
              cout << endl <<endl;
            
             if (mon =="0")
              {
                 return 0;
              }

              if(mon == "1")
              {
                  mon = "Mountain Climbing";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(mon == "2")
              {
                  mon = "burpees          ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(mon == "3")
              {
                  mon = "Jumpling Jacks   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(mon == "4")
              {
                  mon = "Indoor Cycling   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(mon == "5")
              {
                  mon = "Sprint           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(mon == "6")
              {
                  mon = "Jump Rope        ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(mon == "7")
              {
                  mon = "Swimming         ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(mon == "8")
              {
                  mon = "Boxing           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              

              else
              {
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  goto monday;
              }
            tuesday:
              system("cls");
              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Tuesday" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t     <0>Go back" << endl << endl;
              cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
              cin >> tue;
              cout << "\t\t\t\t\t\t\t\tEnter duration (in minute):     ";
              cin>> t2 ;
              cout<< endl << endl;
              
               if (tue == "0")
              {
                 return 0;
              }
              if(tue == "1")
              {
                  tue = "Mountain Climbing";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(tue == "2")
              {
                  tue = "burpees          ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(tue == "3")
              {
                  tue = "Jumpling Jacks   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(tue == "4")
              {
                  tue = "Indoor Cycling   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(tue == "5")
              {
                  tue = "Sprint           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(tue == "6")
              {
                  tue = "Jump Rope        ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(tue == "7")
              {
                  tue = "Swimming         ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(tue == "8")
              {
                  tue = "Boxing           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else
              {
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  goto tuesday;
              }
            wednesday:
            system("cls");
              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Wednesday" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t     <0>Go back" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\tEnter your choice:     " ;
              cin >> wed;
              cout << "\t\t\t\t\t\t\t\tEnter duration (in minute):     "; 
              cin >> t3;
              cout<< endl << endl;
               if (wed == "0")
              {
                 return 0;
              }
               if(wed== "1")
              {
                  wed = "Mountain Climbing";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(wed == "2")
              {
                  wed = "burpees          ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(wed == "3")
              {
                  wed = "Jumpling Jacks   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(wed == "4")
              {
                  wed = "Indoor Cycling   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(wed == "5")
              {
                  wed = "Sprint           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(wed == "6")
              {
                  wed = "Jump Rope        ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(wed == "7")
              {
                  wed = "Swimming         ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(wed == "8")
              {
                  wed = "Boxing           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else
              {
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  goto wednesday;
              }
            thursday:
              system("cls");
              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Thursday" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t     <0>Go back" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
              cin >> thurs;
              cout << "\t\t\t\t\t\t\t\tEnter duration (in minute):     ";
              cin >>t4;
              cout<< endl << endl;
               if (thurs == "0")
              {
                 return 0;
              }
               if(thurs== "1")
              {
                  thurs = "Mountain Climbing";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(thurs == "2")
              {
                  thurs = "burpees          ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(thurs == "3")
              {
                  thurs = "Jumpling Jacks   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(thurs == "4")
              {
                  thurs = "Indoor Cycling   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(thurs== "5")
              {
                  thurs = "Sprint           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(thurs == "6")
              {
                  thurs = "Jump Rope        ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(thurs== "7")
              {
                  thurs = "Swimming         ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(thurs == "8")
              {
                  thurs = "Boxing           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else
              {
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  goto thursday;
              }
            saturday:
              system("cls");
              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Saturday" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t     <0>Go back" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
              cin >> satur;
              cout << "\t\t\t\t\t\t\t\tEnter duration (in minute):     ";
              cin >> t5;
              cout<< endl << endl;
               if (satur == "0")
              {
                 return 0;
              }
              if(satur == "1")
              {
                  satur = "Mountain Climbing";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(satur == "2")
              {
                  satur = "burpees          ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(satur == "3")
              {
                  satur = "Jumpling Jacks   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(satur == "4")
              {
                  satur = "Indoor Cycling   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(satur == "5")
              {
                  satur = "Sprint           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else if(satur == "6")
              {
                  satur = "Jump Rope        ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(satur == "7")
              {
                  satur = "Swimming         ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
               else if(satur == "8")
              {
                  satur = "Boxing           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
              }
              else
              {
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  goto saturday;
              }
            sunday:
               system("cls");
              cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Sunday" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t     <0>Go back" << endl << endl;
              cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
              cin >> sun;
              cout << "\t\t\t\t\t\t\t\tEnter duration (in minute):     ";
              cin >> t6;
              cout << endl << endl;
               if (sun == "0")
              {
                 return 0;
              }
               if(sun == "1")
              {
                  sun = "Mountain Climbing";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
              else if(sun == "2")
              {
                  sun = "burpees          ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
              else if(sun == "3")
              {
                  sun = "Jumpling Jacks   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
              else if(sun == "4")
              {
                  sun = "Indoor Cycling   ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
              else if(sun == "5")
              {
                  sun = "Sprint           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
              else if(sun == "6")
              {
                  sun = "Jump Rope        ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
               else if(sun == "7")
              {
                  sun = "Swimming         ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
               else if(sun == "8")
              {
                  sun = "Boxing           ";
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSaved ...";
                  Sleep(500);
                   return 0; 
              }
              else
              {
                  system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  goto sunday;
              }
          

            
          }
