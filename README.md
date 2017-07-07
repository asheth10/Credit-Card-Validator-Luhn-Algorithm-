# Credit-Card-Validator-Luhn-Algorithm-
This program validates a input credit card using Luhn Algorithm

The program takes the users' input as a string. The string is first reversed and the characters are read one at a time. Each character is converted to an integer type and the following operations are performed:
1) Every second number is doubled. (First number is the check digit)
2) If the doubled numbers are two-digits, the sum of the digits is taken.
3) The sum of the remaining numbers(which aren't doubled) and the numbers received from Step 1 and 2 is taken.

If the final sum is exactly divisible by 10, the input credit card is valid, else, it is not. The program outputs the corresponding message.
