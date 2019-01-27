# Music Streamer
A Winamp out plugin designed to stream the output of the player to a remote MPD server. I have done this to listen wireless music from my computer and I have used as a master diploma project.


## History
Back in 2011 there were not so may solutions to listen wireless music, or they were very epensive. What I have done is to install a [MPD](https://www.musicpd.org/) server on my router, plug a [USB sound card](https://www.ebay.com/itm/USB5-1-to-3-5mm-mic-headphone-Jack-Headset-3D-Sound-Card-Audio-Adapter-ZJ/112776500938?hash=item1a4200d6ca:g:Uz0AAOSw0ehZ-MEx:rk:2:pf:0), build and install some Kernel modules on my [ASUS WL-500](https://www.asus.com/us/Networking/WL500W/). The entire process is described [here](https://tilutza.wordpress.com/2013/04/02/how-to-setup-the-server/).

Later I have done another program (installed on the router as well) which pools the MPD server and turns on and off the Speakers attached to router. I have used an Arduino Duemilanove which comunicates thought UART port with the router. You can read more [here](https://tilutza.wordpress.com/2013/06/27/command-your-speakers-with-arduino/).


## Features
You could stream, seek, play, pause directly without lag and all this on a router with 233Mhz :)

## Building
The code is in C++ and is build using Visual Studio 2015.
