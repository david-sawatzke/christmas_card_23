#ifndef USB_H_
#define USB_H_

#include <stdbool.h>

void usb_update(void);
void open_url(void);
void open_url_windows(void);

extern volatile bool usb_connected;

#endif
