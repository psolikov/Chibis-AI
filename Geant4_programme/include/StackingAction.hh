
/// \file electromagnetic/TestEm18/include/StackingAction.hh
/// \brief Definition of the StackingAction class

#ifndef StackingAction_h
#define StackingAction_h 1

#include "G4UserStackingAction.hh"
#include "globals.hh"

#include "G4UserEventAction.hh"

#include "G01DetectorConstruction.hh"
#include "G01PrimaryGeneratorAction.hh"
#include <vector>
#include <map>
class G4Track;
class G4VProcess;


class StackingAction : public G4UserStackingAction
{
  public:
    StackingAction();
   ~StackingAction();
    
    //void SetKillStatus(G4bool value);
   // void SetKill(const G4String& name);
    void SetTrackSecondaries(G4bool value) { fTrackSecondaries = value;};

   virtual G4ClassificationOfNewTrack ClassifyNewTrack(const G4Track*);

  private:
  // EventAction*        fEventAction;
    G4bool              fTrackSecondaries;
 //   G4bool              fKillSecondary;
   // const G4ParticleDefinition* fParticle;
   // RunAction*    fRunAction;
    G01PrimaryGeneratorAction* primary;
    G4double      fEdepPrimary, fEdepSecondary;
};

#endif
