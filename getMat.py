#! /usr/bin/python

from random import randint

f = open("input.txt", "w")

num = 5
inner = 10

f.write(str(num) + "\n");

for i in range(num):
    for j in range(num):
        f.write(str(randint(-inner, inner)) + " "),
    f.write("\n")

f.close()
