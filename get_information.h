#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int get_info()
{   
  info:
      int info_number;
      int x;

              cout << "\n\n\n\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\t<1> Mountain Climbers    \t<2> Burpees" << endl << endl;
              cout << "\t\t\t<3> Jumping Jacks       \t<4> Indoor Cycling" << endl << endl;
              cout << "\t\t\t<5> Sprint              \t<6> Jump ropes" << endl << endl;
              cout << "\t\t\t<7> Swimming            \t<8> Boxing" << endl << endl;
              cout << "\t\t\t\t    <0>Go back" << endl << endl;
              cout << "\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tGet information for:    " ;
              cin >> info_number;


             if (info_number == 0)
             {
                  return 0;
             }


             else if(info_number == 1)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tMountan climber";
               cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tNo mountains necessary for this one." << endl << endl;
              cout << "\t\t\t1.Start in high plank position, with shoulders over wrists and core tight and activated.\n"
                   << "\t\t\tYou can be on your toes with straight legs or on your knees." << endl << endl;
              cout << "\t\t\t2. Draw right knee into chest, then return to high plank with both feet on the floor." << endl << endl;
              cout << "\t\t\t3. Repeat with left leg." << endl << endl;
              cout << "\t\t\t4. Continue alternating legs as quickly as you can.\n";
              cout << "\t\t\tThe faster you go, the more intense the exercise." << endl << endl;
              cout << "\t\t\t---------------------------------------" << endl << endl;
              
             cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }


              }

            else if(info_number == 2)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tBurpees";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tBeloved by high school sports coaches everywhere, this classic move involves your whole body." << endl << endl;
              cout << "\t\t\t1.Stand with feet hip-width apart and make sure your core is engaged." << endl << endl;
              cout << "\t\t\t2.Jump up, then immediately drop to the floor, placing hands on the floor\n"
                   << "\t\t\tand shooting feet back so you’re in a high plank position." << endl << endl;
              cout << "\t\t\t3. Do a push-up." << endl << endl;
              cout << "\t\t\t4. Quickly jump feet back to hands and, in one movement, stand and jump up.\n";
              cout << "\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }



              }
            else if(info_number == 3)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tJumping Jacks";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tWe are assuming you did jumping jacks in elementary school PE,\n"
                   << "\t\t\tbut on the off chance you did not, here is a refresher:" << endl << endl;
              cout << "\t\t\t1.Stand with feet together, arms relaxed at your sides, and abs engaged.\n" << endl << endl;
              cout << "\t\t\t2.Jump legs apart and bring arms out, first to a T shape and then overhead, clapping at the top." << endl << endl;
              cout << "\t\t\t3.Keep knees bent as you jump feet back together and bring arms down." << endl << endl;
              cout << "\t\t\t4.Repeat as quickly as possible.\n";
              cout << "\t\t\t---------------------------------------" << endl << endl;
                cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }

              }
            else if(info_number == 4)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tIndoor Cycling";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tIndoor cycling bikes provide low impact, high intensity workouts.For a cycling workout,"<<endl<<endl;
              cout << "\t\t\t1.Start with 20 minutes at a moderate intensity level.\n"
                   << "\t\t\tThis will likely be enough to break a sweat" <<endl<<endl;
              cout << "\t\t\t2.But if you want more, play around with more resistance or a longer duration." << endl << endl;
              cout << "\t\t\t---------------------------------------" << endl << endl;
                cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }


              }
            else if(info_number == 5)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tSprint";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tYou do not have to be an Olympian to do this quick cardio exercise.\n"
                   << "\t\t\tPlus, sprint training might help improve your overall fitness in a shorter period of time." << endl << endl;
              cout << "\t\t\t1.Warm up with something basic (like one of the moves on this list) for 5 to 10 minutes.\n"<< endl << endl;
              cout << "\t\t\t2.Start in a runners lunge position." << endl << endl;
              cout << "\t\t\t3.Launch into a sprint by pushing off your feet and strongly out of calves and thighs." << endl << endl;
              cout << "\t\t\t4.Run as fast as you can (the idea is to push yourself as hard as you can).\n";
              cout << "\t\t\t5.Take as long a break as feels good." << endl << endl;
              cout << "\t\t\t6.Repeat (you will find 3 or 4 hard sprints will be more than enough to get you sweating)." << endl << endl;
              cout << "\t\t\t---------------------------------------" << endl << endl;
                cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }


              }
            else if(info_number == 6)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tJump ropes";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tThere is a reason boxers start their workouts by jumping rope: It is a killer endurance exercise! " << endl << endl;
              cout << "\t\t\t1.Stand with your shoulders relaxed and your feet hip-width apart.\n"<< endl << endl;
              cout << "\t\t\t2.Keep your elbows close to your rib cage and hold your rope without choking up." << endl << endl;
              cout << "\t\t\t3.Keep your jump low (this isn’t box jumping) and remind yourself to be light,\n"
                   << "\t\t\t  allowing your ankles, knees, and hips to flex on each landing." << endl << endl;
              cout << "\t\t\t4.Try jumping for 5 minutes at a time, resting for a minute or two,\n"
                   << "\t\t\t  and then jumping for another 5 minutes.\n";
              cout << "\t\t\t---------------------------------------" << endl << endl;
                cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }

              }


            else if(info_number == 7)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tSwimming";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tYou do not have to be Michael Phelps to get a good pool workout.\n"
                   << "\t\t\tWhether you are doing laps or just treading water (which is totally considered cardio too!),\n"
                   << "\t\t\tan aquatic cardio sesh is easy on your joints and works a ton of muscles in your body.." << endl << endl;
              cout << "\t\t\tStrong swimmer? Do laps for 20 minutes at a time, taking breaks in between." << endl << endl;
              cout << "\t\t\tNew to the pool? Try a couple of laps, and then take 2-minute breaks." << endl << endl;
              cout << "\t\t\t---------------------------------------" << endl << endl;
                cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }


              }
            else if(info_number == 8)
              {
             system("cls");
              cout << "\n\n\n\n\n\t\t\tBoxing";
              cout << "\n\t\t\t---------------------------------------" << endl << endl;
              cout << "\t\t\tWhether you are shadowboxing at home (punching an invisible enemy, perhaps) or getting into the\n"
                   << "\t\t\tring in a boxing gym, this high intensity cardio exercise can transform your body.\n" << endl ;
              cout << "\t\t\tA boxing workout program will teach you proper form for stances and punches.\n"
                   << "\t\t\tBoxing typically also involves a jump rope warmup, so get ready to be a little out of breath." << endl << endl;
              cout << "\t\t\t---------------------------------------" << endl << endl;
                cout << "\t\t\tEnter 0 to go back or any other key to exit:        " ;
              cin >> x;

              if( x == 0 )
              {    system("cls");
                   goto info;
              }
              else
              {    system("cls");
                   exit(0);
              }

              }
            else
            {
                system("cls");
                  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
                  cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
                  getch();
                  system("cls");
                  goto info;

            }



      return 0;

              }