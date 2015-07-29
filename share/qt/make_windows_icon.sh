#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/Tamcoin.png
ICON_DST=../../src/qt/res/icons/Tamcoin.ico
convert ${ICON_SRC} -resize 16x16 Tamcoin-16.png
convert ${ICON_SRC} -resize 32x32 Tamcoin-32.png
convert ${ICON_SRC} -resize 48x48 Tamcoin-48.png
convert Tamcoin-48.png Tamcoin-32.png Tamcoin-16.png ${ICON_DST}

