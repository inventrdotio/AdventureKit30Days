const byte ENDING_BITMAP_WIDTH = 128;
const byte ENDING_BITMAP_HEIGHT = 54;

// '1', 128x54px
const unsigned char EndingBitmap_No_Gear [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x38, 0x1f, 0x23, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x20, 0x80, 0xa3, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 
	0x28, 0x84, 0xa2, 0x10, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 
	0x28, 0x44, 0xa0, 0x10, 0x05, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 
	0x48, 0x44, 0x20, 0x18, 0x05, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 
	0x48, 0x15, 0x20, 0x99, 0x04, 0xfe, 0x07, 0x70, 0x00, 0x00, 0x40, 0x00, 0x80, 0x4f, 0x00, 0x00, 
	0x00, 0x35, 0x21, 0x99, 0x04, 0xfe, 0x0f, 0x20, 0x00, 0x00, 0x5c, 0x00, 0x80, 0x27, 0x00, 0x00, 
	0x80, 0x24, 0x00, 0x1a, 0x00, 0x1c, 0x1f, 0x60, 0x00, 0x00, 0x79, 0x03, 0xc0, 0x57, 0x00, 0x00, 
	0x80, 0x0e, 0x00, 0x7e, 0x00, 0x00, 0x1e, 0xe0, 0x00, 0x80, 0xf8, 0x05, 0xe0, 0x3b, 0x00, 0x00, 
	0x00, 0x1f, 0x00, 0x18, 0x00, 0x00, 0x3e, 0xc0, 0x00, 0x80, 0xf8, 0x0f, 0xf0, 0x1d, 0x00, 0x00, 
	0x00, 0x16, 0x00, 0x3c, 0x00, 0x00, 0x3e, 0xc0, 0x00, 0x00, 0xf9, 0x1f, 0xf8, 0x0e, 0x00, 0x00, 
	0xd0, 0xe7, 0x40, 0xbd, 0x02, 0x00, 0x3e, 0xc0, 0x01, 0x00, 0xfa, 0x33, 0x7c, 0x07, 0x00, 0x00, 
	0x50, 0xcf, 0x01, 0x5a, 0x00, 0xf0, 0x1f, 0x40, 0x1d, 0x10, 0xfc, 0x67, 0xbc, 0x07, 0x00, 0x00, 
	0x50, 0x8b, 0x40, 0xef, 0x02, 0xfc, 0x1f, 0x40, 0x78, 0x18, 0xf0, 0xff, 0xfe, 0x03, 0x00, 0x00, 
	0x00, 0x0a, 0x00, 0x24, 0x00, 0xfe, 0x0f, 0x80, 0x41, 0x04, 0xf8, 0xff, 0xdf, 0x01, 0x00, 0x00, 
	0x00, 0x06, 0x00, 0x18, 0x00, 0xfe, 0x03, 0xf8, 0xc3, 0x48, 0xf0, 0xff, 0xef, 0x00, 0x00, 0x00, 
	0x00, 0x0c, 0x00, 0x3c, 0x00, 0x1c, 0x00, 0x04, 0xc2, 0x60, 0xe0, 0xc7, 0x77, 0x00, 0x00, 0x00, 
	0x30, 0xc4, 0xc1, 0x00, 0x03, 0x08, 0x00, 0x02, 0xc4, 0x11, 0xe0, 0xdf, 0x7b, 0x00, 0x10, 0x00, 
	0x78, 0xee, 0xe1, 0x20, 0x0f, 0x00, 0x00, 0x02, 0xd8, 0x00, 0x81, 0xff, 0x3f, 0x00, 0x38, 0x00, 
	0xf8, 0xee, 0xf1, 0x20, 0xcf, 0x01, 0x00, 0x02, 0xf8, 0x81, 0xf9, 0xff, 0x3f, 0x00, 0x70, 0x00, 
	0xf8, 0xe4, 0xf1, 0x38, 0xef, 0x03, 0x00, 0x00, 0xa8, 0x03, 0xb0, 0xff, 0x7f, 0x00, 0xc0, 0x00, 
	0xf8, 0xe6, 0xf1, 0x18, 0xef, 0x03, 0x00, 0x02, 0x48, 0x00, 0x80, 0xff, 0xbf, 0x00, 0x80, 0x03, 
	0xf8, 0xec, 0xf1, 0x34, 0xcf, 0x03, 0x00, 0x02, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x07, 
	0xf8, 0xf6, 0xf1, 0x3c, 0x0f, 0x00, 0x00, 0x04, 0x04, 0x00, 0xf0, 0xff, 0x3b, 0x03, 0x00, 0x0e, 
	0xf8, 0xfc, 0xf1, 0x24, 0x0f, 0x00, 0x00, 0x08, 0x03, 0x00, 0xf0, 0xff, 0x1f, 0x1e, 0x00, 0x1c, 
	0xf8, 0xe0, 0xf1, 0x00, 0x0f, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x3f, 0x00, 0x28, 
	0xf8, 0xe0, 0xf1, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xf1, 0x3f, 0x00, 0x20, 
	0xf8, 0xe0, 0xf1, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xf1, 0x3f, 0x00, 0x1f, 
	0xf8, 0xe0, 0xf1, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xf3, 0x3f, 0x80, 0x41, 
	0xf8, 0xe0, 0xf1, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xa3, 0xff, 0xc0, 0x00, 
	0x78, 0xe0, 0xe1, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xbf, 0x27, 0x0e, 0x83, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xf7, 0x27, 0x0e, 0x00, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x63, 0x7f, 0x0e, 0x00, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xe3, 0x4f, 0xfe, 0x80, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xc1, 0x3f, 0x06, 0x80, 0x00, 
	0x38, 0xe7, 0x01, 0x3c, 0x7f, 0x38, 0xfc, 0x38, 0x00, 0x00, 0xfe, 0x80, 0x3f, 0x06, 0x00, 0x61, 
	0x78, 0xf3, 0x03, 0x7e, 0x7f, 0x78, 0xfc, 0x39, 0x00, 0x00, 0x7f, 0x80, 0x7f, 0x06, 0x00, 0x1c, 
	0x78, 0x73, 0x03, 0x7e, 0x3f, 0x7c, 0xdc, 0x39, 0x00, 0x80, 0x7f, 0x00, 0x7f, 0x06, 0x00, 0x00, 
	0x78, 0x3b, 0x07, 0x77, 0x07, 0x7c, 0xcc, 0x39, 0x00, 0x80, 0x3f, 0x00, 0x7f, 0x02, 0x00, 0x00, 
	0xf8, 0x3b, 0x07, 0x07, 0x3f, 0xec, 0xec, 0x39, 0x00, 0xc0, 0x1f, 0x00, 0xfe, 0x00, 0x00, 0x00, 
	0xd8, 0x3b, 0x07, 0x73, 0x3f, 0xee, 0xfe, 0x18, 0x00, 0xe0, 0x0f, 0x00, 0xfe, 0x00, 0x00, 0x00, 
	0xd8, 0x3b, 0x03, 0x7b, 0x0f, 0xfe, 0x7e, 0x1c, 0x00, 0xe0, 0x0f, 0x00, 0x7c, 0x01, 0x00, 0x00, 
	0xd8, 0xbb, 0x03, 0x79, 0x03, 0xfe, 0xee, 0x1c, 0x00, 0xf0, 0x07, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x98, 0xfb, 0x03, 0x7f, 0x7f, 0xff, 0xee, 0x1c, 0x00, 0xf0, 0x03, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x98, 0xf3, 0x01, 0x3f, 0x7f, 0xc7, 0xce, 0x1d, 0x00, 0xf0, 0x01, 0x00, 0x18, 0x00, 0x00, 0x00, 
	0x98, 0xe3, 0x00, 0x1c, 0x3f, 0xc7, 0x4f, 0x08, 0x00, 0xe8, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// '4', 128x54px
const unsigned char EndingBitmap_Success [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x18, 0x0f, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xdf, 0xff, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf8, 0xe3, 0x0f, 0x00, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xe0, 0xff, 0x77, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x80, 0x00, 0xff, 0x60, 0x7f, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x1c, 0x81, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0c, 0x08, 0xf0, 0xf1, 0x03, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x30, 0x08, 0xfa, 0xf9, 0xe3, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x44, 0x7e, 0xfe, 0x1f, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x40, 0x00, 0xce, 0xdf, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x40, 0x00, 0xf8, 0x3f, 0xfe, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x60, 0x02, 0xea, 0x23, 0x9c, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0x84, 0x10, 0xe7, 0x40, 0x88, 0x0f, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8e, 0x03, 0x31, 0x3c, 0x80, 0x18, 0x07, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x5c, 0x1c, 0x00, 0x7c, 0x00, 0x31, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x28, 0x38, 0x00, 0x98, 0x00, 0x7e, 0x06, 0x00, 0x00, 0x00, 0x04, 0x80, 0x01, 0x02, 0x00, 0x00, 
	0x68, 0x38, 0x00, 0x00, 0x02, 0x20, 0x0c, 0x00, 0x00, 0x00, 0x02, 0x80, 0x01, 0x02, 0x00, 0x00, 
	0xf0, 0xe1, 0x00, 0x00, 0x08, 0x60, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x02, 0x20, 0x03, 
	0x0c, 0x7e, 0x00, 0x00, 0x20, 0xc0, 0x08, 0x00, 0x00, 0x00, 0x00, 0x60, 0x80, 0x00, 0xe0, 0x07, 
	0x06, 0xfc, 0x00, 0x00, 0x80, 0x80, 0x01, 0x00, 0x00, 0x80, 0x00, 0x20, 0xc0, 0xe0, 0x70, 0x06, 
	0x02, 0x80, 0x00, 0x00, 0x00, 0x06, 0x13, 0x00, 0x10, 0x40, 0x80, 0x01, 0x03, 0xfc, 0x30, 0x03, 
	0x02, 0x88, 0x00, 0x01, 0x00, 0x18, 0x02, 0x00, 0x18, 0x03, 0x86, 0x91, 0x63, 0x3e, 0x98, 0x01, 
	0x02, 0x88, 0x12, 0x01, 0x00, 0xe0, 0x01, 0x00, 0x98, 0x33, 0xc6, 0x81, 0x33, 0x0c, 0xd8, 0x00, 
	0x02, 0x08, 0x58, 0x80, 0x00, 0x80, 0x00, 0x00, 0x98, 0x11, 0xc3, 0xcd, 0x23, 0x46, 0x6c, 0x00, 
	0x00, 0x04, 0x44, 0x00, 0x00, 0x00, 0x30, 0x00, 0x8c, 0x11, 0xe1, 0xe1, 0x1a, 0x7b, 0x3c, 0x00, 
	0x04, 0x04, 0x38, 0x00, 0x00, 0x00, 0x7f, 0x00, 0xec, 0x89, 0xf3, 0xe7, 0x03, 0x0f, 0xbe, 0x03, 
	0x18, 0x03, 0x38, 0x01, 0x00, 0xe0, 0x36, 0x00, 0xbc, 0x81, 0xb1, 0x73, 0x0f, 0x0f, 0xfe, 0x7f, 
	0x40, 0x00, 0xf4, 0x00, 0x00, 0x60, 0x72, 0x00, 0xa6, 0xc4, 0xb9, 0x73, 0x87, 0x11, 0x07, 0x00, 
	0x00, 0x00, 0x36, 0x00, 0x00, 0xe0, 0x66, 0x00, 0x9e, 0xc3, 0x98, 0x33, 0x87, 0x19, 0x03, 0x00, 
	0x00, 0x00, 0x20, 0x00, 0x00, 0xc0, 0x7c, 0x00, 0xce, 0xc3, 0x98, 0x31, 0x83, 0x0f, 0x01, 0x00, 
	0x00, 0x00, 0x60, 0x02, 0x00, 0xe0, 0xed, 0x00, 0x4f, 0xc1, 0x8c, 0x11, 0x02, 0x07, 0x01, 0x00, 
	0x00, 0x00, 0x40, 0x03, 0x00, 0xc0, 0xc0, 0x00, 0xc7, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x07, 0x00, 0xc0, 0xe1, 0x00, 0xc7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0e, 0x06, 0x00, 0x80, 0x03, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xec, 0x07, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xdc, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// '3', 128x54px
const unsigned char EndingBitmap_TooFast [] PROGMEM = {
	0x00, 0x39, 0x80, 0x7d, 0x02, 0x80, 0x10, 0x00, 0x00, 0x40, 0x00, 0x00, 0x5e, 0x60, 0xe0, 0x1f, 
	0x00, 0x64, 0x00, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x80, 0xf8, 0x07, 
	0x03, 0x90, 0x01, 0xac, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 0x0e, 0x2c, 0xfe, 0xc0, 
	0x1f, 0x00, 0x06, 0xb0, 0x06, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x44, 0x05, 0x80, 0x3f, 0xf0, 
	0x7f, 0xfe, 0xff, 0xff, 0x0f, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x17, 0xa0, 0x00, 0xc0, 0x0d, 0xfc, 
	0xbf, 0xff, 0xff, 0xff, 0x3f, 0x00, 0xc0, 0x00, 0x0e, 0x81, 0x03, 0x58, 0x00, 0x70, 0x03, 0xff, 
	0xff, 0x01, 0x00, 0x00, 0x70, 0x04, 0xfc, 0x07, 0x3c, 0xc3, 0x00, 0x18, 0x00, 0x5c, 0xe0, 0x1b, 
	0xdb, 0xfe, 0xff, 0xff, 0xef, 0xff, 0xff, 0x0f, 0xfc, 0x77, 0x10, 0x08, 0x00, 0x12, 0xf8, 0xc0, 
	0xd8, 0xff, 0xff, 0xff, 0x6f, 0xf1, 0xe3, 0xff, 0xff, 0x3f, 0x10, 0x04, 0x80, 0x04, 0x1e, 0xf8, 
	0xc0, 0xff, 0xff, 0xff, 0x6f, 0x00, 0xc0, 0xff, 0xff, 0x0f, 0x50, 0x02, 0x20, 0xc0, 0x03, 0x1f, 
	0xcf, 0xff, 0xff, 0xff, 0x6f, 0x0f, 0xc0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x08, 0x70, 0xe0, 0x01, 
	0xdf, 0x0f, 0x11, 0x11, 0xef, 0x7f, 0xc0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x18, 0x38, 0x00, 
	0xdb, 0xcf, 0xd5, 0x5d, 0x6f, 0xfe, 0xff, 0xff, 0xff, 0x07, 0x20, 0x00, 0x00, 0x03, 0x03, 0x00, 
	0xc0, 0x9f, 0x11, 0x51, 0x6e, 0xfc, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 
	0xc1, 0x7f, 0xdd, 0x5d, 0x6f, 0xfc, 0x07, 0xff, 0xff, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x70, 
	0xdf, 0x6f, 0xdd, 0x5d, 0x6f, 0xfc, 0x00, 0xfe, 0xff, 0x1f, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xdf, 0x9f, 0x1d, 0x91, 0xef, 0x3f, 0x00, 0xfc, 0xff, 0xdf, 0x4f, 0x00, 0x00, 0x00, 0x30, 0x00, 
	0xdf, 0xff, 0xff, 0xff, 0xef, 0x07, 0x00, 0xfe, 0xf0, 0xc7, 0x47, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0xc0, 0x7f, 0x4b, 0xc5, 0x6f, 0x00, 0x1e, 0x3f, 0x00, 0xd0, 0x1f, 0x00, 0x00, 0x10, 0x00, 0xe0, 
	0xc1, 0x7f, 0x4b, 0xed, 0x6f, 0x00, 0xe0, 0x0f, 0x00, 0xf0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0x7f, 0x0b, 0xed, 0x6f, 0x00, 0x00, 0x00, 0x00, 0xdc, 0xff, 0x00, 0x00, 0x00, 0x00, 0xc0, 
	0xc0, 0x7f, 0x0b, 0xed, 0x6f, 0x00, 0x00, 0x00, 0x00, 0xce, 0xc3, 0x01, 0x00, 0x00, 0x80, 0x1f, 
	0xdf, 0x7f, 0x0b, 0xed, 0x6f, 0x00, 0x00, 0x00, 0x80, 0xdf, 0x03, 0x10, 0x00, 0x00, 0x00, 0xc0, 
	0xdf, 0x7f, 0x2a, 0xed, 0x6f, 0x00, 0x00, 0x00, 0x60, 0xf8, 0x3f, 0x08, 0x00, 0x00, 0xe0, 0xff, 
	0xdf, 0xff, 0x0f, 0xff, 0x6f, 0x00, 0x00, 0x00, 0x30, 0x2c, 0xf0, 0x07, 0x00, 0xf0, 0xff, 0x07, 
	0xdf, 0xff, 0x03, 0xf8, 0x6f, 0x00, 0x00, 0x00, 0x38, 0x1c, 0x68, 0x04, 0x00, 0x00, 0x00, 0x00, 
	0xc3, 0xff, 0x01, 0xf0, 0x6f, 0x00, 0x00, 0x00, 0xbe, 0x9f, 0x0f, 0x04, 0x00, 0x00, 0x00, 0x00, 
	0xdf, 0xff, 0x00, 0xe0, 0x6f, 0x00, 0x00, 0x80, 0x1d, 0x1f, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 
	0xdf, 0xff, 0x00, 0xe0, 0x6f, 0x00, 0x00, 0xc0, 0x1d, 0x0e, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0xff, 0x00, 0xe0, 0x6f, 0x00, 0x00, 0xc0, 0x8f, 0x07, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0xff, 0x00, 0xe0, 0x6f, 0x00, 0x00, 0xc0, 0x17, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xd8, 0xff, 0x00, 0xf0, 0x6f, 0x00, 0x00, 0xd0, 0xc1, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0xcf, 0x0c, 0x76, 0x6f, 0x00, 0x00, 0x70, 0xa0, 0x66, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0xc0, 0xcf, 0x9c, 0x77, 0x6e, 0x00, 0x00, 0x18, 0xa0, 0x1e, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 
	0xc0, 0x8f, 0x9c, 0x27, 0x6f, 0x00, 0x00, 0x08, 0x4c, 0x06, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x00, 
	0xd0, 0x0f, 0x4d, 0x16, 0x6e, 0x00, 0x00, 0x00, 0x41, 0x07, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 
	0xc3, 0x0f, 0x41, 0x08, 0x6e, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x00, 0x30, 0x00, 0x00, 0xff, 
	0xc0, 0xff, 0x07, 0xfc, 0x6f, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xc0, 
	0xdf, 0xff, 0x07, 0xfe, 0x6f, 0x02, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x78, 0x00, 0x03, 
	0xdf, 0xff, 0x1b, 0xfb, 0x6f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x60, 
	0xdf, 0x3f, 0x98, 0x83, 0x6f, 0x00, 0x00, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x20, 0xfc, 0x01, 
	0xc0, 0x7f, 0xf8, 0xc3, 0x6f, 0x00, 0x00, 0x80, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0x3f, 
	0xdc, 0xff, 0xfc, 0xe7, 0x6f, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0xfe, 
	0xdb, 0xfe, 0xff, 0xff, 0x6f, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0xf3, 
	0xff, 0x01, 0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x3e, 
	0xff, 0xff, 0xff, 0xff, 0x3f, 0x70, 0x04, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x02, 0x60, 0x00, 0xf0, 
	0x7f, 0xff, 0xff, 0xff, 0x1f, 0xf0, 0x0f, 0x60, 0x2f, 0x00, 0x00, 0x00, 0x08, 0x80, 0x03, 0x81, 
	0x1f, 0x04, 0xff, 0xff, 0x7f, 0xf8, 0x7f, 0x20, 0x1c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x1e, 0x08, 
	0xc3, 0xe0, 0x07, 0x00, 0xff, 0xff, 0xff, 0x20, 0x0c, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xf0, 0x40, 
	0x38, 0xfe, 0x01, 0x90, 0xff, 0xff, 0xff, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x80, 0x03, 0xc0, 0x07, 
	0xc7, 0x7f, 0xff, 0x80, 0xff, 0xff, 0xff, 0xcf, 0x20, 0x00, 0x00, 0x00, 0x08, 0x0e, 0x10, 0x3f, 
	0xf8, 0x9f, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x4f, 0x40, 0x00, 0x00, 0x00, 0x01, 0x18, 0x40, 0xfc, 
	0xff, 0x07, 0xf8, 0xff, 0xff, 0xff, 0x3f, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xf3, 
	0xff, 0x00, 0xf2, 0xff, 0xff, 0xff, 0x3f, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x8c
};
// '2', 128x54px
const unsigned char EndingBitmap_MissedMothership [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0xc0, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xfe, 0xe3, 0xff, 0x7f, 0x1f, 0xf9, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x40, 0x80, 0xff, 0x07, 0x10, 0x50, 0xcf, 0x3c, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xcf, 0x00, 0x03, 0x20, 0xfc, 0xff, 0xff, 0x7f, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0x7f, 0xe0, 0x07, 0x30, 0x3c, 0xf8, 0xdf, 0xdf, 0x87, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0x3f, 0x00, 0xfe, 0x01, 0x1e, 0x80, 0x87, 0xf8, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0x1f, 0xfb, 0x0f, 0x00, 0x1f, 0x80, 0x33, 0xfb, 0xfb, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x1c, 0xbf, 0xfd, 0x13, 0x9c, 0x1f, 0xc0, 0xad, 0xff, 0xff, 0xff, 0xff, 0x07, 0x02, 0x00, 0x00, 
	0x04, 0x40, 0xfe, 0x09, 0xde, 0x87, 0xc3, 0xff, 0xdf, 0xfb, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 
	0x04, 0x20, 0xff, 0x04, 0xee, 0xff, 0x7f, 0xff, 0xdf, 0xfe, 0xdf, 0xff, 0xff, 0x01, 0x00, 0x00, 
	0x04, 0xd0, 0x7f, 0x02, 0xe2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 
	0x04, 0x00, 0x3c, 0x01, 0x02, 0x20, 0xb0, 0xdf, 0x06, 0x07, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x24, 0x02, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xc0, 0x03, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x00, 0x80, 0x00, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0e, 0xc0, 0xf6, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0xfb, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x86, 0x3f, 0x00, 0x00, 0xfe, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x0e, 0x00, 0x00, 0xe7, 0xff, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x87, 0x07, 0x00, 0x80, 0x0f, 0x03, 0x00, 0x00, 0xff, 0xff, 0x03, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x01, 0x00, 0xf8, 0x01, 0x00, 0x00, 0xfe, 0xff, 0x07, 0x00, 
	0x00, 0x00, 0x08, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0xef, 0x07, 
	0x00, 0x00, 0x00, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x3f, 0xfe, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x00, 0x04, 
	0x00, 0xf8, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x8f, 0x01, 0x02, 
	0x00, 0xfe, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x80, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0xc0, 0x0f, 0xf0, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 
	0xe0, 0x03, 0xc0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x8f, 0x0f, 0x30, 
	0xf0, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xcd, 0xf3, 0x7f, 0x00, 
	0x70, 0xf0, 0x0f, 0x9f, 0x03, 0x00, 0x00, 0x00, 0x38, 0xf0, 0x00, 0xc0, 0xff, 0x71, 0x1f, 0x00, 
	0x38, 0xf8, 0x1f, 0xe6, 0x07, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x07, 0x00, 0x30, 0xbe, 0x1f, 0x00, 
	0x38, 0xfe, 0x3f, 0xf1, 0x03, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x0f, 0x00, 0x00, 0xac, 0x3f, 0x00, 
	0x1c, 0x1e, 0x78, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x1f, 0x00, 0x23, 0x1f, 0x33, 0x00, 
	0x1c, 0x0f, 0x30, 0x38, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x3f, 0x00, 0xa0, 0x27, 0x26, 0x00, 
	0x1c, 0x07, 0xc0, 0x38, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x3c, 0x00, 0x20, 0x83, 0x46, 0x00, 
	0x8e, 0xc3, 0xe3, 0x38, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x78, 0x40, 0xb1, 0x01, 0x0c, 0x00, 
	0x8e, 0xe3, 0xc1, 0x31, 0x1c, 0xc6, 0x7c, 0x7c, 0x1e, 0xff, 0x73, 0x60, 0xc4, 0x06, 0x30, 0x01, 
	0x8e, 0x63, 0xc6, 0x31, 0x3c, 0xe7, 0x7e, 0x7e, 0x1e, 0xf8, 0x77, 0x00, 0x00, 0x40, 0x40, 0x00, 
	0x8e, 0xe3, 0xc7, 0x31, 0x3c, 0x77, 0x6e, 0x6e, 0x0e, 0x00, 0xf4, 0x1c, 0x00, 0x00, 0x2e, 0x00, 
	0x8e, 0xc3, 0xe3, 0x38, 0xbc, 0x77, 0x6f, 0x6f, 0x0e, 0x00, 0xc0, 0x63, 0x00, 0x00, 0x00, 0x01, 
	0x1c, 0x07, 0xe0, 0x38, 0xfc, 0x77, 0x0f, 0x0f, 0x0e, 0x00, 0x80, 0xc2, 0x00, 0x00, 0x00, 0x00, 
	0x1c, 0x0f, 0xf0, 0x38, 0xfc, 0x77, 0x3e, 0x3e, 0x0e, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00, 0x00, 
	0x1c, 0x1e, 0x78, 0x3c, 0xfc, 0x7f, 0x7c, 0x7c, 0x06, 0x00, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0x38, 0xfc, 0x3f, 0x1c, 0xfc, 0x7f, 0x70, 0x70, 0x07, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x78, 0xf8, 0x1f, 0x1e, 0xfc, 0x7e, 0x73, 0x73, 0x07, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x70, 0xe0, 0x07, 0x0f, 0xfc, 0x7e, 0x7f, 0x7f, 0x07, 0x00, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 
	0xf0, 0x01, 0x80, 0x07, 0x1c, 0x7f, 0x3f, 0x3f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xe0, 0x03, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0x0f, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 3520)
// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 3520)
const int EndingBitmap_allArray_LEN = 4;
const unsigned char* EndingBitmap_allArray[4] = {
	EndingBitmap_No_Gear,
	EndingBitmap_MissedMothership,
	EndingBitmap_TooFast,
	EndingBitmap_Success
};
