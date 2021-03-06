#include "utility.h"

#ifndef _PIN_DEFINITION
  #define _PIN_DEFINITION

  //TRIAC OUTPUT
  #define TRIAC_PORT PORTD
  #define TRIAC_STATUS_REG DDRD
  #define TRIAC_OUTPUT 7

  #define INIT_TRIAC()    sbi(TRIAC_STATUS_REG,TRIAC_OUTPUT); cbi(TRIAC_PORT,TRIAC_OUTPUT);
  
  #define TURN_ON_TRIAC() sbi(TRIAC_PORT,TRIAC_OUTPUT)
  #define TURN_OFF_TRIAC() cbi(TRIAC_PORT,TRIAC_OUTPUT)
  
  //PROGRAMMING BUTTON
  #define PROG_BUTTON_PORT PORTD
  #define PROG_BUTTON_STATUS_REG DDRD
  #define PROG_PIN 6

  #define INIT_PROG_BUTTON()  cbi( PROG_BUTTON_STATUS_REG,PROG_PIN); sbi(PROG_BUTTON_PORT,PROG_PIN);

  //ZCD
  #define ZCD_PORT PORTD
  #define ZCD_STATUS_REG DDRD
  #define ZCD_INPUT 2

  #define INIT_ZCD() cbi( ZCD_STATUS_REG , ZCD_INPUT );

  
  //TACHO
  #define TACHO_PORT PORTD
  #define TACHO_STATUS_REG DDRD
  #define TACHO_INPUT 3

  #define INIT_TACHO() cbi( DDRD , TACHO_INPUT ); sbi( PORTD , TACHO_INPUT );
  
  //PORTA READ POT
  #define SPEED_READ 0
  #define ANALOG_READ() sbi( ADCSRA , 6 )




  ///////////////////////// LOG ////////////////////

  //TRIAC LOG
  #define TRIAC_LOG_PORT PORTB
  #define TRIAC_LOG_STATUS_REG DDRB
  #define TRIAC_LOG 5

  #define INIT_TRIAC_LOG() sbi(TRIAC_LOG_STATUS_REG,TRIAC_LOG); cbi(TRIAC_LOG_PORT,TRIAC_LOG);
  
  #define TURN_ON_TRIAC_LOG() sbi( TRIAC_LOG_PORT , TRIAC_LOG )
  #define TURN_OFF_TRIAC_LOG() cbi( TRIAC_LOG_PORT , TRIAC_LOG )
  
  
  //ZERO CROSSING DETECTOR LOG
  #define ZCD_LOG_PORT PORTB
  #define ZCD_LOG_STATUS_REG DDRB
  #define ZCD_LOG 4

  #define INIT_ZCD_LOG() sbi(ZCD_LOG_STATUS_REG,TRIAC_LOG); cbi(ZCD_LOG_PORT,TRIAC_LOG);

  #define TURN_ON_ZDC_LOG() sbi( ZCD_LOG_PORT , ZCD_LOG )
  #define TURN_OFF_ZDC_LOG() cbi( ZCD_LOG_PORT , ZCD_LOG )
  

  //TACHO LOG
  #define TACHO_LOG_PORT PORTB
  #define TACHO_LOG_STATUS_REG DDRB
  #define TACHO_LOG 3

  #define INIT_TACHO_LOG() sbi(TACHO_LOG_STATUS_REG,TRIAC_LOG); cbi(TACHO_LOG_PORT,TRIAC_LOG);
  
  #define TURN_ON_TACHO_LOG() sbi( TACHO_LOG_PORT, TACHO_LOG )
  #define TURN_OFF_TACHO_LOG() cbi( TACHO_LOG_PORT, TACHO_LOG )

#endif
