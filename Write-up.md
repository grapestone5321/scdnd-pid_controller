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
#### Simulation: 

The vehicle successfully drives a lap around the track. No tire leaves the drivable portion of the track surface. The car does not pop up onto ledges or roll over any surfaces that would otherwise be considered unsafe (if humans were in the vehicle).


#### The effect each of the P, I, D components: 
The effect of the P, I, D component of the PID algorithm in the implementation. Is it what you expected? Visual aids are encouraged, i.e. record of a small video of the car in the simulator and describe what each component is set to.

- The effect of the P component

The cross track error, cte is the current y position of the robot (our reference is a horizontal line) along the x-axis. To get the steering value we multiply the tau parameter with the cte. We then call the move method which causes the robot to move based on the steer and speed values. Add the x and y coordinates to the respective lists and then return them at the end.

- The effect of the D component

This is very similar to the P controller. We've added the prev_cte variable which is assigned to the previous CTE and diff_cte, the difference between the current CTE and previous CTE. We then put it all together with the new tau_d parameter to calculate the new steering value, -tau_p * cte - tau_d * diff_cte.

- The effect of the I component

With the integral term we're keeping track of all the previous CTEs, initially we set int_cte to 0 and then add the current cte term to the count int_cte += cte. Finally we update the steering value, -tau_p * cte - tau_d * diff_cte - tau_i * int_cte with the new tau_i parameter.


#### The final hyperparameters: 
The final hyperparameters (P, I, D coefficients) are chosen through manual tuning. 

This could be have been done through manual tuning, twiddle, SGD, or something else, or a combination!

