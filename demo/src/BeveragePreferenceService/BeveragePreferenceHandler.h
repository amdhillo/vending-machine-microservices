#ifndef VENDING_MACHINE_MICROSERVICES_WEATHERHANDLER_H
#define VENDING_MACHINE_MICROSERVICES_WEATHERHANDLER_H

#include <iostream>
#include <string>
#include <regex>
#include <future>

#include "../../gen-cpp/BeveragePreferenceService.h"

#include "../ClientPool.h"
#include "../ThriftClient.h"
#include "../logger.h"

namespace vending_machine{

class BeveragePreferenceServiceHandler : public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceHandler();
  ~BeveragePreferenceServiceHandler();

  void GetBeverage(std::string& _return, const int btype);
};

// Constructor
BeveragePreferenceServiceHandler::BeveragePreferenceServiceHandler() {

}

// Remote Procedure "PlaceOrder"

void BeveragePreferenceServiceHandler::GetBeverage(std::string& _return, const int btype){
     // Your implementation goes here
     printf("GetBeverage\n");

}

} // namespace vending_machine


#endif //VENDING_MACHINE_MICROSERVICES_WEATHERHANDLER_H

