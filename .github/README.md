# PhotoFlare

[![DebianBadge](https://badges.debian.net/badges/debian/testing/photoflare/version.svg)](https://packages.debian.org/testing/photoflare)
[![GitHub release](https://img.shields.io/badge/Release-1.5.6.1-green.svg)](https://github.com/PhotoFlare/photoflare/releases)
[![License: GPL v3+](https://img.shields.io/badge/License-GPL-yellowgreen.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Build Status](https://travis-ci.org/PhotoFlare/photoflare.svg?branch=master)](https://travis-ci.org/PhotoFlare/photoflare)
[![Snap Status](https://build.snapcraft.io/badge/PhotoFlare/photoflare.svg)](https://build.snapcraft.io/user/PhotoFlare/photoflare)

Simple but powerful Cross Platform image editor originally inspired by the PhotoFiltre image editor on Windows. Created with C++ 17, Qt Framework and the Graphicsmagick library.

<img src="http://photoflare.io/wp-content/uploads/2018/03/CrossPlatform2.png">

## Documentation
Information on features and using the project will be <a href="http://photoflare.io/documentation/">available here</a>. At the moment its a work in progress.

## Building

### Dependencies
- libgraphicsmagick++-dev
- qt5-default (Ubuntu only)
- G++ on Linux, MinGW on Windows or Clang on MacOSX

Compile using either by opening the .pro file with Qt Creator or use qmake passing the .pro file as a parameter. Full instructions for each platform <a href="http://photoflare.io/contributing/building-the-source/">available here</a>

## Running

### Dependencies
- libc6
- libgraphicsmagick++-q16-12
- libqt5gui5
- libqt5core5a
- libqt5widgets5
- libqt5printsupport5
- qt5-image-formats-plugins (Optional - Extra file format support)

## Translations
Languages currently available:

- English
- French
- Dutsch
- German
- Chinese (TW)

If you would like to add to this list then get in touch. Instructions on adding a translation is <a href="http://photoflare.io/contributing/translations/">available here</a>
