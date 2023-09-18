#!/bin/bash

#Compile all the .c files in the current directory into object files
gcc -c -w -fpic *c

#Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *o

#Remove the object files
rm -f *.o

echo "New dynamic library liball.so has been created sucessfully"
