// 'battery', 37x21px
const unsigned char battery[] PROGMEM = {
    0x3f, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00,
    0x00, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0x38, 0xe0, 0x00,
    0x00, 0x00, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x38, 0xe0,
    0x00, 0x00, 0x00, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x38,
    0xe0, 0x00, 0x00, 0x00, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0xf8, 0xe0, 0x00, 0x00, 0x00,
    0xe0, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff,
    0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0x80
};
// 'bluetooth', 13x21px
const unsigned char bluetooth[] PROGMEM = {
    0x1f, 0xc0, 0x3f, 0xe0, 0x7f, 0xf0, 0xfd, 0xf8, 0xfc, 0xf8, 0xfc, 0x78, 0xdd, 0x38,
    0xcd, 0x98, 0xe5, 0x38, 0xf0, 0x78, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0x78, 0xe5, 0x38,
    0xcd, 0x98, 0xfd, 0x38, 0xfc, 0x78, 0xfc, 0xf8, 0x7d, 0xf0, 0x3f, 0xe0, 0x1f, 0xc0
};
// 'celsius', 26x20px
const unsigned char celsius[] PROGMEM = {
    0x3f, 0x80, 0x1f, 0xc0, 0x7f, 0xc0, 0x3f, 0xc0, 0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60,
    0x60, 0x00, 0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60, 0x60, 0x00,
    0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60, 0x60, 0x00, 0xff, 0xc0, 0x40, 0x00, 0x7f, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x3f, 0xc0
};
// 'fahrenheit', 26x20px
const unsigned char fahrenheit[] PROGMEM = {
    0x3f, 0x80, 0x1f, 0xc0, 0x7f, 0xc0, 0x3f, 0xc0, 0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60,
    0x60, 0x00, 0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60, 0x60, 0x00,
    0xc0, 0x60, 0x60, 0x00, 0xc0, 0x60, 0x60, 0x00, 0xff, 0xc0, 0x7f, 0xc0, 0x7f, 0x80,
    0x3f, 0xc0, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'cloudsun', 48x32px
const unsigned char cloudsun[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x84, 0x40, 0x00, 0x00, 0x00, 0x10, 0x44, 0x42, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x02, 0x3f, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x31, 0x80, 0x61, 0x00, 0x07,
    0xe0, 0x19, 0x00, 0x32, 0x00, 0x38, 0x38, 0x02, 0x00, 0x10, 0x00, 0x60, 0x04, 0x02,
    0x00, 0x10, 0x00, 0x80, 0x03, 0xf2, 0x00, 0x10, 0x01, 0x00, 0x01, 0x9e, 0x00, 0x10,
    0x03, 0x00, 0x00, 0x03, 0x00, 0x10, 0x02, 0x00, 0x00, 0x01, 0x80, 0x10, 0x02, 0x00,
    0x00, 0x00, 0x80, 0x32, 0x04, 0x00, 0x00, 0x00, 0x40, 0x61, 0x04, 0x00, 0x00, 0x00,
    0x70, 0xc0, 0x0c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x08,
    0x60, 0x00, 0x00, 0x00, 0x01, 0x04, 0x40, 0x00, 0x00, 0x00, 0x01, 0xc2, 0x40, 0x00,
    0x00, 0x00, 0x00, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x03, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x06, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00
};
// 'cloudy', 48x32px
const unsigned char cloudy[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00,
    0x00, 0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x80, 0x00, 0x00, 0x00, 0xc0,
    0x00, 0x40, 0x00, 0x00, 0x01, 0x80, 0x00, 0x3f, 0xc0, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x03, 0x80, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x60, 0x00, 0x00, 0x00, 0x00, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x20, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00,
    0x00, 0x00, 0x00, 0x30, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0
};
// 'rain', 48x32px
const unsigned char rain[] PROGMEM = {
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x81, 0x80, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01,
    0xc0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x07, 0x80, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x18,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x01, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x08, 0x42, 0x10, 0x00, 0x00, 0x42, 0x10, 0x84,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x10, 0x84, 0x21, 0x00, 0x00, 0x04, 0x21, 0x08, 0x42, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x84, 0x21, 0x08, 0x00, 0x00
};
// 'snow', 48x32px
const unsigned char snow[] PROGMEM = {
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x09, 0x20, 0x00, 0x00, 0x00, 0x00, 0x05, 0x40, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x81, 0x02, 0x40, 0x00,
    0x00, 0x02, 0x81, 0x02, 0x80, 0x00, 0x00, 0x01, 0x81, 0x03, 0x00, 0x00, 0x00, 0x07,
    0x81, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x00, 0x00, 0x00, 0x21, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x11, 0x10, 0x00, 0x00, 0x00, 0x80, 0x09, 0x20, 0x04, 0x00,
    0x00, 0x40, 0x05, 0x40, 0x08, 0x00, 0x00, 0x20, 0x03, 0x80, 0x10, 0x00, 0x03, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x20, 0x03, 0x80, 0x10, 0x00, 0x00, 0x40, 0x05, 0x40,
    0x08, 0x00, 0x00, 0x80, 0x09, 0x20, 0x04, 0x00, 0x00, 0x00, 0x11, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x21, 0x08, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x00, 0x00, 0x03,
    0x81, 0x03, 0x80, 0x00, 0x00, 0x01, 0x81, 0x03, 0x00, 0x00, 0x00, 0x02, 0x81, 0x02,
    0x80, 0x00, 0x00, 0x04, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x05, 0x40, 0x00, 0x00, 0x00, 0x00,
    0x09, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
};
// 'sunny', 48x32px
const unsigned char sunny[] PROGMEM = {
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x21, 0x08,
    0x00, 0x00, 0x00, 0x18, 0x20, 0x10, 0x60, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xc0, 0x00,
    0x00, 0x06, 0x00, 0x01, 0x80, 0x00, 0x00, 0x02, 0x0f, 0xc1, 0x00, 0x00, 0x00, 0x00,
    0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0c, 0x00, 0x00, 0x00, 0x30, 0x80, 0x04,
    0x30, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x03, 0xf2,
    0x00, 0x01, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00,
    0x00, 0x30, 0x80, 0x04, 0x30, 0x00, 0x00, 0x00, 0xc0, 0x0c, 0x00, 0x00, 0x00, 0x00,
    0x30, 0x30, 0x00, 0x00, 0x00, 0x02, 0x0f, 0xc1, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01,
    0x80, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x18, 0x20, 0x10, 0x60, 0x00,
    0x00, 0x00, 0x21, 0x08, 0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
};
// 'atmosphere', 48x32px
const unsigned char atmosphere[] PROGMEM = {
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x81, 0x80, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01,
    0xc0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x07, 0x80, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x18,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x04, 0x07, 0xff, 0xf8, 0xf0, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x01, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0x9f, 0x1f, 0xff, 0xfc, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8,
    0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1f, 0x1f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'drizzle', 48x32px
const unsigned char drizzle[] PROGMEM = {
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x81, 0x80, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01,
    0xc0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x07, 0x80, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x18,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30,
    0x01, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0x08, 0x00, 0x00
};
// 'thunderstorm', 48x32px
const unsigned char thunderstorm[] PROGMEM = {
    0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x03, 0x81, 0x80, 0x00, 0x00, 0x00, 0x06,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x08, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01,
    0xc0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x07, 0x80, 0x00, 0xc0, 0x0f, 0x80, 0x00, 0xc0, 0x03, 0x00, 0x0f, 0x80,
    0x00, 0x20, 0x02, 0x00, 0x1f, 0x00, 0x00, 0x10, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x18,
    0x04, 0x00, 0x3e, 0x00, 0x00, 0x08, 0x08, 0x00, 0x3c, 0x00, 0x00, 0x08, 0x08, 0x00,
    0x7c, 0x00, 0x00, 0x08, 0x04, 0x00, 0x78, 0x00, 0x00, 0x08, 0x04, 0x00, 0xf8, 0x00,
    0x00, 0x08, 0x04, 0x00, 0xff, 0x00, 0x00, 0x10, 0x02, 0x00, 0x1f, 0x00, 0x00, 0x30,
    0x01, 0x80, 0x1e, 0x00, 0x00, 0x60, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00,
    0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'steps', 19x23px
const unsigned char steps[] PROGMEM = {
    0x00, 0x03, 0xc0, 0x00, 0x07, 0xe0, 0x00, 0x07, 0xe0, 0x00, 0x0f, 0xe0, 0x78, 0x0f,
    0xe0, 0xfc, 0x0f, 0xe0, 0xfc, 0x0f, 0xe0, 0xfc, 0x0f, 0xe0, 0xfe, 0x0f, 0xe0, 0xfe,
    0x07, 0xc0, 0xfe, 0x07, 0xc0, 0xfe, 0x07, 0x80, 0xfe, 0x00, 0x00, 0x7c, 0x0e, 0x00,
    0x7c, 0x0f, 0x80, 0x7c, 0x1f, 0x80, 0x20, 0x1f, 0x00, 0x06, 0x0f, 0x00, 0x3e, 0x0e,
    0x00, 0x3e, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x1e, 0x00, 0x00
};
// 'wifi', 26x18px
const unsigned char wifi[] PROGMEM = {
    0x00, 0x7f, 0x80, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xfc, 0x00,
    0x1f, 0xc0, 0xfe, 0x00, 0x7e, 0x00, 0x1f, 0x80, 0xf8, 0x3f, 0x07, 0xc0,
    0x71, 0xff, 0xe3, 0x80, 0x23, 0xff, 0xf1, 0x00, 0x07, 0xc0, 0xf8, 0x00,
    0x0f, 0x00, 0x3c, 0x00, 0x06, 0x3f, 0x18, 0x00, 0x02, 0x7f, 0x90, 0x00,
    0x00, 0xff, 0xc0, 0x00, 0x00, 0xe1, 0xc0, 0x00, 0x00, 0x40, 0x80, 0x00,
    0x00, 0x0c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00
};
// 'wifioff', 26x18px
const unsigned char wifioff[] PROGMEM = {
    0x00, 0x7f, 0x87, 0xc0, 0x03, 0xff, 0xff, 0x80, 0x0f, 0xff, 0xff, 0x00,
    0x1f, 0xc0, 0xfe, 0x00, 0x7e, 0x00, 0x7f, 0x80, 0xf8, 0x3f, 0xf7, 0xc0,
    0x71, 0xff, 0xe3, 0x80, 0x23, 0xff, 0xf1, 0x00, 0x07, 0xcf, 0xf8, 0x00,
    0x0f, 0x3e, 0x3c, 0x00, 0x06, 0x7f, 0x18, 0x00, 0x02, 0xff, 0x90, 0x00,
    0x01, 0xff, 0xc0, 0x00, 0x07, 0xe1, 0xc0, 0x00, 0x0f, 0xc0, 0x80, 0x00,
    0x1f, 0x0c, 0x00, 0x00, 0x3c, 0x1e, 0x00, 0x00, 0xf8, 0x0c, 0x00, 0x00
};
