# Problem 1

Please design a simple calculator, prompting the user to input the following values by order: the first integer, the operator (`+`, `-`, `*` or `/`), and the second integer, seprated by the line break.

The program will determine which operation it should process, and print out the cooresponding result.

If user ask to do division and input 0 as the denominator, then the program will print out a error message to tell the user not to input 0.

If user ask to do division and the first value isn't divisible by the second one, output the cooresponding float number with 2 digits after the dot; for the other cases, print a integer result.

# Problem 2
Prompt the user to input a decimal integer N, at most 10 digits, and keep calculating the sum of each digits until the sum value has 1 digit left.

For example, if the user input $9,876,543,210$, then the progress would be: $9+8+7+6+5+4+3+2+1+0=45 \to 4+5=9$, then the result will be $9$.