# 0113-MyoCoach-DIY :<br>User Manual

![myocoach](../assets/myocoach.png)

---

The MyoCoach with USB connection is intended for health care professional and users of upper limb prostheses. Its functionalities allow to :

* Measure muscle potential using myoelectric sensors
* Defining the optimum electrode position
* Adjusting the myoelectric electrodes
* Exercise in muscle contraction and coordination

## Prerequisites and functionalities
 * 1 Computer with the MyoCoach application
 * 1 MyoCoach box :one:
 * 1 USB cable (Arduino) :two:
 * 2 Ottobock electrodes (Ref 13E202) :three:
 * 2 Electrode cables :four:
 * 2 Electrode holders :five:
 * 1 Velcro strap :six:
 * 1 Flat screwdriver :seven:
 * 1 pencil (watercolour type)

![materiel_pre-requis](./assets/materiel_pre-requis.png)

The application and the MyoCoach box allow the user to test his ability to control a myoelectric prosthesis. These tests are carried out on a computer and are close to real-life conditions.

The video game integrated into the application allows fun muscle training. In addition, it accelerates the learning of the dissociation of the different muscle groups.

Two 13E202 electrodes connected to the MyoCoach box receive the user's myoelectric muscle signals. These are then sent to the computer to be visualised in the form of a gauge or in the form of a graph (Widget Signal).

The MyoCoach is switched on by plugging the box into the USB port of the computer. Then the user must connect the MyoCoach application to the box (Arduino board).

To switch off the MyoCoach, simply disconnect the USB plug from the computer.

## safety instructions
> :warning: Make sure that no solid or liquid particles can get inside the housing.

> :warning: Do not expose the unit to intensive fumes or dust, mechanical vibrations, shocks or excessive temperatures.

> :warning: Avoid using the MyoCoach near sources of major electrical and magnetic interference (transformers or transmitters for example).

> :warning: Respect pauses during use, as muscular fatigue produces irregular results which can lead to the electrodes being adjusted too sensitively.

> :warning: Make sure that the contact surface of the electrodes is applied to healthy skin. If significant malfunctions are detected, the position of the electrodes should be checked and modified if necessary. Refer to the paragraph on electrode placement for more information.

> :warning: The use of a battery charger on the laptop will in most cases interfere with the operation of the electrodes, i.e. the value without any electrode activity is not zero. It is recommended to disconnect the mains power supply during myoelectric data recording and to run the laptop on battery power.

## Application overview
To launch the MyoCoach application, refer to the [ui-programming-manual](./ui-programming-manual.md).

Here is a description of the MyoCoach interface.

![general_view](./assets/recording2.gif)

### Menu : Vizualisation
This Menu allows you to visualize in real time the acquisition of EMG signals that will be use for the application.

* :one: Click on the **Vizualisation** Menu, both signals will be directly displayed.

![visualisation](./assets/viz.PNG)
* :two: You can visualize in full screen each graph.

> :bulb: If during the use of the Vizualisation Menu, you encounter a problem (absence of EMG signals, blocking of the menus...), remember to reload the web page or go back to the main menu and do the previous steps again.

### Menu : Gaming
![gaming_page](./assets/recording.gif)
In this menu you can choose between the different games.
As you can see, the score is displayed as two gauges that represent the force deployed by the user. The threshold can be set when you reach the game page, it will determine the minimal force above which the game will react (eg: the bird going up or down, the snake going left or right).
The game play has been modified to better correspond to the use of EMG sensors but the graphics of the original game have been kept! :fire:

* **Game 1**: You reach the Snake game.
![snake](./assets/Capture1.PNG)

* A pulse from the **EMG 0** sensor that exceeds the threshold moves the snake **right**.
* A pulse from the **EMG 1** sensor that exceeds the threshold moves the snake **left**.
* The displacement of the snake is relative to the power of the pulse.


* **Game 2**: You reach the Flappy Bird game which is more difficult than the snake game
![Flappy](./assets/Capture3.PNG)

* The bird does not fall. It maintains its height when the user does not control it
* A pulse from the **EMG 0** sensor that exceeds the threshold moves the bird **upwards**.
* A pulse from the **EMG 1** sensor that exceeds the threshold moves the bird **downwards**.
* The displacement of the bird is relative to the power of the pulse.


### Menu: About Us
In this menu you will find some information about our team and the background of the project.

### Menu : GitHub
This menu is a bridge to the GitHub webpage of the project.

## Electrodes placement protocol
The primary function of the MyoCoach is to optimise electrode placement and find the right gain setting.

For this protocol, we use Ottobock electrodes (Ref 13E202).

This protocol is the result of a scientific publication from the University of Salford (UK).

> :bulb: Chadwell Alix, Kenney Laurence, Thies Sibylle, Galpin Adam, Head John (2016) The Reality of Myoelectric Prostheses: Understanding What Makes These Devices Difficult for Some Users to Control [url](https://www.frontiersin.org/articles/10.3389/fnbot.2016.00007/full)

This test protocol allows the placement of two electrodes which are useful for the use of a myoelectric prosthesis. We use two groups of wrist muscles to control the prosthesis:

* the **flexor muscles** of the wrist to **close the hand** of the prosthesis (1)
* the **extensor muscles** of the wrist to **open the hand** of the prosthesis (2)

![muscle_flechisseur_et_extenseur](./assets/muscle_flechisseur_et_extenseur.png)

* :one: Equip an electrode with a pin header strip to make an adapter with the MyoCoach connector system.

![adpatateur_electrode](./assets/adpatateur_electrode.png)

* :two: Adjust the electrode gain to a medium level between 3-4

To access the gain adjustment potentiometer of the Ottobock 13E202 sensor, it is not necessary to remove the sensor from the armband! Simply move it as shown below.

![acces_potentiometre](./assets/acces_potentiometre.png)

* :three: Connect this electrode to the EMG 0 connector of the MyoCoach housing.

![connecteur_boitier](./assets/connecteur_boitier.png)

* :four: Connect the MyoCoach box to power supply using a power cable connected to an electrical outlet.

* :five: Launch the MyoCoach application by scanning the flashcode, or enter the IP address of the hotspot with its port. Go to the Vizualisation Menu.
* :six: Hold the electrode on the user's muscle.

![maintien_electrode](./assets/maintien_electrode.png)

An EMG electrode must be placed along and in the middle of the muscle fibre.

![myo_placement_muscle](./assets/myo_placement_muscle.png)

* :seven: 7 Ask the user to repeatedly and regularly contract the muscle concerned by the electrode at a comfortable level, without too much muscle intensity. Note the level of the signal obtained.

![contraction_muscle_extenseur](./assets/contraction_muscle_extenseur.png)

![contraction_muscle_flechisseur](./assets/contraction_muscle_flechisseur.png)

* :eight: Then move the electrode in the 4 directions (up, down, left and right) from the starting position. The movement should be about half the width of the electrode (1 cm).

![deplacement_electrode](./assets/deplacement_electrode.png)

* :nine: If the signal amplitude is greater at one of the new positions, repeat step :eight:, defining this new position as the starting point.

* :keycap_ten: The position with the maximum amplitude is then marked on the user's skin with a **pencil**.

![marquage_position_electrode](./assets/marquage_position_electrode.png)


* Finally, the gain adjustment is defined so that the user can comfortably reach a signal level between 20 and 80% on the application's Signal Widget.

> :bulb: This protocol must be repeated for the second electrode.

### Connect Electrode to the box :

:one: Assemble the two electrodes on the armband. The armband offers several degrees of freedom to allow the electrodes to be positioned optimally on the user's arm. 

![vue_brassard](./assets/vue_brassard.png)

:two: Connect the electrodes to the MyoCoach housing.
* The electrode on the **outside** of the forearm must be connected to the **EMG 0** connector of the housing.
* The electrode placed **inside** the forearm must be connected to the **EMG 1** connector of the housing.

![emg_0_emg_1](./assets/emg_0_emg_1.png)

Once the electrodes have been connected and the ArmBand adjusted, the user is ready to practice using EMG sensors! :muscle:

