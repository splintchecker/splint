#!/bin/sh

#This script is intended to be called in make dist
#THis is intended to be run in the distribution directory...

pwd
#echo doing bash
#bash

#Need to do this so modifications to the destination directory won't effect
#the real directory 
rm Makefile.am
rm configure.ac 
cp  Makefile.binary.am Makefile.am
cp  configure.binary.ac configure.ac
cp configure.binary configure
cp Makefile.binary.in Makefile.in

#run these if possible...
autoconf
automake
mkdir src || echo "COULD NOT MAKE src tar ball may be incorrect"
echo "Created this file because some versions of tar are too simple include this directory without it"  > src/dummy

# Need to do this in the makefile because the tar command in make dist wants to derefence symlinks
#ln -s ../bin/splint src/splint
