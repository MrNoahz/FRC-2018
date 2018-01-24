/* 2018 RobotMap.h */

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

#ifndef SRC_ROBOTMAP_H_
#define SRC_ROBOTMAP_H_

// Turn on or off various features
// -------------------------------

// NavX
#define NAVX
//#define JOYSTICK
#define XBOX

// Check to make sure JOYSTICK and XBOX aren't both enabled
#if defined(JOYSTICK) and defined(XBOX)
#pragma message "WARNING! Both joystick and XBox controllers are enabled!"
#endif

// CAN bus addresses
// -----------------
#define CAN_PDP					0
#define CAN_TALON_LEFT_FRONT	1
#define CAN_TALON_RIGHT_FRONT	2
#define CAN_TALON_LEFT_REAR		3
#define CAN_TALON_RIGHT_REAR	4
#define CAN_TALON_ARM_MOTOR		5
#define CAN_TALON_CLIMB_MOTOR	6
#define CAN_PCM					11

// PCM Channels
#define PCM_CHAN_CLIMB_UP		0
#define PCM_CHAN_CLIMB_DOWN		1
#define PCM_CHAN_ARM_UP			3
#define PCM_CHAN_ARM_DOWN		4

// Digital I/O Channels
#define DIO_LIMIT_SW			0


#endif /* SRC_ROBOTMAP_H_ */