#! /bin/bash
#Author : Rahul Dabgotra
#Script is as follows
echo "Shell Scripting"
echo "Hello there"
# USER INPUT
read -p "Enter your name: " NAME
echo "Hello $NAME, nice to meet you!"
# IF-ELSE
if [ "$NAME" == "Rahul" ]
then
  echo "Your name is Rahul"
else 
  echo "Your name is NOT Rahul"
fi
# COMPARISON
NUM1=31
NUM2=5
if [ "$NUM1" -gt "$NUM2" ]
then
  echo "$NUM1 is greater than $NUM2"
else
  echo "$NUM1 is less than $NUM2"
fi
