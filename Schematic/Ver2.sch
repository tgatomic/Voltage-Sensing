EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:l78l05abutr
LIBS:switches
LIBS:Ver2-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ATMEGA328P-A IC1
U 1 1 589E2F74
P 3500 3250
F 0 "IC1" H 2750 4500 50  0000 L BNN
F 1 "ATMEGA328P-A" H 3900 1850 50  0000 L BNN
F 2 "Housings_QFP:TQFP-32_7x7mm_Pitch0.8mm" H 3500 3250 50  0001 C CIN
F 3 "" H 3500 3250 50  0000 C CNN
F 4 "ATMEGA328P-AU" H 3500 3250 60  0001 C CNN "Part number"
	1    3500 3250
	1    0    0    -1  
$EndComp
$Comp
L L78L05ABUTR U1
U 1 1 589E3204
P 6550 2200
F 0 "U1" H 6800 2050 60  0000 C CNN
F 1 "L78L05ABUTR" H 6550 2400 60  0000 C CNN
F 2 "SOT-89:SOT-89" H 6550 2100 60  0001 C CNN
F 3 "" H 6550 2100 60  0001 C CNN
F 4 "L78L05ABUTR" H 6550 2200 60  0001 C CNN "Part number"
	1    6550 2200
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P2
U 1 1 589E333D
P 7100 1900
F 0 "P2" H 7100 2050 50  0000 C CNN
F 1 "Power" V 7200 1900 50  0000 C CNN
F 2 "Solderpads:2xSolderpads" H 7100 1900 50  0001 C CNN
F 3 "" H 7100 1900 50  0000 C CNN
	1    7100 1900
	0    -1   -1   0   
$EndComp
$Comp
L C_Small C3
U 1 1 589E33F6
P 6200 2800
F 0 "C3" H 6210 2870 50  0000 L CNN
F 1 "0.1uF" H 6210 2720 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 6200 2800 50  0001 C CNN
F 3 "" H 6200 2800 50  0000 C CNN
F 4 "885012207072" H 6200 2800 60  0001 C CNN "Part number"
	1    6200 2800
	1    0    0    -1  
$EndComp
$Comp
L C_Small C4
U 1 1 589E34A6
P 6900 2800
F 0 "C4" H 6910 2870 50  0000 L CNN
F 1 "0.33uF" H 6910 2720 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 6900 2800 50  0001 C CNN
F 3 "" H 6900 2800 50  0000 C CNN
F 4 "885012207048" H 6900 2800 60  0001 C CNN "Part number"
	1    6900 2800
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR01
U 1 1 589E3A6B
P 7650 2350
F 0 "#PWR01" H 7650 2100 50  0001 C CNN
F 1 "GND" H 7650 2200 50  0000 C CNN
F 2 "" H 7650 2350 50  0000 C CNN
F 3 "" H 7650 2350 50  0000 C CNN
	1    7650 2350
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 589E4071
P 6900 3000
F 0 "#PWR02" H 6900 2750 50  0001 C CNN
F 1 "GND" H 6900 2850 50  0000 C CNN
F 2 "" H 6900 3000 50  0000 C CNN
F 3 "" H 6900 3000 50  0000 C CNN
	1    6900 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR03
U 1 1 589E408B
P 6200 3000
F 0 "#PWR03" H 6200 2750 50  0001 C CNN
F 1 "GND" H 6200 2850 50  0000 C CNN
F 2 "" H 6200 3000 50  0000 C CNN
F 3 "" H 6200 3000 50  0000 C CNN
	1    6200 3000
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR04
U 1 1 589E410B
P 6550 2650
F 0 "#PWR04" H 6550 2400 50  0001 C CNN
F 1 "GND" H 6550 2500 50  0000 C CNN
F 2 "" H 6550 2650 50  0000 C CNN
F 3 "" H 6550 2650 50  0000 C CNN
	1    6550 2650
	1    0    0    -1  
$EndComp
Text Label 6000 2600 0    60   ~ 0
5V
Text Label 6300 3300 0    60   ~ 0
VSENSE
Text Label 4950 3000 2    60   ~ 0
VSENSE
Text Label 2350 1950 0    60   ~ 0
5V
$Comp
L C_Small C2
U 1 1 589E495B
P 2300 2650
F 0 "C2" H 2310 2720 50  0000 L CNN
F 1 "0.1uF" H 2310 2570 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 2300 2650 50  0001 C CNN
F 3 "" H 2300 2650 50  0000 C CNN
F 4 "885012207072" H 2300 2650 60  0001 C CNN "Part number"
	1    2300 2650
	1    0    0    -1  
$EndComp
$Comp
L C_Small C1
U 1 1 589E4AAD
P 1950 2450
F 0 "C1" H 1960 2520 50  0000 L CNN
F 1 "0.1uF" H 1960 2370 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 1950 2450 50  0001 C CNN
F 3 "" H 1950 2450 50  0000 C CNN
F 4 "885012207072" H 1950 2450 60  0001 C CNN "Part number"
	1    1950 2450
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR05
U 1 1 589E4E31
P 2300 2850
F 0 "#PWR05" H 2300 2600 50  0001 C CNN
F 1 "GND" H 2300 2700 50  0000 C CNN
F 2 "" H 2300 2850 50  0000 C CNN
F 3 "" H 2300 2850 50  0000 C CNN
	1    2300 2850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR06
U 1 1 589E4EAC
P 1950 2650
F 0 "#PWR06" H 1950 2400 50  0001 C CNN
F 1 "GND" H 1950 2500 50  0000 C CNN
F 2 "" H 1950 2650 50  0000 C CNN
F 3 "" H 1950 2650 50  0000 C CNN
	1    1950 2650
	1    0    0    -1  
$EndComp
NoConn ~ 2600 2750
NoConn ~ 2600 3500
NoConn ~ 2600 3600
$Comp
L GND #PWR07
U 1 1 589E51DF
P 2500 4550
F 0 "#PWR07" H 2500 4300 50  0001 C CNN
F 1 "GND" H 2500 4400 50  0000 C CNN
F 2 "" H 2500 4550 50  0000 C CNN
F 3 "" H 2500 4550 50  0000 C CNN
	1    2500 4550
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X04 P3
U 1 1 589E55C2
P 8500 1950
F 0 "P3" H 8500 2200 50  0000 C CNN
F 1 "OLED" V 8600 1950 50  0000 C CNN
F 2 "Solderpads:4xSolderpads" H 8500 1950 50  0001 C CNN
F 3 "" H 8500 1950 50  0000 C CNN
	1    8500 1950
	0    -1   -1   0   
$EndComp
Text Label 4950 3400 2    60   ~ 0
OLED_SDA
Text Label 4950 3500 2    60   ~ 0
OLED_SCL
Text Label 9150 2250 2    60   ~ 0
OLED_SDA
Text Label 9100 2350 2    60   ~ 0
OLED_SCL
Text Label 9050 2450 2    60   ~ 0
5V
$Comp
L GND #PWR08
U 1 1 589E5AFB
P 8350 2250
F 0 "#PWR08" H 8350 2000 50  0001 C CNN
F 1 "GND" H 8350 2100 50  0000 C CNN
F 2 "" H 8350 2250 50  0000 C CNN
F 3 "" H 8350 2250 50  0000 C CNN
	1    8350 2250
	1    0    0    -1  
$EndComp
$Comp
L D D3
U 1 1 589E5CE6
P 7050 2350
F 0 "D3" H 7050 2450 50  0000 C CNN
F 1 "D" H 7050 2250 50  0000 C CNN
F 2 "Diodes_SMD:D_0805" H 7050 2350 50  0001 C CNN
F 3 "" H 7050 2350 50  0000 C CNN
	1    7050 2350
	0    -1   -1   0   
$EndComp
$Comp
L D D4
U 1 1 589E60BD
P 7400 2250
F 0 "D4" H 7400 2350 50  0000 C CNN
F 1 "D" H 7400 2150 50  0000 C CNN
F 2 "Diodes_SMD:D_0805" H 7400 2250 50  0001 C CNN
F 3 "" H 7400 2250 50  0000 C CNN
	1    7400 2250
	1    0    0    -1  
$EndComp
$Comp
L SW_Push SW1
U 1 1 589E719B
P 5200 3950
F 0 "SW1" H 5250 4050 50  0000 L CNN
F 1 "SW_Push" H 5200 3890 50  0000 C CNN
F 2 "Solderpads:2xSolderpads" H 5200 4150 50  0001 C CNN
F 3 "" H 5200 4150 50  0000 C CNN
	1    5200 3950
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR09
U 1 1 589E78B5
P 5650 4200
F 0 "#PWR09" H 5650 3950 50  0001 C CNN
F 1 "GND" H 5650 4050 50  0000 C CNN
F 2 "" H 5650 4200 50  0000 C CNN
F 3 "" H 5650 4200 50  0000 C CNN
	1    5650 4200
	0    -1   -1   0   
$EndComp
Text Label 5600 3950 2    60   ~ 0
5V
$Comp
L R_Small R3
U 1 1 589E7EAB
P 5350 4200
F 0 "R3" H 5380 4220 50  0000 L CNN
F 1 "10k" H 5380 4160 50  0000 L CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" H 5350 4200 50  0001 C CNN
F 3 "" H 5350 4200 50  0000 C CNN
F 4 "CRCW080510K0FKEA" H 5350 4200 60  0001 C CNN "Part number"
	1    5350 4200
	0    -1   -1   0   
$EndComp
$Comp
L R_Small R4
U 1 1 589E81EF
P 6650 3100
F 0 "R4" H 6680 3120 50  0000 L CNN
F 1 "10k" H 6680 3060 50  0000 L CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" H 6650 3100 50  0001 C CNN
F 3 "" H 6650 3100 50  0000 C CNN
F 4 "CRCW080510K0FKEA" H 6650 3100 60  0001 C CNN "Part number"
	1    6650 3100
	1    0    0    -1  
$EndComp
$Comp
L R_Small R5
U 1 1 589E8912
P 6650 3500
F 0 "R5" H 6680 3520 50  0000 L CNN
F 1 "15k" H 6680 3460 50  0000 L CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" H 6650 3500 50  0001 C CNN
F 3 "" H 6650 3500 50  0000 C CNN
F 4 "CRCW080515K0JNEA" H 6650 3500 60  0001 C CNN "Part number"
	1    6650 3500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR010
U 1 1 589E8C71
P 6650 3750
F 0 "#PWR010" H 6650 3500 50  0001 C CNN
F 1 "GND" H 6650 3600 50  0000 C CNN
F 2 "" H 6650 3750 50  0000 C CNN
F 3 "" H 6650 3750 50  0000 C CNN
	1    6650 3750
	1    0    0    -1  
$EndComp
$Comp
L LED D1
U 1 1 589E9948
P 5050 2250
F 0 "D1" H 5050 2350 50  0000 C CNN
F 1 "LED" H 5050 2150 50  0000 C CNN
F 2 "LEDs:LED_1206" H 5050 2250 50  0001 C CNN
F 3 "" H 5050 2250 50  0000 C CNN
F 4 "APT3216EC" H 5050 2250 60  0001 C CNN "Part number"
	1    5050 2250
	-1   0    0    1   
$EndComp
$Comp
L R_Small R1
U 1 1 589E9F88
P 4700 2250
F 0 "R1" H 4730 2270 50  0000 L CNN
F 1 "220" H 4730 2210 50  0000 L CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" H 4700 2250 50  0001 C CNN
F 3 "" H 4700 2250 50  0000 C CNN
F 4 "CRCW0805220RFKEA" H 4700 2250 60  0001 C CNN "Part number"
	1    4700 2250
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR011
U 1 1 589E9C54
P 5300 2350
F 0 "#PWR011" H 5300 2100 50  0001 C CNN
F 1 "GND" H 5300 2200 50  0000 C CNN
F 2 "" H 5300 2350 50  0000 C CNN
F 3 "" H 5300 2350 50  0000 C CNN
	1    5300 2350
	1    0    0    -1  
$EndComp
$Comp
L LED D2
U 1 1 589EB6DE
P 5050 4350
F 0 "D2" H 5050 4450 50  0000 C CNN
F 1 "LED" H 5050 4250 50  0000 C CNN
F 2 "LEDs:LED_1206" H 5050 4350 50  0001 C CNN
F 3 "" H 5050 4350 50  0000 C CNN
F 4 "CMD15-21VGC/TR8" H 5050 4350 60  0001 C CNN "Part number"
	1    5050 4350
	-1   0    0    1   
$EndComp
$Comp
L R_Small R2
U 1 1 589EB6E4
P 4700 4350
F 0 "R2" H 4730 4370 50  0000 L CNN
F 1 "220" H 4730 4310 50  0000 L CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" H 4700 4350 50  0001 C CNN
F 3 "" H 4700 4350 50  0000 C CNN
F 4 "CRCW0805220RFKEA" H 4700 4350 60  0001 C CNN "Part number"
	1    4700 4350
	0    -1   -1   0   
$EndComp
$Comp
L GND #PWR012
U 1 1 589EB6EE
P 5300 4450
F 0 "#PWR012" H 5300 4200 50  0001 C CNN
F 1 "GND" H 5300 4300 50  0000 C CNN
F 2 "" H 5300 4450 50  0000 C CNN
F 3 "" H 5300 4450 50  0000 C CNN
	1    5300 4450
	1    0    0    -1  
$EndComp
Text Label 4950 3850 2    60   ~ 0
DBG_TX
Text Label 4950 3750 2    60   ~ 0
DBG_RX
$Comp
L CONN_01X02 P4
U 1 1 589EDA69
P 8500 3400
F 0 "P4" H 8500 3550 50  0000 C CNN
F 1 "DBG" V 8600 3400 50  0000 C CNN
F 2 "Solderpads:2xSolderpads" H 8500 3400 50  0001 C CNN
F 3 "" H 8500 3400 50  0000 C CNN
	1    8500 3400
	0    -1   -1   0   
$EndComp
Text Label 8650 3700 0    60   ~ 0
DBG_RX
Text Label 8650 3800 0    60   ~ 0
DBG_TX
Text Label 4950 3600 2    60   ~ 0
RESET
Text Label 4950 2450 2    60   ~ 0
MOSI
Text Label 4950 2550 2    60   ~ 0
MISO
Text Label 4950 2650 2    60   ~ 0
SCK
Wire Wire Line
	6900 2700 6900 2600
Wire Wire Line
	7050 2600 6650 2600
Wire Wire Line
	7050 2600 7050 2500
Wire Wire Line
	6650 2500 6650 3000
Connection ~ 6900 2600
Wire Wire Line
	6450 2500 6450 2600
Wire Wire Line
	6450 2600 6000 2600
Wire Wire Line
	6200 2700 6200 2600
Connection ~ 6200 2600
Wire Wire Line
	6200 2900 6200 3000
Wire Wire Line
	6900 2900 6900 3000
Wire Wire Line
	6550 2500 6550 2650
Wire Wire Line
	4500 3000 4950 3000
Wire Wire Line
	2600 2450 2300 2450
Wire Wire Line
	2300 2450 2300 2550
Wire Wire Line
	2600 2250 1950 2250
Wire Wire Line
	1950 2250 1950 2350
Wire Wire Line
	2600 2150 2500 2150
Wire Wire Line
	2500 1950 2500 2450
Connection ~ 2500 2250
Connection ~ 2500 2450
Wire Wire Line
	2500 1950 2350 1950
Connection ~ 2500 2150
Wire Wire Line
	1950 2550 1950 2650
Wire Wire Line
	2300 2750 2300 2850
Wire Wire Line
	2600 4450 2500 4450
Wire Wire Line
	2500 4250 2500 4550
Wire Wire Line
	2600 4350 2500 4350
Connection ~ 2500 4450
Wire Wire Line
	2600 4250 2500 4250
Connection ~ 2500 4350
Wire Wire Line
	4950 3400 4500 3400
Wire Wire Line
	4950 3500 4500 3500
Wire Wire Line
	8650 2150 8650 2250
Wire Wire Line
	8650 2250 9150 2250
Wire Wire Line
	8550 2150 8550 2350
Wire Wire Line
	8550 2350 9100 2350
Wire Wire Line
	8450 2150 8450 2450
Wire Wire Line
	8350 2150 8350 2250
Wire Wire Line
	7050 2100 7050 2200
Wire Wire Line
	7650 2250 7550 2250
Wire Wire Line
	7250 2250 7150 2250
Wire Wire Line
	7150 2250 7150 2100
Wire Wire Line
	7650 2250 7650 2350
Wire Wire Line
	4500 3950 5000 3950
Wire Wire Line
	5600 3950 5400 3950
Connection ~ 6650 2600
Wire Wire Line
	6650 3200 6650 3400
Wire Wire Line
	6650 3600 6650 3750
Wire Wire Line
	6300 3300 6650 3300
Connection ~ 6650 3300
Wire Wire Line
	4600 2250 4500 2250
Wire Wire Line
	4900 2250 4800 2250
Wire Wire Line
	5200 2250 5300 2250
Wire Wire Line
	5300 2250 5300 2350
Wire Wire Line
	4600 4350 4500 4350
Wire Wire Line
	4900 4350 4800 4350
Wire Wire Line
	5200 4350 5300 4350
Wire Wire Line
	5300 4350 5300 4450
Wire Wire Line
	4900 4200 5250 4200
Wire Wire Line
	4900 4200 4900 3950
Connection ~ 4900 3950
Wire Wire Line
	5650 4200 5450 4200
Wire Wire Line
	4500 3750 4950 3750
Wire Wire Line
	4500 3850 4950 3850
Wire Wire Line
	8650 3700 8550 3700
Wire Wire Line
	8550 3700 8550 3600
Wire Wire Line
	8450 3600 8450 3800
Wire Wire Line
	8450 3800 8650 3800
Wire Wire Line
	4500 3600 4950 3600
Wire Wire Line
	4950 2650 4500 2650
Wire Wire Line
	4950 2550 4500 2550
Wire Wire Line
	4950 2450 4500 2450
$Comp
L CONN_02X03 P1
U 1 1 589EF013
P 6900 4500
F 0 "P1" H 6900 4700 50  0000 C CNN
F 1 "PROG" H 6900 4300 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_2x03_Pitch2.54mm" H 6900 3300 50  0001 C CNN
F 3 "" H 6900 3300 50  0000 C CNN
	1    6900 4500
	1    0    0    -1  
$EndComp
Text Label 7450 4500 2    60   ~ 0
MOSI
Text Label 6350 4400 0    60   ~ 0
MISO
Text Label 6350 4500 0    60   ~ 0
SCK
Text Label 6350 4600 0    60   ~ 0
RESET
$Comp
L GND #PWR013
U 1 1 589EF4CF
P 7250 4700
F 0 "#PWR013" H 7250 4450 50  0001 C CNN
F 1 "GND" H 7250 4550 50  0000 C CNN
F 2 "" H 7250 4700 50  0000 C CNN
F 3 "" H 7250 4700 50  0000 C CNN
	1    7250 4700
	1    0    0    -1  
$EndComp
Text Label 7450 4400 2    60   ~ 0
5V
Wire Wire Line
	7150 4600 7250 4600
Wire Wire Line
	7250 4600 7250 4700
Wire Wire Line
	7450 4500 7150 4500
Wire Wire Line
	7450 4400 7150 4400
Wire Wire Line
	6650 4400 6350 4400
Wire Wire Line
	6350 4500 6650 4500
Wire Wire Line
	6350 4600 6650 4600
NoConn ~ 4500 2150
NoConn ~ 4500 2350
NoConn ~ 4500 2750
NoConn ~ 4500 2850
NoConn ~ 4500 3200
NoConn ~ 4500 3300
NoConn ~ 4500 4050
NoConn ~ 4500 4150
NoConn ~ 4500 4250
NoConn ~ 4500 4450
$Comp
L 2N7002 Q1
U 1 1 58A0CB9B
P 8650 2550
F 0 "Q1" V 8550 2650 50  0000 L CNN
F 1 "2N7002" H 8850 2550 50  0001 L CNN
F 2 "TO_SOT_Packages_SMD:SOT-23" H 8850 2475 50  0001 L CIN
F 3 "" H 8650 2550 50  0000 L CNN
F 4 "NTR5103NT1G" V 8650 2550 60  0001 C CNN "Part number"
	1    8650 2550
	0    1    -1   0   
$EndComp
Wire Wire Line
	9050 2450 8850 2450
Wire Wire Line
	8600 2750 8600 2850
Text Label 9350 2850 2    60   ~ 0
OLED_ON
$Comp
L R_Small R6
U 1 1 58A0E51B
P 8800 2850
F 0 "R6" H 8830 2870 50  0000 L CNN
F 1 "1k" H 8830 2810 50  0000 L CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" H 8800 2850 50  0001 C CNN
F 3 "" H 8800 2850 50  0000 C CNN
F 4 "CRCW08051K00FKEA" H 8800 2850 60  0001 C CNN "Part number"
	1    8800 2850
	0    1    1    0   
$EndComp
Wire Wire Line
	9350 2850 8900 2850
Wire Wire Line
	8600 2850 8700 2850
Text Label 4950 3100 2    60   ~ 0
OLED_ON
Wire Wire Line
	4950 3100 4500 3100
$EndSCHEMATC
