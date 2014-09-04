#ifndef _SELFHARDWAREMAKE_H_
#define _SELFHARDWAREMAKE_H_

class SelfHardwareMake
{
public:
  SelfHardwareMake();
  ~SelfHardwareMake();
  void front(int leftSpeed, int rightSpeed);
  void back(int leftSpeed, int rightSpeed);
  void positive(int leftSpeed, int rightSpeed);
  void negative(int leftSpeed, int rightSpeed);
  void stop();
};


#endif