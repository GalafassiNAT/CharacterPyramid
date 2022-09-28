# Character Pyramid

User says the width of the pyramid, and the program prints based on that.
Self Challenge. Making a Characters Pyramid **without nested loops.**

We need to make a flag variable in case of the width being even or odd, let's call it "pi", it starts with value 0, and, if it's odd, its value will turn into 1.

Now we need to make a two variables (a1 and a2), one for the left side of the middle of the pyramid, and one for the right side, both receives the half of the width + pi, and if the width is even, the right side increases.

-----

Then we do a loop (for), where, if i position is smaller than a1 or bigger than a2, the program will print a blankspace, otherwise, prints a "X". 

Now it checks if 'i' position is the same as the width value, in case of a j variable being the same as the half of the width + pi, then the loop will break, if not, breaks a line, set i position to 0, decreases a1, increases a2 and increases j.

## About a1 and a2:

Since the characters that make part of the pyramid body will need to increase and being centralized, we need to the left side to decrease, so that i < a1, doesn't happen, printing "X", and we need to the right side to increase, so i > a2 will not be true, and then it will print "X" too.
