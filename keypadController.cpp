#include "keypadController.h"

keypadController::keypadController(order * items)
{
  cart = items;
  display.refresh(*cart);
  cart->addObserver(this);
}

//is called when observed order changes
void keypadController::update() {
  display.refresh(*cart);
}
