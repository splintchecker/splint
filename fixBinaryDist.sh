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
mkdir src
ln -s ../preBuilt/splint src/splint
