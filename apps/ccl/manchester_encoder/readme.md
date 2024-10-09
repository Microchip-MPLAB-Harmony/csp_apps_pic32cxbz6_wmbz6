---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ653 family
title: CCL Manchester Encoder
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CCL Manchester Encoder

This example application shows how to use the CCL peripheral library and generate a Manchester-encoded output.

## Description

This demonstrates a way to generate a Manchester-encoded output using a SPI port and the CCL. The SPI port is sending out a predefined buffer of data in a circular fashion. Data is sent out LSB first, with CCL_OUT being the Manchester-encoded output. Pins are configured such that a logic analyzer can be attached to see the input (MOSI and SCK) and the output (CCL_OUT) simultaneously.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/ccl/manchester_encoder** .

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
- SCK pin of mikroBUS2 has SCK output
- Use jumper to connect SCK pin of mikroBUS1 and MISO pin of mikroBUS1 (This routes SCK signal To CCLIN4)
- MOSI pin of mikroBUS1 has MOSI output
- RA3 (pin 25 of GPIO Header) has CCL output (CCL_OUT1)
- Connect the Debug USB port on the board to the computer using a micro USB cable


## Running the Application

1. Connect a logic analyzer to MOSI pin of mikroBUS1.
2. Connect a logic analyzer to SCK pin of mikroBUS2.
3. Connect a logic analyzer to RA3 pin of GPIO Header (pin 25 of GPIO Header).
4. Refer to the following table for pin details:

    |Board| MOSI pin | SCK pin  | CCL_OUT pin |
    |-----|----------|----------|-------------|
    | [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/) | pin 6 of mikroBUS1| pin 4 of mikroBUS2 | pin 25 of GPIO Header |
    ||||

5. Build and Program the application using its IDE
6. Observe the output on logic analyzer, it should follow the truth table as shown in the following diagram:

    ![output](images/truth_table_manchester_encoder.png)
