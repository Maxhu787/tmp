#!/bin/bash

initial_ns=11000
increment=16
iterations=125

orange='\e[34m'
white='\e[97m'
reset='\033[0m'

for ((i=0; i<$iterations; i++))
do
  new_ns=$((initial_ns + i * increment))

  sed -i "s/^[0-9]\{4,\} *Ns$/$new_ns         Ns/" ./HPL.dat  
  echo -e "${white}Current Ns value: ${orange}$new_ns${reset}"
  hpl-judge 2>&1 | grep -E "Scoreboard|HPL\.txt"

done
