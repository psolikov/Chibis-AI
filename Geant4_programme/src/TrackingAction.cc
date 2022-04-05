
#include "TrackingAction.hh"
//#include "DetectorConstruction.hh"

#include "G01PrimaryGeneratorAction.hh"

#include "G4PhysicalConstants.hh"
#include "G4Track.hh"




#include "G4ParticleDefinition.hh"
#include "G4ParticleTable.hh"
#include "G4SystemOfUnits.hh"

#include "G4Event.hh"
#include "G4VProcess.hh"

#include "G4ParticleTypes.hh"

#include<G4Step.hh>
#include<fstream>
#include<iostream>
//#include"PhysicsList.hh"
#include "G4ThreeVector.hh"
#include "G4SDManager.hh"
#include "G4ios.hh"
#include "globals.hh"

#include "G4TrajectoryContainer.hh"
#include "G4VTrajectory.hh"
#include "G4VVisManager.hh"
#include "G4UnitsTable.hh"
#include <time.h>
#include "G4EventManager.hh"
#include "G4Trajectory.hh"
#include "G4VHitsCollection.hh"

#include "G4RunManager.hh"
#include "G4Run.hh"
#include <G4ParticleGunMessenger.hh>
#include <G4ParticleGun.hh>


#include "G4EmCalculator.hh"

#include "Randomize.hh"
#include <iomanip>


using namespace std;

TrackingAction::TrackingAction()
:G4UserTrackingAction()
{
}

void TrackingAction::PreUserTrackingAction(const G4Track* aTrack)
{
    
  //  G4AnalysisManager* analysisManager = G4AnalysisManager::Instance();
    /*
    G4double x = (aTrack->GetPosition()).x();
    G4double y = (aTrack->GetPosition()).y();
    G4double z = (aTrack->GetPosition()).z();
    G4double energy = aTrack->GetKineticEnergy();

    G4int trackID  = aTrack->GetTrackID();
    G4String name = aTrack->GetDefinition()->GetParticleName();
    std::ofstream out_elect("dcd.txt", std::ios::app);
    */
    //if ( name == "gamma" ) {
    // std::cout <<  name << "  x  "<< x/CLHEP::m <<"  y  "<< y/CLHEP::m << "  z  "<< z/CLHEP::m << " trackID: " << trackID  << " energy " <<  energy/CLHEP::keV << std::endl;
    //    return fKill;
   // }
    
    G4String name = aTrack->GetDefinition()->GetParticleName();
    G4int trackID  = aTrack->GetTrackID();
    G4double energy = aTrack->GetKineticEnergy();
    
    
    if ( trackID == 1 && name == "gamma"){
    
        std::cout << "daria efwwf " << trackID << " "<<  energy   <<  std::endl;
        
       // std::ofstream out("total_en_deposit_all_100k_" + std::to_string(energy)  + "MeV.txt", std::ios::trunc);
      //  out <<  "that" << std::endl;
        //out.close();
    }
    
}

void TrackingAction::PostUserTrackingAction(const G4Track* track){
  
}
