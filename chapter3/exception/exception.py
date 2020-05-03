#!/usr/bin/env python

var = input("Enter the number :> ")
try:
    result = 1.0 / float(var)
    print("Result", result)

except:
    print("Unable to divide")
