# Color Analysis

## Description

**version 1.0**

My program will ask the user to pick colors from a provided list, and it will evaluate if the colors can 
be differentiated by people with Tritanopia and Deuteranopia.


## Developer

Zaria Gentry

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Please enter your name: 
Zaria Gentry
Hello, Zaria Gentry! Welcome to my Color Vision Project.
Would you like to read the background information on my project? (y/n): y
--------------------------------------------------------------
The two types of color blindnesses that my project will cover are Tritanopia and Deuteranopia. Tritanopia is a blue-yellow color vision deficiancy. People with this color blindness tend to confuse blue from green, purple from red, and yellow from pink. Deuteranopia is a red-green color vision deficiency. They tend to confuse green and red, blue and purple, orange and yellow-green, green and brown or tan, pink and gray.
In my code I will help those with Tritanopia or Deuteranopia color blindnesses know if the colors they pick from a provided list can be percieved.

Keep in mind that I am very new to coding so my program might have a few mistakes (if it says it does not work once in the output, go with that answer). If you'd like to give me advice, please feel free to do so.
--------------------------------------------------------------
Pick 2 colors from the list. Please do not pick the same color twice. (Correct Example: First: 2  Second: 9)(Incorrect Example: First: 2  Second: 2):
1. Black 
2. White 
3. Red 
4. Brown 
5. Blue 
6. Yellow 
7. Gray 
8. Orange 
9. Purple 
10. Green 
11. Teal 
12. Pink

First: 2
Second: 1

This color combo would work great for people with Tritanopia. 
This color combo would work great for people with Deuteranopia.

Would you like to input another set of colors to compare? (y/n): n

Thank you for using my program!!!
Would you like to rate it? (y/n): y
Rate 1-5: 4
I am glad you enjoyed my program!! Thank you for your time and your positive rating :)
```