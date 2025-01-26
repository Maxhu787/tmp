#!/bin/bash

orange='\e[34m'
white='\e[97m'
reset='\033[0m'

values_pfact_rfact=(0 1 2)
values_bcast=(0 1 2 3 4 5)

for pfact in "${values_pfact_rfact[@]}"
do
  for rfact in "${values_pfact_rfact[@]}"
  do
    for bcast in "${values_bcast[@]}"
    do
      sed -i.bak \
        -e "s/^[0-3]\s\+PFACTs.*$/$pfact            PFACTs (0=left, 1=Crout, 2=Right)/" \
        -e "s/^[0-3]\s\+RFACTs.*$/$rfact            RFACTs (0=left, 1=Crout, 2=Right)/" \
        -e "s/^[0-3]\s\+BCASTs.*$/$bcast            BCASTs (0=1rg,1=1rM,2=2rg,3=2rM,4=Lng,5=LnM)/" ./HPL.dat
      
      echo -e "${white}Current combination: PFACTs=${orange}$pfact${white}, RFACTs=${orange}$rfact${white}, BCASTs=${orange}$bcast${reset}"
      
      hpl-judge 2>&1 | grep -E "Scoreboard|HPL\.txt"
    done
  done
done
