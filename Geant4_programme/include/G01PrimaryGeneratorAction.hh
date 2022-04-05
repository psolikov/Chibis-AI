//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file persistency/gdml/G01/include/G01PrimaryGeneratorAction.hh
/// \brief Definition of the G01PrimaryGeneratorAction class
//
//
//
//

#ifndef _G01PRIMARYGENERATORACTION_H_
#define _G01PRIMARYGENERATORACTION_H_

#include "G4VUserPrimaryGeneratorAction.hh"

#include "globals.hh"

class G4Event;
class G4ParticleGun;
class G4GeneralParticleSource;

/// Minimal primary generator action to demonstrate the use of GDML geometries

class G01PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
  public:

    G01PrimaryGeneratorAction();
   ~G01PrimaryGeneratorAction();

 public:
    void GeneratePrimaries(G4Event* anEvent);
    

  private:

    G4GeneralParticleSource* fParticleGun;
//    G4GeneralParticleSource* fParticleGun;
};

#endif


/*
 #ifndef XrayTelPrimaryGeneratorAction_h
 #define XrayTelPrimaryGeneratorAction_h 1

 #include "G4VUserPrimaryGeneratorAction.hh"

 class G4GeneralParticleSource;
 class G4Event;

 class XrayTelPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
 {
 public:
   XrayTelPrimaryGeneratorAction();
   ~XrayTelPrimaryGeneratorAction();

 public:
   void GeneratePrimaries(G4Event* anEvent);

 private:
   G4GeneralParticleSource* particleGun;
   
 };

 #endif


 */
