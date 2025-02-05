# 0113-MyoCoach-DIY :<br>UI Programming Manual

This desktop application allows the visualization of raw EMG signals and allows users to train by observing the raw signals or through a game which is a clone inspired by (add the right github) [FlapPyBird](https://github.com/sourabhv/FlapPyBird) with a different game system. We added another game inspired by the well known [Snake]() but we have to improve it, it is not already working with the EMG.

The MyoCoach application is based on python3 with PyQt5. To set up the Raspberry Pi, you will need to use a screen, a keyboard and a mouth for the first initialisation. 
For further use, you can download [VNC Viewer](https://www.realvnc.com/fr/connect/download/viewer/) that allows you to use your computer screen to work on the Raspberry.

## Installation

The raspberry card needs a **SD card flashed by an operating system**. Several operating systems are available but for this project it will be necessary to use the **raspberry pi OS** ! And you can  take the aspberry pi OS  with the desktop option if your are not familiar to linux sytem. it will be preferable to use a class 10 SD card for more speed and fluidity of the operating system of the raspberry card.
The photo below is a raspberry pi 4 model B but you can use a lower model, either raspberry pi 3 model B or B+ will do ...
A powerful tutorial  is available [here](https://www.raspberrypi.org/documentation/installation/installing-images/)

**:one: Installing the dependencies**

Install the following packages :
* [Python](https://www.python.org/downloads) (3.6.x or higher) ;
* [pip](https://techworm.net/programming/install-pip-python-mac-windows-linux/) (20.0.x or later);

Install `virtualenv` :
```
pip install virtualenv
```
Install `flask` :
```
sudo apt-get install python3-flask
```
**:two: Update the system**

It is necessary to have the latest version of Raspbian to go through the following steps :
```
sudo apt-get update
sudo apt-get dist-upgrade
sudo reboot
```
Then, you will have to chose the WIFI country in Localisation Opitons: ```sudo raspi-config```.

**:three: Installing RaspAP**

Open a terminal and launch the Quick installer :

```
curl -sL https://install.raspap.com | bash
```
If you want to do a manual installation follow the link here: https://docs.raspap.com/manual/.

**:four: Launch the RaspAP application**

After the reboot at the end of the installation the wireless network will be configured as an access point as follows:

IP address: 10.3.141.1
Username: admin
Password: secret
DHCP range: 10.3.141.50 to 10.3.141.255
SSID: raspi-webgui
Password: ChangeMe

To launch the application, open your browser and type the IP address. You will reach the page where you can tune your hotspot and add funcitonnalities.

**:five: Automatic launch of the app**

The hotpsot will be automatically launch after the boot of the Raspberry but the application will not start alone. To do so, modify this file : 
````
sudo nano /etc/profile
````
Add this line at the end of the file : ```python your_path/app.py```. If you need to know the path where you stored the application file, go to the right directoryr and type : ```pwd```. You will obtain the complete path.
Finally, change your boot options, in Desktop/ CLI and select Console Autologin. Reboot you raspberry.

**:six: Launch of the app**

Just from a pc, a smartphone or a tablet  connects on the wifi created by the raspberry pi and type this on a navigator: **10.3.141.1:5000**. We had the idea to stick a flashcode generated freely online with this address on the MyoCoach box, in order to launch the application more easily.
