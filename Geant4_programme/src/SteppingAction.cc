
    #include "G4Step.hh"
    #include "G4ParticleTypes.hh"
    #include "G4RunManager.hh"
    #include "G4Run.hh"
    #include <G4ParticleGunMessenger.hh>
    #include <G4ParticleGun.hh>

    #include "SteppingAction.hh"

    #include "Analysis.hh"

    #include "G4EmCalculator.hh"

    #include "Randomize.hh"
    #include <iomanip>

    #include "name_file.hh"


    #include "G01PrimaryGeneratorAction.hh"

    #define PY_SSIZE_T_CLEAN
    using namespace std;

    SteppingAction::SteppingAction()
    :G4UserSteppingAction()
    { }


    SteppingAction::~SteppingAction()
    { }


    void SteppingAction::UserSteppingAction(const G4Step* theStep)
    {
    
       // G4Track * theTrack = theStep->GetTrack();
        if(theStep->GetTrack()->GetTrackStatus()!=fAlive) { return; }
        
        G4String name = theStep->GetTrack()->GetDefinition()->GetParticleName();
        
        G4double x = (theStep->GetTrack()->GetPosition()).x();
        G4double y = (theStep->GetTrack()->GetPosition()).y();
        G4double z = (theStep->GetTrack()->GetPosition()).z();
        

        G4int trackID  = theStep->GetTrack()->GetTrackID();

        
        
        G4double energy = theStep->GetTrack()->GetKineticEnergy();
        
        G4VPhysicalVolume* pv = theStep->GetPostStepPoint()->GetPhysicalVolume(); //Here if you've just entered the volume, or are within it

        
        
        
        
        G4String name_volume =  pv->GetName();
        //G4double energy = G4ParticleGun ->GetParticleEnergy();
        //auto volume = theStep->GetPreStepPoint()->GetTouchableHandle()->GetVolume();
        G4ThreeVector translation_volume  = pv->GetObjectTranslation();
  
  // energy deposit

        
        std::ofstream out(name_file_data , std::ios::app);
      //  std::cout << "daria efwwf" <<  std::endl;
        //if ( name == "gamma" ) {
        auto edep = theStep->GetTotalEnergyDeposit();
        
        
        out << "trackId " << trackID<< " "<<  name_volume  << " " << energy <<" " <<  name << "  x_m " << x/CLHEP::m << " y_m  "<< y/CLHEP::m << " z_m " << z/CLHEP::m << " edep_keV " <<  edep/CLHEP::keV   << std::endl;
        
        std::cout <<"trackId " << trackID <<  " " << name_volume  << " "  << " edep_keV " <<  edep/CLHEP::keV   << std::endl;
}
