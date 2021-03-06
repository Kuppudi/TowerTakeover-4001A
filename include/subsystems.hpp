#pragma once
#include "main.h"
using namespace pros;
extern std::shared_ptr<okapi::OdomChassisController> chassis;
extern okapi::Controller master;
extern Motor driveRF;
extern Motor driveRB;
extern Motor driveLF;
extern Motor driveLB;
extern Motor tray;
extern Motor intakeR;
extern Motor intakeL;
extern Motor lift;
extern ADIEncoder lEncoder;
extern ADIEncoder rEncoder;
extern ADIEncoder mEncoder;
extern ADIDigitalIn choose;
enum brake_modes {HOLD = 0, COAST = 1, BRAKE = 2};
void drive(int y, int r);
void intakeHandler(int speed);
void trayHandler(int trayPos);
void liftHandler(int liftInput);
void set_brake(int mode, Motor motor);
void set_drive(int mode);
void clearDrive();
void debug();
void autonhandler(int auton);
void asynctrayHandler();
void asyncIntakeHandler();
void asyncIntakeHandler2();
void moveLift(int goalHeight);
void protecc(bool blue);
void autonLift(int goalHeight);
void driveVel(int speed);
void notprotecc(bool blue);
void back5(bool blue);
void blueback5();
void prog();
void pidtest();
void autonSelector();
void back6(bool blue);
void debugger();
void hightake();
