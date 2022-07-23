#!/usr/bin/python3
import sys

def determine_factor(number):
    i = 2
    while i <= number:
        if number % i == 0:
            return (number // i, i)
        i += 1
    return (None, None)


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("USAGE: factors <file>")
        sys.exit()

    file = open(sys.argv[1], 'r')
    lines = file.readlines()

    for line in lines:
        number = int(line)
        x, y = determine_factor(number)
        if x and y:
            print("{}={}*{}".format(number, x, y)) 
