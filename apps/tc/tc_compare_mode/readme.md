---
parent: Harmony 3 peripheral library application examples for PIC32CM JH01 family
title: TC compare mode
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TC compare mode

This example shows how to use the TC module in compare mode to generate an active low, active high, and toggle output on compare match.

## Description

Three TC channels are configured in compare mode. Each channel generates different output waveform depending upon configured action on compare match and period match.

**Active low output**: Output is set high on compare 1 match and is
set low on compare 0 match.

**Active high output**: Output is set low on compare 1 match and is
set high on compare 0 match.

**Toggle output**: Output toggles on compare 0 match.

## Downloading and building the application

To download or clone this application from Github, go to the [top level of the repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and click  **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/tc/tc_compare_mode** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ------------------- | ---------------------------------------------- |
| WBZ653_curiosity.X | MPLABX project for [PIC32CX WBZ653 Curiosity Board]() |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| WBZ653_curiosity.X | [PIC32CX WBZ653 Curiosity Board]()
|||

### Setting up [PIC32CX WBZ653 Curiosity Board]()

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and Program the application using its IDE
2. Observe generated waveforms on the oscilloscope

| Timer Channel   | Pin      | Observable characteristic of the waveform
| ----------------| ---------| -----------------------------------------|
| TC0_WO1 | PA02 (RX Pin of mikroBUS1)  | Active low ouptut with 100 Hz frequency |
| TC2_WO1 | PB10 (AN Pin of mikroBUS1)  | Active high output with 100 Hz frequency |
| TC1_WO0 | PA03 (Pin 25 of GPIO Header)  | Toggle output with 50 Hz frequency |
||||
