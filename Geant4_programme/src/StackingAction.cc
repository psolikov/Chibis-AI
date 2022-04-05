

/// \file electromagnetic/TestEm18/src/StackingAction.cc
/// \brief Implementation of the StackingAction class

#include "StackingAction.hh"
#include "G4Track.hh"
#include "G4ParticleDefinition.hh"
#include "G4ParticleTable.hh"
#include "G4SystemOfUnits.hh"
#include "G01PrimaryGeneratorAction.hh"


#include "G4Event.hh"
#include "G4VProcess.hh"

#include "G4ParticleTypes.hh"
#include "G4ios.hh"

#include "G4PhysicalConstants.hh"


#include <G4Step.hh>
#include <fstream>
#include <iostream>
//#include "PhysicsList.hh"
#include "G4ThreeVector.hh"
#include "G4SDManager.hh"
#include "globals.hh"

#include "G4TrajectoryContainer.hh"
#include "G4VTrajectory.hh"
#include "G4VVisManager.hh"
#include "G4UnitsTable.hh"
#include <time.h>
#include "G4EventManager.hh"
#include "G4Trajectory.hh"
#include "G4VHitsCollection.hh"
#include "G4SystemOfUnits.hh"

#include "G4RunManager.hh"
#include "G4Run.hh"
#include <G4ParticleGunMessenger.hh>
#include <G4ParticleGun.hh>

#include "Analysis.hh"

#include "G4EmCalculator.hh"

#include "Randomize.hh"
#include <iomanip>


using namespace std;

StackingAction::StackingAction()
:G4UserStackingAction(), fTrackSecondaries(true)
{
}

StackingAction::~StackingAction()
{
}


G4ClassificationOfNewTrack
StackingAction::ClassifyNewTrack(const G4Track* aTrack)
{
    
    
   return fUrgent;
 
}
