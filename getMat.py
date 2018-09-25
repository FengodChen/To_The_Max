#! /usr/bin/python3.6

from random import randint

num = 5
inner = 10

for i in range(num):
    for j in range(num):
        print(str(randint(-inner, inner)) + "\t"),
    print("")
