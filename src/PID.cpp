#include <iostream>
#include <limits>
#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) 
{
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  p_error = numeric_limits<double>::max();  
  i_error = 0.;
  d_error = 0.;
}
 
void PID::UpdateError(double cte) 
{
  if (p_error == numeric_limits<double>::max())
    p_error = cte;
    d_error = cte - p_error; 
    p_error = cte;
    i_error += cte; 
}

double PID::TotalError() 
{
  return Kp * p_error + Kd * d_error + Ki * i_error;
}

