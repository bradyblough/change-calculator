# change-calculator
This program calculates change using the least number of bills and coins possible. It begins by asking the user to input a value that they'd like to receive as change. Next, it attemps to divide the amount by the various $USD currency values and collects the lefover amount from each division until it reaches the end of the program.

Example:

If the user enters $150.10, then the program will first divide the user-entered amount by 100 using integer division. That leaves $50.10 as the leftover amount (saved in the variable 'left_over.'). Second, the program will divide $50.10 by 50, which leaves a remainder of .10. Next, the program will divide .10 by 20 but because .10 is smaller, 0 will be returned. This will continue happening for each currency value larger than .10 until the dime is reached, as .10 / .10 is equal to 1. Therefore, the program will return: (1) $100 bill, (1) $50 bill, and (1) dime.
