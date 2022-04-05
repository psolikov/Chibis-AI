from string import Template
import os
import shutil
import numpy as np
import subprocess
from multiprocessing import Pool



print("there, i am here")

#ENERGY = ['0.05', '0.051', '0.052']
ENERGY = np.arange(0.05, 5.0, 0.0005) #MeV


def fun():
    currPath = os.getcwd()
    print(currPath)
    cmd1 = 'make'
    os.system(cmd1)
    cmd2 = './load_gdml chibis.gdml'
    os.system(cmd2)
    
    
def mai(item):
    print("there, i am here1")
    name_file = open('../G01/include/name_file.hh', 'w')
    name_file.write('std::string name_file_data = "run1ener' + str(ENERGY[item])+'.txt"; ' + '\n')
    name_file.close()
    mac_g = open('../G01/g01.mac', 'w')
    mac_g.write('/gps/direction 0 0 1'+ '\n');
    mac_g.write('/gps/particle gamma' + '\n')
    mac_g.write('/gps/number 1' + '\n')
    mac_g.write('/gps/pos/type Point' + '\n')
    mac_g.write('/gps/pos/centre 50 70 -10 mm' + '\n')
    mac_g.write('/gps/pos/halfx 50 mm' + '\n') #/gps/pos/halfx 50 mm' + '\n')
    mac_g.write('/gps/pos/halfy 50 mm' + '\n')
    #mac_g.write('/gps/direction 0.0 ' + str(1.0 - ANGLE[angle_i])+ ' ' + str(ANGLE[angle_i]) + '\n')
    mac_g.write('/gps/energy {Ekin} MeV' + '\n')
    mac_g.write('/run/beamOn 1' + '\n')
    mac_g.close()
    loop =  open('../G01/include/loop.hh', 'w')
    loop.write('G4String looop = "/control/loop g01.mac Ekin ' + str(ENERGY[item])   + ' ' + str(ENERGY[item])  + ' ' + str(ENERGY[item])  + '";' + '\n')
    loop.close()
    print("there, i am here2")
    currPath = os.getcwd()
    cmd1 = 'make'
    os.system(cmd1)
    cmd2 = './load_gdml chibis.gdml'
    os.system(cmd2)
    
if __name__ == "__main__":
    print("there, i am here")
    for item in range(len(ENERGY)):
        print("there, i am here000")
        currPath0 = os.getcwd()
        cmd0 = 'make'
        os.system(cmd0)
        mai(item)

'''
from string import Template
import os
import shutil
import numpy as np
import subprocess
from multiprocessing import Pool



#ENERGY = ['0.1', '0.2', '0.3']
ENERGY = np.arange(0.1, 0.3, 0.1)

def fun():
    currPath = os.getcwd()
    print(currPath)
    cmd1 = 'make'
    os.system(cmd1)
    cmd2 = './load_gdml chibis.gdml'
    os.system(cmd2)
    
    
def mai(i):
    name_file = open('../G01/include/name_file.hh', 'w')
    name_file.write('std::string name_file_data = "ener' + ENERGY[i] +'.txt"; ' + '\n')
    name_file.close()
    loop =  open('../G01/include/loop.hh', 'w')
    loop.write('G4String looop = "/control/loop g01.mac Ekin ' + ENERGY[i]  + ' ' + ENERGY[i]  + ' ' + ENERGY[i] + '";' + '\n')
    loop.close()
    print("there, i am here")
    currPath = os.getcwd()
    cmd1 = 'make'
    os.system(cmd1)
    cmd2 = './load_gdml chibis.gdml'
    os.system(cmd2)
    
if __name__ == "__main__":
    for i in range(len(ENERGY)):
        currPath0 = os.getcwd()
        cmd0 = 'make'
        os.system(cmd0)
        mai(i)

'''
