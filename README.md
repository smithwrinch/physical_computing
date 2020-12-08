<!-- Headings -->
# Practical Computing lab Work
## Hans Smith-Wrinch

This repo contains all of the lab work I have been doing for my practical computing module for the Creative Computing MSc course.

### Contents
* [Week 1](#Week-1---the-beginning)
* [Week 2](#Week-2---sensors-and-serial-data)
* [Week 3](#Week-3---transistors)
* [Week 4](#Week-4---motors-diodes-capacitors)
* [Week 5](#Week-5---final-project-motivation)
* [Week 6](#Week-6---analog-synthesisers)
* [Week 7](#Week-7---shift-registers-and-multiplexing)
* [Week 8](#Week-8---eagle-and-arduino-nano-33)
## **Week 1 - The Beginning**
This introductory week I learned how to use Tinkercad, autodesk's online web application which simulates an arduino and other other electrical components. This gave me a fundamental understanding of the arduino microcontroller and how it works in practice.
### Lab 01
### Lab 02
### Lab 03
### Lab 04
*Create a speculative sci-fi machine using only parts from this lab.* \
https://www.tinkercad.com/things/4F22k5IbPRL-daring-bombul-crift/editel?sharecode=Xqdjl5lyryqeKdOlKy3-qbLiBkT0nU5MuHQJOTZeXyQ \
I pictured an AI sleeping. I wanted to show a sense of organicness with just LEDs so this is them illustrating a sort of robotic sleep using a cyber-equivalence of breathing. Eventually the artificial intelligence has a nightmare which is indicated by the red warning light. The user has to press the button to reset or calm down the AI so it can return to a deep sleep.

![week 1](week1/sleepy-ai.png)

## **Week 2 - Sensors and Serial Data**
This week I got my first look at the different sensors which were compatible for the arduino. I also revised some basic circuitry such as the effect of ohms law and serial vs parrallel.
### Lab 00
*How many leds can you hook up with a 220k resistor in serial before running out of voltage?* \
TODO \
*How many leds can you hook up with a 220k resistor in parallel before running out of voltage?* \
TODO 
### Lab 01
*Tell a short story with the serial monitor based on player input.* \
TODO 
### Lab 02
*Hook up a knob and have it change the brightness of an LED* \
https://www.tinkercad.com/things/9rm1CvY0a8d-week-2-lab-02/editel?sharecode=CBZNycEl1QY8UXv4IiIwtMK9QRfQ3l8SNbjwVh-zg4Q 

![week 2](week2/Week%202%20Lab%2002.png)

### Lab 03
*Hook up an LDR. Try making the LED change brightness depending on the light level.* \
https://www.tinkercad.com/things/bl1YzlihyOE-week-2-lab-03/editel?sharecode=J586jMNTMFPWYOX2suSdtlEVMe9ZxzMhJWeie6GQRNo 
![week 2](week2/Week%202%20Lab%2003.png)
### Lab 04
*Working in groups of 4 or 5, pick one of the sensors below from your kit. To find out more about each one google the sensor + the magic word datasheet. Also, sensor + Arduino is a useful one. Hook it up and be prepared to explain to the class how to works next week.*
Unfortunatley I was unable to find a group so I undertook this exercise on my own. I opted to investigate the LDR sensor. \
***How it works***\
TODO \
### Lab 05
*Think about how these kits could be used in the environment around your home. Invent a device relevant to your daily life using the above parts. What does it help you do? What are the possible use cases for this device? What interactions does it afford the user? Design or sketch an enclosure, and include a video of the circuit working (or a tinkercad link). Feel free to be inspired by the above readings.* \
***LDR use case*** \
![week2](week2/lab%205%20enclosure.jpg)\
Roughly sketched above, I designed a system which would allow a plant owner to control the amount of light their plant gets, automatically. This may be useful for perhaps exotic plants with particularly demmanding light requirements. It works using an ldr which would be placed upon a stick implanted in the soil/pot of the plant - much like plant support skewers. This is then discretely connected to a fake plant across the window sill. This would contain the arduino in the flower pot, along with three LEDs that act as a traffic light, giving the user feedback on the lighting situation. The top of the pot will have a motor connected through gears to the blind controls which would allow the blinds to extend and contract to fulfil the lighting needs. \
(https://www.tinkercad.com/things/aHbYxatmpxx-week-2-lab-04-05/editel?sharecode=VrQHgL7altU1XutWqtagn4WkqAs6sObAD_ULQ16YaXY)
![week 2](week2/WEEK%202%20LAB%2004-05.png)
## **Week 3 - Transistors**
This week featured some interesting reading and design philosphies, as well as introducing the NPN and PNP transistor. I particularly enjoyed the excerpt from Don Norman's everyday things and as a result I bought the book. In the excerpt he talks about the 7 stages of action which include 1 for the goal, 3 for execution (feedforward), and 3 for evaluation (feedback). I also learned about PWM - pulse width modulation - which allows a digital pin on a microcontroller to act like an analog pin. Additionally I recalled the voltage divider, something I haven't revised since school.
### LAB 01
*Use PWM to fade an LED* \
(https://www.tinkercad.com/things/dYzENKUxyr1-week3-lab01/editel?sharecode=ZElwWpRXSxYTDJ-bIHE_-Ep-NJ-2hw8jxPfI-bl5QoY) 
![week 3](week3/WEEK3-LAB01.png)
### LAB 02
*Thinking about voltage dividers: hook up the circuit in the slides with the light dependent resistor* \
(https://www.tinkercad.com/things/bujQeFxmb1b-shiny-albar-trug/editel?sharecode=v3EcAp0yGToDPvTFKFaNReMPpFgRx7l6cBa1k3r0He8) 
![week 3](week3/WEEK3-LAB02.png)
### LAB 03
*Using transistors, make a dark detecting LED (From Circuit diagram to breadboard)* \
(https://www.tinkercad.com/things/5Bvo2FaqNjF-daring-bombul/editel?sharecode=3FVSvEGSAVOD5dsviL4kEG0kaS56nmyduOB-WW32AYE) 
![week 3](week3/WEEK3-LAB03.png)
### LAB 04
*Design a system, based on what we have learned so far, which feedbacks on itself. How could interaction work within a system which is continually feeding back on itself* \
![week 3](week3/WEEK3-LAB04-%20description.jpg)
My initial thought with this task was to create something similar to a useless machine. I considered a way for such a machine to have more of a personality. Following the rough sketch above, I opeted to use an LCD screen to simulate a face. The system would feedback on itself through the use of LEDs which trigger, and are triggered by, an LDR. They would initially turn on randomly before becoming some pseudorandym function of the LDR. This face would have different states depending on how many LEDs were on, causing the death state once all were on. I find it rather amusing that this AI would cause it's own state changes providing no useful function. I would love to work on this more, especially into a practical setting. I ordered an LCD screen to attempt this in the future.\
(https://www.tinkercad.com/things/jWRfnN3gpNj-week03-lab044/editel?sharecode=TJjfGAWhcw9vuKOWW1vWT-wGze44qxYpTp3c-zSETgg) 
![week 3](week3/WEEK03-LAB044.png)
## **Week 4 - Motors, Diodes, Capacitors**
My kit finally came this week! I figured it was much more difficult to form connections in real life than on tinkercad so there was an adjustment period. In this week I learned about motors, servos and capacitive touch. I also got to read another chapter of the Design of Everyday Things, which I had bought last week. I was surprised that the motors and servos didn't need an analog pin, but instead just a digital PWM pin which I learned about in week 3. 
### LAB 01
*Hook up a servo* \
Below is an example of the code I used to make the servo work. The video includes an experiment I did for the final year project, completed many weeks later.
\
""" 
#include <Servo.h> 
int servoPin = 3; 
Servo Servo1; 
void setup() { 
   Servo1.attach(servoPin); 
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(0); 
   delay(1000); 
   // Make servo go to 90 degrees 
   Servo1.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(1000); 
}"""
![week 4](week4/lab2.mp4)
### LAB 02
*Hook up a motor* \
I initially had difficulties connecting the motor up correctly. I later realised this was due to using a MOSFET transistor as opposed to an NPN. Below you can see the motor never completely turning off. \
![week 4](week4/lab3v.mp4)
After replacing the transistor I finally got it working. \
***TODO***
### LAB 03
*Hook up an MPR121* \
This was a very fun lab. Using Adafruits 12 key capacitive touch sensor I was able to get the arduino to determine which pin was being touched. I would love to investigate this further as there are many possibilities with this device, such as creating a virtual keyboard with everyday items, or creating a sophisticated hardware-based game. \
![week 4](week4/lab4b.jpg)
![week 4](week4/lab4a.mp4)
### LAB 04
*Create a capacitive touch sensor* \
This took a great many pieces of foil from me. I experimented with quite a few different configurations but each one was very temperamental. This wasn't surprising though as all capacitive touch required was the Capense library and the arduino! Pretty cool. The video is me touching a very rudimentary piece of foil and turning an led off or on. This lab taught me how my desk light works, which also uses a more sophisticated and less temperamental form of capacitive touch. \
![week 4](week4/lab5.mp4)
## **Week 5 - Final Project Motivation**
## **Week 6 - Analog synthesisers**
## **Week 7 - Shift Registers and Multiplexing**
## **Week 8 - Eagle and Arduino Nano 33**