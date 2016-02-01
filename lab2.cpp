/*
 * Name        : lab_2.cpp
 * Author      : Marie Issel
 * Description : Using Arithmetic to finish the functions MakeChange() and
 *               LaunchHumanCannonball()
 * Sources     :
 */

// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used
#include "lab2.h"
int quarters;
int dimes;
int nickles;
int pennies;

/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters,
 * dimes, nickels, and pennies that would be given as change.
 * @param int initial_value - The amount of change to be broken down in pennies.
 * @param int quarters  - The number of quarters that come out of initial_value
 * @param int dimes - The number of dimes that come out of initial_value,
 *                    after quarters have been taken out
 * @param int nickels - The number of nickels that come out of initial_value,
 *                      after quarters and dimes have been taken out
 * @param int pennies - The number of pennies that come out of initial_value,
 *                      after quarters, dimes, and nickels have been taken out
 */
void MakeChange(int initial_value, int quarters, int dimes, int nickels,
                int pennies) 
{
  cout << "Original number of cents: "; 
  cin >> initial_value;
  quarters = initial_value/25;
  initial_value = initial_value % 25;
  dimes = initial_value/10; 
  initial_value = initial_value % 10;
  nickels = initial_value/5; 
  initial_value = initial_value % 5;
  pennies = initial_value;
  cout << "Quarters: " << quarters << ", Dimes: " << dimes << ", Nickles: " << nickles << ", Pennies: " << pennies;
  
}

/*
 * Computes the horizontal distance traveled by a human cannonball given an
 * initial velocity and launch angle. Simplified -- does not account for many
 * factors that affect projectile motion.
 * @param double initial_velocity - Represents the initial velocity of the
 *                                  human cannonball in meters/second
 * @param double launch_angle -  Represents the launch angle of the human
 *                               cannonball in degrees
 * @return double  - Represents the horizontal distance the human cannonball
 *                   will travel
 */
double LaunchHumanCannonball(double initial_velocity, double launch_angle) {
  
float radian_angle;
float x_distance;
float x_velocity;
float y_velocity;
float flight_time;



  // (1) Convert launch_angle from degrees to radians
  //     [radian_angle = launch_angle * (kPI/180)]
radian_angle = launch_angle * (kPI/180);

  // (2) Compute final horizontal/x velocity
  //     [x_velocity = initial_velocity * cos(radian_angle)]
x_velocity = initial_velocity * cos(radian_angle);

  // (3) Compute final vertical/y velocity
  //     [y_velocity = initial_velocity * sin(radian_angle) * -1]
y_velocity = initial_velocity * sin(radian_angle) * -1;

  // (4) Compute time of flight
  //     [flight_time = (y_velocity) * 2 / -9.8]
flight_time = (y_velocity) * 2 / -9.8;

  // (5) Compute horizontal/x distance traveled
  //     [x_distance = x_velocity * flight_time]
x_distance = x_velocity * flight_time;

  // (6) Return horizontal/x distance
return x_distance;
}

int main ()

{
  float velo;
  float angl;
  float dist;
  
  
  MakeChange(0, 0, 0, 0, 0);
  cout << endl << endl;
  cout << "Velocity: "; 
  cin >> velo;
  cout << "Angle: "; 
  cin >> angl; 
  dist = LaunchHumanCannonball(velo, angl);
  cout << "Distance travelled: " << dist<< endl;
}