/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H


enum CarType {AIXAM,FIAT_MULTIPLA,JEEP};

enum Color {RED, GREEN, BLACK, SILVER, BLUE, ORANGE};

typedef struct CarImplementation* Car;

Car get_car( enum CarType car_type);

CarType get_type(Car car);

Color get_color(Car car);

double get_fill_level(Car car);

double get_acceleration_rate(Car car);

int get_speed(Car car);

void init();









#endif
