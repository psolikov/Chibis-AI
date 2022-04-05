# Description of the simulation


- The geometry of the system is described in the chibis.gdml
- The data is collected in the SteppingAction class, recording the energy release at each step. The amount of energy released is also indicated.
- To run the simulation run the file python generator.py (python file in build folder for multi-parameter simulation)


## Macro view for launching one beam into the middle of the system
```
/gps/direction 0 0 1
/gps/particle gamma
/gps/number 1
/gps/pos/type Point
/gps/pos/centre 50 70 -10 mm
/gps/pos/halfx 50 mm
/gps/pos/halfy 50 mm
/gps/energy {Ekin} MeV
/run/beamOn 1
```
