#####################################################################
#           SIMULATION ON DSP ALGORITHM WATERMARKING                #
#####################################################################
# Laboratory    : Robotics and Embedded System Technology
# Engineer      : Hanjara Cahya Adhyatma
# Create Date   : 11/04/2017
# Project Name  : FINAL PROJECT
# Target Devices: SIM FOR MICROCONTROLLER AND FPGA
# Tool versions : PYTHON 3.5.2
# Description   :　日本へかえりますために。。。
# Dependencies  :　いない
# Revision      :　今から
# Additional Comments:　いない
#####################################################################
#                    VAR INITIALISATIONS                            #
#####################################################################
import os
# DATA GENERAL
RST = False
CLK = False
ENA = False
# REGISTER
OPC = [0, 0, 0, 0, 0, 0, 0, 0]
RGA = [0, 0, 0, 0, 0, 0, 0, 0]
RGB = [0, 0, 0, 0, 0, 0, 0, 0]
RGZ = [0, 0, 0, 0, 0, 0, 0, 0]
# POLY MORPH
key = [0, 0]
# DIGITAL DATA STREAM 3 BIT
SIG = [
    [1, 1, 1],  # step start
    [1, 0, 1],
    [1, 1, 0],
    [0, 1, 0],  # step 1
    [0, 1, 1],
    [1, 0, 0],
    [0, 1, 0],
    [0, 0, 0],  # step 2
    [1, 1, 1],
    [1, 0, 0],
    [0, 1, 0],
    [0, 0, 1],  # step 3
    [0, 1, 0],
    [1, 0, 1],
    [0, 1, 1],
    [1, 0, 0],  # step 4
    [0, 1, 0],
    [1, 1, 1],
    [0, 1, 1],
    [0, 0, 0],  # step finish
]
# TRANSLATED DATA STREAM 3 BIT
CFG = [[['A', 'B'], ['C', 'D']], [['E', 'F'], ['G', 'H']]]
zed = ''
#####################################################################
#                    FUNCTIONS AND PROCEDURES                       #
#####################################################################


def test():
    x = 0
    y = 0
    while x < len(SIG):
        x += 4
        print(y, '-', SIG[x][0], SIG[x][1], SIG[x][2], \
            CFG[SIG[x][0]][SIG[x][1]][SIG[x][2]])
        y += 1
        if y == 4:
            break


def injector(x):
    c = ''
    while x < 19:
        z = CFG[SIG[x][0]][SIG[x][1]][SIG[x][2]]
        y = str(SIG[x][0]) + str(SIG[x][1]) + str(SIG[x][2])
        print(z, y)
        c += str(z)
        # infuse data to fpga
        fpga(x+1, z, '')
        x += 1
    print('input :', c)
    print('output:', zed)


def fpga(count, input, output):
    ctr = 4
    xctr = 0
    if (((count / ctr) - 1 == 0) or
            ((count / ctr) - 2 == 0) or
            ((count / ctr) - 3 == 0) or
            ((count / ctr) - 4 == 0) or
            ((count / ctr) - 5 == 0)):
        zed = zed + str(output) + str(input)
        global zed


def reader():
    print()

#####################################################################
#                           MAIN ROUTINE                            #
#####################################################################
if __name__ == "__main__":
    os.system("cls")
    injector(0)
    