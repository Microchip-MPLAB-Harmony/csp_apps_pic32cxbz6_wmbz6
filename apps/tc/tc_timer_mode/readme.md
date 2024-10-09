---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ653 family
title: TC timer mode
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TC timer mode

This example shows how to use the TC module in timer mode to generate periodic interrupt.

## Description

TC channel is configured in timer mode and generates periodic interrupt. LED is toggled in the interrupt handler to indicate periodic callback.

## Downloading and building the application

To download or clone this application from Github, go to the [top level of the repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and click  **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/tc/tc_timer_mode** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| WBZ653_curiosity.X    | MPLABX Project for [PIC32CX WBZ653 Curiosity Board]()|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| WBZ653_curiosity.X    | [PIC32CX WBZ653 Curiosity Board]()|
|||

### Setting up [PIC32CX WBZ653 Curiosity Board]()

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and Program the application using its IDE
2. Observe that the LED blinks once every second

Following table provides the LED name:

| Board      | LED Name |
| ---------- | --------- |
| [PIC32CX WBZ653 Curiosity Board]()   | Red LED |
|||
