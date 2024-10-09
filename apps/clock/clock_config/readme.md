---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ653 family
title: Clock configuration
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Clock configuration

This example application shows how to configure the clock system to run the device at maximum frequency. It also outputs a prescaled clock signal on a GPIO pin for measurement and verification.

## Description

Clock system generates and distributes the clock for the processor and peripherals. This example application shows how to use the clock manager to configure the device to run at the max possible speed. A prescaled clock signal is routed to GPIO pin to measure the frequency and accuracy of the internal device clock.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/clock/clock_config** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
|WBZ653_curiosity.X| MPLABX project for [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|WBZ653_curiosity.X|[PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


### Setting up [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)
- Connect pin RD7 (Pin 7 of Xpro Header) to an oscilloscope to monitor the PORT
- Connect the Debug USB port on the board to the computer using a micro USB cable


## Running the Application

1. Build and Program the application using its IDE
2. Observe a clock of 4 MHz on the clock output pin
3. LED should be blinking continuously

Refer below table for LED name

| Board | LED Name |
|-----|-----|
|[PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)| Red LED|

