---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ653 familyy
title: CAN FD blocking
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CAN FD blocking

This example application shows how to use the CAN module to transmit and receive CAN FD messages in polling mode

## Description

This application transmits and receives CAN FD messages on the CAN bus. To run this application, two evaluation boards of same type are required. These boards acts as different nodes on the CAN bus. Same application is programmed onto both the boards. Boards are connected to PC via UART. While running the application, user can send and receive CAN FD messages between the boards using UART console applications running on the PC.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/can/can_fd_operation_blocking** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| WBZ653_curiosity.X | MPLABX project for [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/) |


### Setting up [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)

#### Hardware required

| Name |Quantity |
| -------- | ------- |
| [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)| 2 |
| [MCP2542 CLICK](https://www.mikroe.com/mcp2542-click) | 2 |



#### Setting up the board

- Insert [MCP2542 CLICK](https://www.mikroe.com/mcp2542-click) in the mikroBUS slot

- Connect PIC32CX WBZ653 Curiosity Board to another PIC32CX WBZ653 Curiosity Board through MCP2542 CLICK as per the pin connections shown below

| PIC32CX WBZ653 Curiosity - 1    | PIC32CX WBZ653 Curiosity - 2    |
| ----------------- | ------------------ |
|     CAN1_H        |      CAN1_H        |
|     CAN1_L        |      CAN1_L        |
|     GND           |      GND           |


- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build the application using its IDE
2. Open the Terminal application (Ex.:Tera term) on the computer.
3. Connect to the (USB to Serial) COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
4. In the console associated with board 1, press "0" to transmit a CAN FD message
5. Transmitted message description and status will be displayed in the console window of board 1
6. Received message will be displayed in the console window of board 2
7. Follow the sequence below to send and receive different messages:
    - Press '1' on board 1
    - Press '2' on board 1
    - Press '3' on board 1
    - Press '4' on board 1
    - Press '0' on board 2
    - Press '1' on board 2
    - Press '2' on board 2
    - Press '3' on board 2
    - Press '4' on board 2
8. If the steps are executed in this sequence, the final output in the consoles will be as below:

![output](images/output_can_fd_operation_blocking.png)
