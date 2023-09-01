#Write a Python program to get the command-line arguments

import sys

print ("this is the name of the script  ", sys.argv[0])
print ("Number of arguments:  ", len(sys.argv))
print ("Argument list: ", str(sys.argv))