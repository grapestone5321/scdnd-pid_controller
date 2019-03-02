# Write up
### CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program



[//]: # (Image References)

[image1]: ./images/pid_1.jpg
[image2]: ./images/pid_2.jpg


---
## Project Introduction
In this project you'll revisit the lake race track from the Behavioral Cloning Project. This time, however, you'll implement a PID controller in C++ to maneuver the vehicle around the track! The simulator will provide you the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle. One more thing. The speed limit has been increased from 30 mph to 100 mph. Get ready to channel your inner Vin Diesel and try to drive SAFELY as fast as possible! NOTE: you don't have to meet a minimum speed to pass.


#### Instructions:
You can solve this project using the workspaces we have prepared for you here or you can clone/fork the project's template files from the project repository if you want to install all on your local machine. Have a look at the rubric as well! Build a PID controller and tune the PID hyperparameters by applying the general processing flow as described in the previous lessons. Test your solution on the simulator! When the vehicle is able to drive successfully around the track, submit! Remember to include a file addressing the reflection portion of the project in .txt, .md, .html, or .pdf format. Try to see how fast you get the vehicle to SAFELY go!


![alt text][image1]


## Reflection
#### The effect each of the P, I, D components: 

- The effect of the P component

The cross track error, cte is the current y position of the robot (the reference is a horizontal line) along the x-axis. To get the steering value the tau parameter is multiplied with the cte. Then the move method, which causes the robot to move based on the steer and speed values, is called. The x and y coordinates are added to the respective lists and then returned them at the end.

By turning, the steering value is inversely proportional to the y value. A parameter tau is set the response strength of the proportional controller. The car turns towards the x axis, drives in that direction, overshoots, turns around , and drives back.



- The effect of the D component

The prev_cte variable is assigned to the previous CTE and diff_cte, the difference between the current CTE and previous CTE. Then it is put with the new tau_d parameter to calculate the new steering value, - tau_d * diff_cte.


There is a way to void the overshoot. Drivivg an osillating car is no fun. In PD-control the steering alpha is not just related to CTE by virtue of the gain parameter tau p, but also to the temporal devivative of the CTE. What this means that the car has turned enough to reduce the CTE, it won't just go shootong for the x axis, but it will notice that it's already reducing the error. The error is becoming smaller over time.


- The effect of the I component

With the integral term initially int_cte is set to 0 and then the current cte term is added to the count int_cte += cte. Then the steering value, - tau_i * int_cte with the new tau_i parameter, is updated.


If you drive a car and your normal steering mode leads you to a trajectory far away from the goal. Then you notice over a long period of time you can't get closer. That's measured by the integral or the sum of the CTE over time. A new controller is equally proportional to the differential of the CTE, but it's also proportional to what's called the integral or the sum of all the CTE you ever observed. If we have a constant CTE and the sum will increace by it for each time unit, it'll become larger, and eventually it'll correct the robot's motion.




#### The final hyperparameters: 
The final hyperparameters (P, I, D coefficients) are chosen: Kp = 0.12 Ki = 0.005 Kd = 1.8. This have been done through manual tuning.

The effect of the P, I, D component of the PID algorithm in the implementation is what I expected. The vehicle successfully drives a lap around the track. No tire leaves the drivable portion of the track surface. The car does not pop up onto ledges or roll over any surfaces that would otherwise be considered unsafe (if humans were in the vehicle).



![alt text][image2]



