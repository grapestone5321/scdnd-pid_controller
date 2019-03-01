# Write up
### CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
## Project Introduction
In this project you'll revisit the lake race track from the Behavioral Cloning Project. This time, however, you'll implement a PID controller in C++ to maneuver the vehicle around the track!

The simulator will provide you the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle.

One more thing. The speed limit has been increased from 30 mph to 100 mph. Get ready to channel your inner Vin Diesel and try to drive SAFELY as fast as possible! NOTE: you don't have to meet a minimum speed to pass.


#### Project Instructions
You can solve this project using the workspaces we have prepared for you here or you can clone/fork the project's template files from the project repository if you want to install all on your local machine. Have a look at the rubric as well!

Build a PID controller and tune the PID hyperparameters by applying the general processing flow as described in the previous lessons.

Test your solution on the simulator!
When the vehicle is able to drive successfully around the track, submit! Remember to include a file addressing the reflection portion of the project in .txt, .md, .html, or .pdf format.
Try to see how fast you get the vehicle to SAFELY go!

## Reflection

#### Describe the effect each of the P, I, D components had in your implementation.
Student describes the effect of the P, I, D component of the PID algorithm in their implementation. Is it what you expected?

Visual aids are encouraged, i.e. record of a small video of the car in the simulator and describe what each component is set to.

#### Describe how the final hyperparameters were chosen.
Student discusses how they chose the final hyperparameters (P, I, D coefficients). This could be have been done through manual tuning, twiddle, SGD, or something else, or a combination!

## Compilation

#### Your code should compile.
Code must compile without errors with cmake and make.

Given that we've made CMakeLists.txt as general as possible, it's recommend that you do not change it unless you can guarantee that your changes will still compile on any platform.

## Implementation

#### The PID procedure follows what was taught in the lessons.
It's encouraged to be creative, particularly around hyperparameter tuning/optimization. However, the base algorithm should follow what's presented in the lessons.

## Simulation

#### The vehicle must successfully drive a lap around the track.

No tire may leave the drivable portion of the track surface. The car may not pop up onto ledges or roll over any surfaces that would otherwise be considered unsafe (if humans were in the vehicle).







