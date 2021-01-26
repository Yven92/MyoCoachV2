# 0113-MyoCoach-DIY :<br>UI Programming Manual

This desktop application allows the visualization of raw EMG signals and allows users to train by observing the raw signals or through a game which is a clone inspired by (add the right github) [FlapPyBird](https://github.com/sourabhv/FlapPyBird) with a different game system. We added another game inspired by the well known [Snake]() but we have to improve it, it is not already working with the EMG.

The MyoCoach application is based on python3 with PyQt5. To set up the Raspberry Pi, you will need to use a screen, a keyboard and a mouth for the first initialisation. 
For further use, you can download [VNC Viewer](https://www.realvnc.com/fr/connect/download/viewer/) that allows you to use your computer screen to work on the Raspberry.

## Installation

Tested under MacOS and Linux.

**:one: Installing the dependencies**

Install the following packages :
* [Python](https://www.python.org/downloads) (3.6.x or higher) ;
* [pip](https://techworm.net/programming/install-pip-python-mac-windows-linux/) (20.0.x or later);

Install `virtualenv` :
```
pip install virtualenv
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

**:Four: Launch the RaspAP application**

After the reboot at the end of the installation the wireless network will be configured as an access point as follows:

IP address: 10.3.141.1
Username: admin
Password: secret
DHCP range: 10.3.141.50 to 10.3.141.255
SSID: raspi-webgui
Password: ChangeMe

To launch the application, open your browser and type the IP address. You will reach the page where you can tune your hotspot and add funcitonnalities.

