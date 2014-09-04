#include "SelfHardwareMake.h"
#include "Arduino.h"


#define MLA 10
#define MLB 11
#define MLEN 2

#define MRA 8
#define MRB 9
#define MREN 3

SelfHardwareMake::SelfHardwareMake()
{
  // left motor
  pinMode(MLA, OUTPUT);
  pinMode(MLB, OUTPUT);
  pinMode(MLEN, OUTPUT);

  // right motor
  pinMode(MRA, OUTPUT);
  pinMode(MRB, OUTPUT);
  pinMode(MREN, OUTPUT);
}

SelfHardwareMake::~SelfHardwareMake(){}

void SelfHardwareMake::front(int leftSpeed, int rightSpeed)
{
  digitalWrite(MLA, HIGH);
  digitalWrite(MLB, LOW);
  analogWrite(MLEN, leftSpeed);

  digitalWrite(MRA, HIGH);
  digitalWrite(MRB, LOW);
  analogWrite(MREN, rightSpeed);
}

void SelfHardwareMake::back(int leftSpeed, int rightSpeed)
{
  digitalWrite(MLA, LOW);
  digitalWrite(MLB, HIGH);
  analogWrite(MLEN, leftSpeed);

  digitalWrite(MRA, LOW);
  digitalWrite(MRB, HIGH);
  analogWrite(MREN, rightSpeed);
}

void SelfHardwareMake::positive(int leftSpeed, int rightSpeed)
{
  digitalWrite(MLA, HIGH);
  digitalWrite(MLB, LOW);
  analogWrite(MLEN, leftSpeed);

  digitalWrite(MRA, LOW);
  digitalWrite(MRB, HIGH);
  analogWrite(MREN, rightSpeed);
}

void SelfHardwareMake::negative(int leftSpeed, int rightSpeed)
{
  digitalWrite(MLA, LOW);
  digitalWrite(MLB, HIGH);
  analogWrite(MLEN, leftSpeed);

  digitalWrite(MRA, HIGH);
  digitalWrite(MRB, LOW);
  analogWrite(MREN, rightSpeed);
}

void SelfHardwareMake::stop()
{
  digitalWrite(MLA, LOW);
  digitalWrite(MLB, LOW);

  digitalWrite(MRA, LOW);
  digitalWrite(MRB, LOW);
}
