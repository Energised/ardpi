# ardpi.h

### C++ Library for use with Arduino to control functions on a robot

Small Arduinocode/C++ library.

Tested alongside Arduino Uno and ATMega boards.

####USAGE
  
`#include <ardpi.h>`

Will only work with the `<>` syntax if imported into the library folder under `~/Documents/Arduino/libraries`

```
motors motors(pin_a, pin_b, pin_c, pin_d);
motors.forwards(pwm_val);
motors.backwards(pwm_val);
motors.left(pwm_val);
motors.right(pwm_val);
```

######NOTE

For now this library is a bespoke solution to some annoying functions for a small robot being controlled by an Arduino ATMega
alongside a Raspberry Pi B+ model.


